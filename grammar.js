/**
 * Tree-sitter grammar for Huawei VRP (Versatile Routing Platform) CLI config files.
 *
 * VRP config syntax is strictly line-based:
 *   - Each line is a command, comment, or blank
 *   - Sub-commands are indented under interface/block declarations
 *   - Comments start with '#'
 *
 * Based on regex patterns from kirylx/vscode-huawei-vrp-helper (MIT licensed).
 *
 * Build: cd tree-sitter-vrp && npx tree-sitter generate && npx tree-sitter build --wasm
 */

module.exports = grammar({
  name: 'vrp',

  // Only spaces and tabs are extras; newlines are part of line rules
  extras: $ => [
    /[ \t]/,
  ],

  rules: {
    // A source file is zero or more lines
    source_file: $ => repeat($._line),

    // Any single line: comment, blank, or command
    _line: $ => choice(
      $.comment,
      $.blank_line,
      $.cmd_interface,
      $.cmd_generic,
    ),

    // Blank line (just whitespace and newline)
    blank_line: $ => seq(
      optional(/[ \t]+/),
      /\r?\n/,
    ),

    // Comment: '#' followed by anything until end of line
    comment: $ => seq(
      optional(/[ \t]+/),
      '#',
      /[^\n]*/,
      /\r?\n/,
    ),

    // Interface declaration: "interface <name> [rest]" until end of line
    cmd_interface: $ => seq(
      optional(/[ \t]+/),
      'interface',
      /[ \t]+/,
      field('name', $.interface_name),
      optional(seq(
        /[ \t]+/,
        repeat(choice(
          $.ip_address,
          $.ip_address_slash,
          $.number,
          $.quoted_string,
          /[^ \t\r\n]+/,
        )),
      )),
      /\r?\n/,
    ),

    // Interface name: GigabitEthernet0/0/1, 10GE1/0/1, Vlanif10, Eth-Trunk1, LoopBack0
    interface_name: $ => /[A-Za-z][A-Za-z0-9\/\-_]*/,

    // Generic command: keyword followed by optional args until end of line
    cmd_generic: $ => seq(
      optional(/[ \t]+/),
      field('keyword', $.keyword),
      optional(seq(
        /[ \t]+/,
        repeat(choice(
          $.ip_address,
          $.ip_address_slash,
          $.number,
          $.quoted_string,
          /[^ \t\r\n]+/,
        )),
      )),
      /\r?\n/,
    ),

    // IP address literal: n.n.n.n
    ip_address: $ => token(seq(
      /[0-9]{1,3}/,
      '.',
      /[0-9]{1,3}/,
      '.',
      /[0-9]{1,3}/,
      '.',
      /[0-9]{1,3}/,
    )),

    // IP address with CIDR slash: n.n.n.n/nn
    ip_address_slash: $ => token(seq(
      /[0-9]{1,3}/,
      '.',
      /[0-9]{1,3}/,
      '.',
      /[0-9]{1,3}/,
      '.',
      /[0-9]{1,3}/,
      '/',
      /[0-9]{1,2}/,
    )),

    // Numeric literal
    number: $ => /[0-9]+/,

    // Quoted string
    quoted_string: $ => token(seq(
      '"',
      /[^"]*/,
      '"',
    )),

    // Keywords are matched as word tokens
    keyword: $ => choice(
      // System & basic
      'sysname', 'system-view', 'quit', 'return', 'save', 'reboot', 'commit', 'rollback',
      // Display
      'display', 'disp',
      // VLAN
      'vlan', 'vlanif', 'batch',
      // Interface sub-commands
      'description', 'ip', 'port', 'undo', 'shutdown', 'shut',
      // Authentication
      'aaa', 'local-user', 'authentication-mode', 'authorization-mode',
      // VPN
      'vpn-instance', 'route-distinguisher', 'vpn-target',
      // Routing
      'ospf', 'bgp', 'isis', 'rip', 'area', 'network', 'route-policy',
      // BFD
      'bfd', 'discriminator', 'min-tx-interval', 'min-rx-interval', 'detect-multiplier',
      // ACL
      'acl',
      // Traffic
      'traffic', 'classifier', 'behavior', 'policy',
      // STP
      'stp', 'rstp', 'mstp',
      // VRRP
      'vrrp', 'vrid', 'virtual-ip', 'priority',
      // Link aggregation
      'eth-trunk', 'mode', 'lacp',
      // LLDP / SNMP / NTP
      'lldp', 'snmp-agent', 'ntp-service', 'ntp-server',
      // DHCP
      'dhcp', 'ip-pool',
      // Stack
      'stack', 'css',
      // Mirror
      'mirror', 'observe-port',
      // SSH / Console
      'ssh', 'stelnet', 'protocol', 'inbound',
      'user-interface', 'authentication', 'idle-timeout',
      // Service
      'service-type', 'level', 'state', 'password',
      // Misc
      'header', 'banner', 'time-range', 'set',
      // Permissions
      'permit', 'deny',
      // M-LAG / DFS
      'dfs-group', 'm-lag',
      // Link type
      'link-type', 'trunk', 'access', 'hybrid',
      'allow-pass', 'default',
      // IP routing
      'route-static', 'ipv6',
      // Prefix
      'ip-prefix',
      // Additional
      'export-extcommunity', 'import-extcommunity',
      'binding',
      'irf', 'member',
      // Generic fallback: any word
      /[A-Za-z][A-Za-z0-9\-_]*/,
    ),
  },
});
