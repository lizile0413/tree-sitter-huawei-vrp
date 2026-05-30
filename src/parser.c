#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  aux_sym_blank_line_token1 = 1,
  aux_sym_blank_line_token2 = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_interface = 5,
  aux_sym_cmd_interface_token1 = 6,
  sym_interface_name = 7,
  sym_ip_address = 8,
  sym_ip_address_slash = 9,
  sym_number = 10,
  sym_quoted_string = 11,
  anon_sym_sysname = 12,
  anon_sym_system_DASHview = 13,
  anon_sym_quit = 14,
  anon_sym_return = 15,
  anon_sym_save = 16,
  anon_sym_reboot = 17,
  anon_sym_commit = 18,
  anon_sym_rollback = 19,
  anon_sym_display = 20,
  anon_sym_disp = 21,
  anon_sym_vlan = 22,
  anon_sym_vlanif = 23,
  anon_sym_batch = 24,
  anon_sym_description = 25,
  anon_sym_ip = 26,
  anon_sym_port = 27,
  anon_sym_undo = 28,
  anon_sym_shutdown = 29,
  anon_sym_shut = 30,
  anon_sym_aaa = 31,
  anon_sym_local_DASHuser = 32,
  anon_sym_authentication_DASHmode = 33,
  anon_sym_authorization_DASHmode = 34,
  anon_sym_vpn_DASHinstance = 35,
  anon_sym_route_DASHdistinguisher = 36,
  anon_sym_vpn_DASHtarget = 37,
  anon_sym_ospf = 38,
  anon_sym_bgp = 39,
  anon_sym_isis = 40,
  anon_sym_rip = 41,
  anon_sym_area = 42,
  anon_sym_network = 43,
  anon_sym_route_DASHpolicy = 44,
  anon_sym_bfd = 45,
  anon_sym_discriminator = 46,
  anon_sym_min_DASHtx_DASHinterval = 47,
  anon_sym_min_DASHrx_DASHinterval = 48,
  anon_sym_detect_DASHmultiplier = 49,
  anon_sym_acl = 50,
  anon_sym_traffic = 51,
  anon_sym_classifier = 52,
  anon_sym_behavior = 53,
  anon_sym_policy = 54,
  anon_sym_stp = 55,
  anon_sym_rstp = 56,
  anon_sym_mstp = 57,
  anon_sym_vrrp = 58,
  anon_sym_vrid = 59,
  anon_sym_virtual_DASHip = 60,
  anon_sym_priority = 61,
  anon_sym_eth_DASHtrunk = 62,
  anon_sym_mode = 63,
  anon_sym_lacp = 64,
  anon_sym_lldp = 65,
  anon_sym_snmp_DASHagent = 66,
  anon_sym_ntp_DASHservice = 67,
  anon_sym_ntp_DASHserver = 68,
  anon_sym_dhcp = 69,
  anon_sym_ip_DASHpool = 70,
  anon_sym_stack = 71,
  anon_sym_css = 72,
  anon_sym_mirror = 73,
  anon_sym_observe_DASHport = 74,
  anon_sym_ssh = 75,
  anon_sym_stelnet = 76,
  anon_sym_protocol = 77,
  anon_sym_inbound = 78,
  anon_sym_user_DASHinterface = 79,
  anon_sym_authentication = 80,
  anon_sym_idle_DASHtimeout = 81,
  anon_sym_service_DASHtype = 82,
  anon_sym_level = 83,
  anon_sym_state = 84,
  anon_sym_password = 85,
  anon_sym_header = 86,
  anon_sym_banner = 87,
  anon_sym_time_DASHrange = 88,
  anon_sym_set = 89,
  anon_sym_permit = 90,
  anon_sym_deny = 91,
  anon_sym_dfs_DASHgroup = 92,
  anon_sym_m_DASHlag = 93,
  anon_sym_link_DASHtype = 94,
  anon_sym_trunk = 95,
  anon_sym_access = 96,
  anon_sym_hybrid = 97,
  anon_sym_allow_DASHpass = 98,
  anon_sym_default = 99,
  anon_sym_route_DASHstatic = 100,
  anon_sym_ipv6 = 101,
  anon_sym_ip_DASHprefix = 102,
  anon_sym_export_DASHextcommunity = 103,
  anon_sym_import_DASHextcommunity = 104,
  anon_sym_binding = 105,
  anon_sym_irf = 106,
  anon_sym_member = 107,
  aux_sym_keyword_token1 = 108,
  sym_source_file = 109,
  sym__line = 110,
  sym_blank_line = 111,
  sym_comment = 112,
  sym_cmd_interface = 113,
  sym_cmd_generic = 114,
  sym_keyword = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_cmd_interface_repeat1 = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_blank_line_token1] = "blank_line_token1",
  [aux_sym_blank_line_token2] = "blank_line_token2",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_interface] = "interface",
  [aux_sym_cmd_interface_token1] = "cmd_interface_token1",
  [sym_interface_name] = "interface_name",
  [sym_ip_address] = "ip_address",
  [sym_ip_address_slash] = "ip_address_slash",
  [sym_number] = "number",
  [sym_quoted_string] = "quoted_string",
  [anon_sym_sysname] = "sysname",
  [anon_sym_system_DASHview] = "system-view",
  [anon_sym_quit] = "quit",
  [anon_sym_return] = "return",
  [anon_sym_save] = "save",
  [anon_sym_reboot] = "reboot",
  [anon_sym_commit] = "commit",
  [anon_sym_rollback] = "rollback",
  [anon_sym_display] = "display",
  [anon_sym_disp] = "disp",
  [anon_sym_vlan] = "vlan",
  [anon_sym_vlanif] = "vlanif",
  [anon_sym_batch] = "batch",
  [anon_sym_description] = "description",
  [anon_sym_ip] = "ip",
  [anon_sym_port] = "port",
  [anon_sym_undo] = "undo",
  [anon_sym_shutdown] = "shutdown",
  [anon_sym_shut] = "shut",
  [anon_sym_aaa] = "aaa",
  [anon_sym_local_DASHuser] = "local-user",
  [anon_sym_authentication_DASHmode] = "authentication-mode",
  [anon_sym_authorization_DASHmode] = "authorization-mode",
  [anon_sym_vpn_DASHinstance] = "vpn-instance",
  [anon_sym_route_DASHdistinguisher] = "route-distinguisher",
  [anon_sym_vpn_DASHtarget] = "vpn-target",
  [anon_sym_ospf] = "ospf",
  [anon_sym_bgp] = "bgp",
  [anon_sym_isis] = "isis",
  [anon_sym_rip] = "rip",
  [anon_sym_area] = "area",
  [anon_sym_network] = "network",
  [anon_sym_route_DASHpolicy] = "route-policy",
  [anon_sym_bfd] = "bfd",
  [anon_sym_discriminator] = "discriminator",
  [anon_sym_min_DASHtx_DASHinterval] = "min-tx-interval",
  [anon_sym_min_DASHrx_DASHinterval] = "min-rx-interval",
  [anon_sym_detect_DASHmultiplier] = "detect-multiplier",
  [anon_sym_acl] = "acl",
  [anon_sym_traffic] = "traffic",
  [anon_sym_classifier] = "classifier",
  [anon_sym_behavior] = "behavior",
  [anon_sym_policy] = "policy",
  [anon_sym_stp] = "stp",
  [anon_sym_rstp] = "rstp",
  [anon_sym_mstp] = "mstp",
  [anon_sym_vrrp] = "vrrp",
  [anon_sym_vrid] = "vrid",
  [anon_sym_virtual_DASHip] = "virtual-ip",
  [anon_sym_priority] = "priority",
  [anon_sym_eth_DASHtrunk] = "eth-trunk",
  [anon_sym_mode] = "mode",
  [anon_sym_lacp] = "lacp",
  [anon_sym_lldp] = "lldp",
  [anon_sym_snmp_DASHagent] = "snmp-agent",
  [anon_sym_ntp_DASHservice] = "ntp-service",
  [anon_sym_ntp_DASHserver] = "ntp-server",
  [anon_sym_dhcp] = "dhcp",
  [anon_sym_ip_DASHpool] = "ip-pool",
  [anon_sym_stack] = "stack",
  [anon_sym_css] = "css",
  [anon_sym_mirror] = "mirror",
  [anon_sym_observe_DASHport] = "observe-port",
  [anon_sym_ssh] = "ssh",
  [anon_sym_stelnet] = "stelnet",
  [anon_sym_protocol] = "protocol",
  [anon_sym_inbound] = "inbound",
  [anon_sym_user_DASHinterface] = "user-interface",
  [anon_sym_authentication] = "authentication",
  [anon_sym_idle_DASHtimeout] = "idle-timeout",
  [anon_sym_service_DASHtype] = "service-type",
  [anon_sym_level] = "level",
  [anon_sym_state] = "state",
  [anon_sym_password] = "password",
  [anon_sym_header] = "header",
  [anon_sym_banner] = "banner",
  [anon_sym_time_DASHrange] = "time-range",
  [anon_sym_set] = "set",
  [anon_sym_permit] = "permit",
  [anon_sym_deny] = "deny",
  [anon_sym_dfs_DASHgroup] = "dfs-group",
  [anon_sym_m_DASHlag] = "m-lag",
  [anon_sym_link_DASHtype] = "link-type",
  [anon_sym_trunk] = "trunk",
  [anon_sym_access] = "access",
  [anon_sym_hybrid] = "hybrid",
  [anon_sym_allow_DASHpass] = "allow-pass",
  [anon_sym_default] = "default",
  [anon_sym_route_DASHstatic] = "route-static",
  [anon_sym_ipv6] = "ipv6",
  [anon_sym_ip_DASHprefix] = "ip-prefix",
  [anon_sym_export_DASHextcommunity] = "export-extcommunity",
  [anon_sym_import_DASHextcommunity] = "import-extcommunity",
  [anon_sym_binding] = "binding",
  [anon_sym_irf] = "irf",
  [anon_sym_member] = "member",
  [aux_sym_keyword_token1] = "keyword_token1",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_blank_line] = "blank_line",
  [sym_comment] = "comment",
  [sym_cmd_interface] = "cmd_interface",
  [sym_cmd_generic] = "cmd_generic",
  [sym_keyword] = "keyword",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_cmd_interface_repeat1] = "cmd_interface_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_blank_line_token1] = aux_sym_blank_line_token1,
  [aux_sym_blank_line_token2] = aux_sym_blank_line_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_interface] = anon_sym_interface,
  [aux_sym_cmd_interface_token1] = aux_sym_cmd_interface_token1,
  [sym_interface_name] = sym_interface_name,
  [sym_ip_address] = sym_ip_address,
  [sym_ip_address_slash] = sym_ip_address_slash,
  [sym_number] = sym_number,
  [sym_quoted_string] = sym_quoted_string,
  [anon_sym_sysname] = anon_sym_sysname,
  [anon_sym_system_DASHview] = anon_sym_system_DASHview,
  [anon_sym_quit] = anon_sym_quit,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_reboot] = anon_sym_reboot,
  [anon_sym_commit] = anon_sym_commit,
  [anon_sym_rollback] = anon_sym_rollback,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_disp] = anon_sym_disp,
  [anon_sym_vlan] = anon_sym_vlan,
  [anon_sym_vlanif] = anon_sym_vlanif,
  [anon_sym_batch] = anon_sym_batch,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_undo] = anon_sym_undo,
  [anon_sym_shutdown] = anon_sym_shutdown,
  [anon_sym_shut] = anon_sym_shut,
  [anon_sym_aaa] = anon_sym_aaa,
  [anon_sym_local_DASHuser] = anon_sym_local_DASHuser,
  [anon_sym_authentication_DASHmode] = anon_sym_authentication_DASHmode,
  [anon_sym_authorization_DASHmode] = anon_sym_authorization_DASHmode,
  [anon_sym_vpn_DASHinstance] = anon_sym_vpn_DASHinstance,
  [anon_sym_route_DASHdistinguisher] = anon_sym_route_DASHdistinguisher,
  [anon_sym_vpn_DASHtarget] = anon_sym_vpn_DASHtarget,
  [anon_sym_ospf] = anon_sym_ospf,
  [anon_sym_bgp] = anon_sym_bgp,
  [anon_sym_isis] = anon_sym_isis,
  [anon_sym_rip] = anon_sym_rip,
  [anon_sym_area] = anon_sym_area,
  [anon_sym_network] = anon_sym_network,
  [anon_sym_route_DASHpolicy] = anon_sym_route_DASHpolicy,
  [anon_sym_bfd] = anon_sym_bfd,
  [anon_sym_discriminator] = anon_sym_discriminator,
  [anon_sym_min_DASHtx_DASHinterval] = anon_sym_min_DASHtx_DASHinterval,
  [anon_sym_min_DASHrx_DASHinterval] = anon_sym_min_DASHrx_DASHinterval,
  [anon_sym_detect_DASHmultiplier] = anon_sym_detect_DASHmultiplier,
  [anon_sym_acl] = anon_sym_acl,
  [anon_sym_traffic] = anon_sym_traffic,
  [anon_sym_classifier] = anon_sym_classifier,
  [anon_sym_behavior] = anon_sym_behavior,
  [anon_sym_policy] = anon_sym_policy,
  [anon_sym_stp] = anon_sym_stp,
  [anon_sym_rstp] = anon_sym_rstp,
  [anon_sym_mstp] = anon_sym_mstp,
  [anon_sym_vrrp] = anon_sym_vrrp,
  [anon_sym_vrid] = anon_sym_vrid,
  [anon_sym_virtual_DASHip] = anon_sym_virtual_DASHip,
  [anon_sym_priority] = anon_sym_priority,
  [anon_sym_eth_DASHtrunk] = anon_sym_eth_DASHtrunk,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_lacp] = anon_sym_lacp,
  [anon_sym_lldp] = anon_sym_lldp,
  [anon_sym_snmp_DASHagent] = anon_sym_snmp_DASHagent,
  [anon_sym_ntp_DASHservice] = anon_sym_ntp_DASHservice,
  [anon_sym_ntp_DASHserver] = anon_sym_ntp_DASHserver,
  [anon_sym_dhcp] = anon_sym_dhcp,
  [anon_sym_ip_DASHpool] = anon_sym_ip_DASHpool,
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_mirror] = anon_sym_mirror,
  [anon_sym_observe_DASHport] = anon_sym_observe_DASHport,
  [anon_sym_ssh] = anon_sym_ssh,
  [anon_sym_stelnet] = anon_sym_stelnet,
  [anon_sym_protocol] = anon_sym_protocol,
  [anon_sym_inbound] = anon_sym_inbound,
  [anon_sym_user_DASHinterface] = anon_sym_user_DASHinterface,
  [anon_sym_authentication] = anon_sym_authentication,
  [anon_sym_idle_DASHtimeout] = anon_sym_idle_DASHtimeout,
  [anon_sym_service_DASHtype] = anon_sym_service_DASHtype,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_password] = anon_sym_password,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_banner] = anon_sym_banner,
  [anon_sym_time_DASHrange] = anon_sym_time_DASHrange,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_permit] = anon_sym_permit,
  [anon_sym_deny] = anon_sym_deny,
  [anon_sym_dfs_DASHgroup] = anon_sym_dfs_DASHgroup,
  [anon_sym_m_DASHlag] = anon_sym_m_DASHlag,
  [anon_sym_link_DASHtype] = anon_sym_link_DASHtype,
  [anon_sym_trunk] = anon_sym_trunk,
  [anon_sym_access] = anon_sym_access,
  [anon_sym_hybrid] = anon_sym_hybrid,
  [anon_sym_allow_DASHpass] = anon_sym_allow_DASHpass,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_route_DASHstatic] = anon_sym_route_DASHstatic,
  [anon_sym_ipv6] = anon_sym_ipv6,
  [anon_sym_ip_DASHprefix] = anon_sym_ip_DASHprefix,
  [anon_sym_export_DASHextcommunity] = anon_sym_export_DASHextcommunity,
  [anon_sym_import_DASHextcommunity] = anon_sym_import_DASHextcommunity,
  [anon_sym_binding] = anon_sym_binding,
  [anon_sym_irf] = anon_sym_irf,
  [anon_sym_member] = anon_sym_member,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_blank_line] = sym_blank_line,
  [sym_comment] = sym_comment,
  [sym_cmd_interface] = sym_cmd_interface,
  [sym_cmd_generic] = sym_cmd_generic,
  [sym_keyword] = sym_keyword,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_cmd_interface_repeat1] = aux_sym_cmd_interface_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blank_line_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_interface_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_interface_name] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address_slash] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sysname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system_DASHview] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reboot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rollback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vlan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vlanif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_batch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shutdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHuser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authentication_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authorization_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpn_DASHinstance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route_DASHdistinguisher] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpn_DASHtarget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ospf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_network] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route_DASHpolicy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discriminator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min_DASHtx_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min_DASHrx_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_detect_DASHmultiplier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_traffic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_behavior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rstp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mstp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrrp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual_DASHip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eth_DASHtrunk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lacp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lldp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmp_DASHagent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ntp_DASHservice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ntp_DASHserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dhcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DASHpool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_css] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mirror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_observe_DASHport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stelnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inbound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_user_DASHinterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authentication] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idle_DASHtimeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_password] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_banner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time_DASHrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dfs_DASHgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m_DASHlag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trunk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_access] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hybrid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHpass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route_DASHstatic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DASHprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export_DASHextcommunity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import_DASHextcommunity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_generic] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_interface_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_keyword = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_keyword] = "keyword",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
  [1] =
    {field_keyword, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_name, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '\n', 19,
        '\r', 1,
        '"', 4,
        '#', 20,
        'a', 70,
        'b', 71,
        'c', 274,
        'd', 146,
        'e', 456,
        'h', 162,
        'i', 137,
        'l', 94,
        'm', 49,
        'n', 163,
        'o', 105,
        'p', 80,
        'q', 488,
        'r', 160,
        's', 95,
        't', 223,
        'u', 313,
        'v', 221,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 19,
        '\r', 1,
        '#', 20,
        'a', 760,
        'b', 761,
        'c', 964,
        'd', 836,
        'e', 1146,
        'h', 852,
        'i', 827,
        'l', 784,
        'm', 739,
        'n', 853,
        'o', 795,
        'p', 770,
        'q', 1178,
        'r', 850,
        's', 785,
        't', 913,
        'u', 1003,
        'v', 911,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(542);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '\n', 19,
        '\r', 1,
        '#', 20,
        'a', 760,
        'b', 761,
        'c', 964,
        'd', 836,
        'e', 1146,
        'h', 852,
        'i', 827,
        'l', 784,
        'm', 739,
        'n', 853,
        'o', 795,
        'p', 770,
        'q', 1178,
        'r', 850,
        's', 785,
        't', 913,
        'u', 1003,
        'v', 911,
        '\t', 18,
        ' ', 18,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_blank_line_token2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '/') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '/') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_cmd_interface_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 's') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(501);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(469);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(467);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(458);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(440);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '6') ADVANCE(721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_interface_name);
      ADVANCE_MAP(
        '/', 532,
        'a', 505,
        'e', 398,
        'h', 490,
        'n', 296,
        's', 214,
        't', 73,
        'y', 430,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(439);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(341);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'w') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'z') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_interface_name);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_ip_address_slash);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_ip_address_slash);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_sysname);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_sysname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_system_DASHview);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_system_DASHview);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_quit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_reboot);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_reboot);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_commit);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_commit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_rollback);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_rollback);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_disp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_disp);
      if (lookahead == 'l') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_vlan);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_vlan);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_vlanif);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_vlanif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_batch);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_batch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'v') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead == 'v') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_port);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_port);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_undo);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_undo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_shutdown);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_shutdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_shut);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_shut);
      if (lookahead == 'd') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_authentication_DASHmode);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_authentication_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_authorization_DASHmode);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_authorization_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_vpn_DASHinstance);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_vpn_DASHinstance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_route_DASHdistinguisher);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_route_DASHdistinguisher);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_vpn_DASHtarget);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_vpn_DASHtarget);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_ospf);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_ospf);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_bgp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_bgp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_isis);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_isis);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_rip);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_rip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_area);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_network);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_network);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_route_DASHpolicy);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_route_DASHpolicy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_bfd);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_bfd);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_discriminator);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_discriminator);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_min_DASHtx_DASHinterval);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_min_DASHtx_DASHinterval);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_min_DASHrx_DASHinterval);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_min_DASHrx_DASHinterval);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_detect_DASHmultiplier);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_detect_DASHmultiplier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_acl);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_acl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_traffic);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_traffic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_classifier);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_classifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_behavior);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_behavior);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_policy);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_policy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_stp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_stp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_rstp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_rstp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_mstp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_mstp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_vrrp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_vrrp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_vrid);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_vrid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_virtual_DASHip);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_virtual_DASHip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_priority);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_priority);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_eth_DASHtrunk);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_eth_DASHtrunk);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_lacp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_lacp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_lldp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_lldp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_snmp_DASHagent);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_snmp_DASHagent);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_ntp_DASHservice);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_ntp_DASHservice);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_ntp_DASHserver);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_ntp_DASHserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_dhcp);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_dhcp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_ip_DASHpool);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_ip_DASHpool);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_stack);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_stack);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_css);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_css);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_mirror);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_mirror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_observe_DASHport);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_observe_DASHport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_ssh);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_ssh);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_stelnet);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_stelnet);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_protocol);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_protocol);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_inbound);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_inbound);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_user_DASHinterface);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_user_DASHinterface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_authentication);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '/') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_authentication);
      if (lookahead == '-') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_idle_DASHtimeout);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_idle_DASHtimeout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_service_DASHtype);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_service_DASHtype);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_level);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_level);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_state);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_state);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_password);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_password);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_banner);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_banner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_time_DASHrange);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_time_DASHrange);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_permit);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_permit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_deny);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_deny);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_dfs_DASHgroup);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_dfs_DASHgroup);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_m_DASHlag);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_m_DASHlag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_link_DASHtype);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_link_DASHtype);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_trunk);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_trunk);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_access);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_access);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_hybrid);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_hybrid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_allow_DASHpass);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_allow_DASHpass);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_route_DASHstatic);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_route_DASHstatic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_ipv6);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_ipv6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_ip_DASHprefix);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_ip_DASHprefix);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_export_DASHextcommunity);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_export_DASHextcommunity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_import_DASHextcommunity);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_import_DASHextcommunity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_binding);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_binding);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_irf);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_irf);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_member);
      if (lookahead == '/') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_member);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == 'e') ADVANCE(977);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 's') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '6') ADVANCE(722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead == 'c') ADVANCE(803);
      if (lookahead == 'l') ADVANCE(958);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead == 'u') ADVANCE(1147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1004);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == 'f') ADVANCE(822);
      if (lookahead == 'g') ADVANCE(1054);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'e') ADVANCE(969);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'u') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1123);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == 'i') ADVANCE(994);
      if (lookahead == 'l') ADVANCE(831);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1195);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == 'n') ADVANCE(986);
      if (lookahead == 's') ADVANCE(904);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'y') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'b') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'b') ADVANCE(1028);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'b') ADVANCE(1129);
      if (lookahead == 's') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'b') ADVANCE(1031);
      if (lookahead == 't') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'b') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'b') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(882);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'c') ADVANCE(1052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(968);
      if (lookahead == 'm') ADVANCE(1075);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead == 'r') ADVANCE(887);
      if (lookahead == 's') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(944);
      if (lookahead == 'p') ADVANCE(1036);
      if (lookahead == 's') ADVANCE(1166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'd') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == 'f') ADVANCE(1115);
      if (lookahead == 'h') ADVANCE(806);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead == 'i') ADVANCE(1055);
      if (lookahead == 'o') ADVANCE(967);
      if (lookahead == 's') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead == 'y') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1133);
      if (lookahead == 't') ADVANCE(1067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1013);
      if (lookahead == 'o') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1084);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(768);
      if (lookahead == 'n') ADVANCE(1211);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead == 't') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'f') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(1189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'g') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'h') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'p') ADVANCE(1006);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == 'r') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1030);
      if (lookahead == 'o') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'r') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1011);
      if (lookahead == 't') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'k') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'k') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'k') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'k') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'k') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'k') ADVANCE(747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == 's') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(916);
      if (lookahead == 'r') ADVANCE(1134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(965);
      if (lookahead == 'u') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(1184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(1051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'm') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(738);
      if (lookahead == 'r') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(829);
      if (lookahead == 's') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1019);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(787);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'n') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'o') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'p') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1208);
      if (lookahead == 't') ADVANCE(1209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1199);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'r') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 's') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead == 'x') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(1219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'u') ADVANCE(1131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'v') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'w') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'w') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'w') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'x') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'x') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'x') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'x') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'x') ADVANCE(1176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'y') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'z') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1221);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_blank_line_token2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [sym_interface_name] = ACTIONS(1),
    [sym_ip_address] = ACTIONS(1),
    [sym_ip_address_slash] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [anon_sym_sysname] = ACTIONS(1),
    [anon_sym_system_DASHview] = ACTIONS(1),
    [anon_sym_quit] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_reboot] = ACTIONS(1),
    [anon_sym_commit] = ACTIONS(1),
    [anon_sym_rollback] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_disp] = ACTIONS(1),
    [anon_sym_vlan] = ACTIONS(1),
    [anon_sym_vlanif] = ACTIONS(1),
    [anon_sym_batch] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_undo] = ACTIONS(1),
    [anon_sym_shutdown] = ACTIONS(1),
    [anon_sym_shut] = ACTIONS(1),
    [anon_sym_aaa] = ACTIONS(1),
    [anon_sym_local_DASHuser] = ACTIONS(1),
    [anon_sym_authentication_DASHmode] = ACTIONS(1),
    [anon_sym_authorization_DASHmode] = ACTIONS(1),
    [anon_sym_vpn_DASHinstance] = ACTIONS(1),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(1),
    [anon_sym_vpn_DASHtarget] = ACTIONS(1),
    [anon_sym_ospf] = ACTIONS(1),
    [anon_sym_bgp] = ACTIONS(1),
    [anon_sym_isis] = ACTIONS(1),
    [anon_sym_rip] = ACTIONS(1),
    [anon_sym_area] = ACTIONS(1),
    [anon_sym_network] = ACTIONS(1),
    [anon_sym_route_DASHpolicy] = ACTIONS(1),
    [anon_sym_bfd] = ACTIONS(1),
    [anon_sym_discriminator] = ACTIONS(1),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(1),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(1),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(1),
    [anon_sym_acl] = ACTIONS(1),
    [anon_sym_traffic] = ACTIONS(1),
    [anon_sym_classifier] = ACTIONS(1),
    [anon_sym_behavior] = ACTIONS(1),
    [anon_sym_policy] = ACTIONS(1),
    [anon_sym_stp] = ACTIONS(1),
    [anon_sym_rstp] = ACTIONS(1),
    [anon_sym_mstp] = ACTIONS(1),
    [anon_sym_vrrp] = ACTIONS(1),
    [anon_sym_vrid] = ACTIONS(1),
    [anon_sym_virtual_DASHip] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_eth_DASHtrunk] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_lacp] = ACTIONS(1),
    [anon_sym_lldp] = ACTIONS(1),
    [anon_sym_snmp_DASHagent] = ACTIONS(1),
    [anon_sym_ntp_DASHservice] = ACTIONS(1),
    [anon_sym_ntp_DASHserver] = ACTIONS(1),
    [anon_sym_dhcp] = ACTIONS(1),
    [anon_sym_ip_DASHpool] = ACTIONS(1),
    [anon_sym_stack] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_mirror] = ACTIONS(1),
    [anon_sym_observe_DASHport] = ACTIONS(1),
    [anon_sym_ssh] = ACTIONS(1),
    [anon_sym_stelnet] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_inbound] = ACTIONS(1),
    [anon_sym_user_DASHinterface] = ACTIONS(1),
    [anon_sym_authentication] = ACTIONS(1),
    [anon_sym_idle_DASHtimeout] = ACTIONS(1),
    [anon_sym_service_DASHtype] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_password] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_banner] = ACTIONS(1),
    [anon_sym_time_DASHrange] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_permit] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_dfs_DASHgroup] = ACTIONS(1),
    [anon_sym_m_DASHlag] = ACTIONS(1),
    [anon_sym_link_DASHtype] = ACTIONS(1),
    [anon_sym_trunk] = ACTIONS(1),
    [anon_sym_access] = ACTIONS(1),
    [anon_sym_hybrid] = ACTIONS(1),
    [anon_sym_allow_DASHpass] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_route_DASHstatic] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_ip_DASHprefix] = ACTIONS(1),
    [anon_sym_export_DASHextcommunity] = ACTIONS(1),
    [anon_sym_import_DASHextcommunity] = ACTIONS(1),
    [anon_sym_binding] = ACTIONS(1),
    [anon_sym_irf] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__line] = STATE(2),
    [sym_blank_line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_cmd_interface] = STATE(2),
    [sym_cmd_generic] = STATE(2),
    [sym_keyword] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_blank_line_token1] = ACTIONS(5),
    [aux_sym_blank_line_token2] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_sysname] = ACTIONS(13),
    [anon_sym_system_DASHview] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_reboot] = ACTIONS(13),
    [anon_sym_commit] = ACTIONS(13),
    [anon_sym_rollback] = ACTIONS(13),
    [anon_sym_display] = ACTIONS(13),
    [anon_sym_disp] = ACTIONS(13),
    [anon_sym_vlan] = ACTIONS(13),
    [anon_sym_vlanif] = ACTIONS(13),
    [anon_sym_batch] = ACTIONS(13),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(13),
    [anon_sym_port] = ACTIONS(13),
    [anon_sym_undo] = ACTIONS(13),
    [anon_sym_shutdown] = ACTIONS(13),
    [anon_sym_shut] = ACTIONS(13),
    [anon_sym_aaa] = ACTIONS(13),
    [anon_sym_local_DASHuser] = ACTIONS(13),
    [anon_sym_authentication_DASHmode] = ACTIONS(13),
    [anon_sym_authorization_DASHmode] = ACTIONS(13),
    [anon_sym_vpn_DASHinstance] = ACTIONS(13),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(13),
    [anon_sym_vpn_DASHtarget] = ACTIONS(13),
    [anon_sym_ospf] = ACTIONS(13),
    [anon_sym_bgp] = ACTIONS(13),
    [anon_sym_isis] = ACTIONS(13),
    [anon_sym_rip] = ACTIONS(13),
    [anon_sym_area] = ACTIONS(13),
    [anon_sym_network] = ACTIONS(13),
    [anon_sym_route_DASHpolicy] = ACTIONS(13),
    [anon_sym_bfd] = ACTIONS(13),
    [anon_sym_discriminator] = ACTIONS(13),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(13),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(13),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(13),
    [anon_sym_acl] = ACTIONS(13),
    [anon_sym_traffic] = ACTIONS(13),
    [anon_sym_classifier] = ACTIONS(13),
    [anon_sym_behavior] = ACTIONS(13),
    [anon_sym_policy] = ACTIONS(13),
    [anon_sym_stp] = ACTIONS(13),
    [anon_sym_rstp] = ACTIONS(13),
    [anon_sym_mstp] = ACTIONS(13),
    [anon_sym_vrrp] = ACTIONS(13),
    [anon_sym_vrid] = ACTIONS(13),
    [anon_sym_virtual_DASHip] = ACTIONS(13),
    [anon_sym_priority] = ACTIONS(13),
    [anon_sym_eth_DASHtrunk] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(13),
    [anon_sym_lacp] = ACTIONS(13),
    [anon_sym_lldp] = ACTIONS(13),
    [anon_sym_snmp_DASHagent] = ACTIONS(13),
    [anon_sym_ntp_DASHservice] = ACTIONS(13),
    [anon_sym_ntp_DASHserver] = ACTIONS(13),
    [anon_sym_dhcp] = ACTIONS(13),
    [anon_sym_ip_DASHpool] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_css] = ACTIONS(13),
    [anon_sym_mirror] = ACTIONS(13),
    [anon_sym_observe_DASHport] = ACTIONS(13),
    [anon_sym_ssh] = ACTIONS(13),
    [anon_sym_stelnet] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_inbound] = ACTIONS(13),
    [anon_sym_user_DASHinterface] = ACTIONS(13),
    [anon_sym_authentication] = ACTIONS(13),
    [anon_sym_idle_DASHtimeout] = ACTIONS(13),
    [anon_sym_service_DASHtype] = ACTIONS(13),
    [anon_sym_level] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_header] = ACTIONS(13),
    [anon_sym_banner] = ACTIONS(13),
    [anon_sym_time_DASHrange] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_permit] = ACTIONS(13),
    [anon_sym_deny] = ACTIONS(13),
    [anon_sym_dfs_DASHgroup] = ACTIONS(13),
    [anon_sym_m_DASHlag] = ACTIONS(13),
    [anon_sym_link_DASHtype] = ACTIONS(13),
    [anon_sym_trunk] = ACTIONS(13),
    [anon_sym_access] = ACTIONS(13),
    [anon_sym_hybrid] = ACTIONS(13),
    [anon_sym_allow_DASHpass] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_route_DASHstatic] = ACTIONS(13),
    [anon_sym_ipv6] = ACTIONS(13),
    [anon_sym_ip_DASHprefix] = ACTIONS(13),
    [anon_sym_export_DASHextcommunity] = ACTIONS(13),
    [anon_sym_import_DASHextcommunity] = ACTIONS(13),
    [anon_sym_binding] = ACTIONS(13),
    [anon_sym_irf] = ACTIONS(13),
    [anon_sym_member] = ACTIONS(13),
    [aux_sym_keyword_token1] = ACTIONS(13),
  },
  [2] = {
    [sym__line] = STATE(3),
    [sym_blank_line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_cmd_interface] = STATE(3),
    [sym_cmd_generic] = STATE(3),
    [sym_keyword] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_blank_line_token1] = ACTIONS(5),
    [aux_sym_blank_line_token2] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_sysname] = ACTIONS(13),
    [anon_sym_system_DASHview] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_reboot] = ACTIONS(13),
    [anon_sym_commit] = ACTIONS(13),
    [anon_sym_rollback] = ACTIONS(13),
    [anon_sym_display] = ACTIONS(13),
    [anon_sym_disp] = ACTIONS(13),
    [anon_sym_vlan] = ACTIONS(13),
    [anon_sym_vlanif] = ACTIONS(13),
    [anon_sym_batch] = ACTIONS(13),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(13),
    [anon_sym_port] = ACTIONS(13),
    [anon_sym_undo] = ACTIONS(13),
    [anon_sym_shutdown] = ACTIONS(13),
    [anon_sym_shut] = ACTIONS(13),
    [anon_sym_aaa] = ACTIONS(13),
    [anon_sym_local_DASHuser] = ACTIONS(13),
    [anon_sym_authentication_DASHmode] = ACTIONS(13),
    [anon_sym_authorization_DASHmode] = ACTIONS(13),
    [anon_sym_vpn_DASHinstance] = ACTIONS(13),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(13),
    [anon_sym_vpn_DASHtarget] = ACTIONS(13),
    [anon_sym_ospf] = ACTIONS(13),
    [anon_sym_bgp] = ACTIONS(13),
    [anon_sym_isis] = ACTIONS(13),
    [anon_sym_rip] = ACTIONS(13),
    [anon_sym_area] = ACTIONS(13),
    [anon_sym_network] = ACTIONS(13),
    [anon_sym_route_DASHpolicy] = ACTIONS(13),
    [anon_sym_bfd] = ACTIONS(13),
    [anon_sym_discriminator] = ACTIONS(13),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(13),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(13),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(13),
    [anon_sym_acl] = ACTIONS(13),
    [anon_sym_traffic] = ACTIONS(13),
    [anon_sym_classifier] = ACTIONS(13),
    [anon_sym_behavior] = ACTIONS(13),
    [anon_sym_policy] = ACTIONS(13),
    [anon_sym_stp] = ACTIONS(13),
    [anon_sym_rstp] = ACTIONS(13),
    [anon_sym_mstp] = ACTIONS(13),
    [anon_sym_vrrp] = ACTIONS(13),
    [anon_sym_vrid] = ACTIONS(13),
    [anon_sym_virtual_DASHip] = ACTIONS(13),
    [anon_sym_priority] = ACTIONS(13),
    [anon_sym_eth_DASHtrunk] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(13),
    [anon_sym_lacp] = ACTIONS(13),
    [anon_sym_lldp] = ACTIONS(13),
    [anon_sym_snmp_DASHagent] = ACTIONS(13),
    [anon_sym_ntp_DASHservice] = ACTIONS(13),
    [anon_sym_ntp_DASHserver] = ACTIONS(13),
    [anon_sym_dhcp] = ACTIONS(13),
    [anon_sym_ip_DASHpool] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_css] = ACTIONS(13),
    [anon_sym_mirror] = ACTIONS(13),
    [anon_sym_observe_DASHport] = ACTIONS(13),
    [anon_sym_ssh] = ACTIONS(13),
    [anon_sym_stelnet] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_inbound] = ACTIONS(13),
    [anon_sym_user_DASHinterface] = ACTIONS(13),
    [anon_sym_authentication] = ACTIONS(13),
    [anon_sym_idle_DASHtimeout] = ACTIONS(13),
    [anon_sym_service_DASHtype] = ACTIONS(13),
    [anon_sym_level] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_header] = ACTIONS(13),
    [anon_sym_banner] = ACTIONS(13),
    [anon_sym_time_DASHrange] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_permit] = ACTIONS(13),
    [anon_sym_deny] = ACTIONS(13),
    [anon_sym_dfs_DASHgroup] = ACTIONS(13),
    [anon_sym_m_DASHlag] = ACTIONS(13),
    [anon_sym_link_DASHtype] = ACTIONS(13),
    [anon_sym_trunk] = ACTIONS(13),
    [anon_sym_access] = ACTIONS(13),
    [anon_sym_hybrid] = ACTIONS(13),
    [anon_sym_allow_DASHpass] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_route_DASHstatic] = ACTIONS(13),
    [anon_sym_ipv6] = ACTIONS(13),
    [anon_sym_ip_DASHprefix] = ACTIONS(13),
    [anon_sym_export_DASHextcommunity] = ACTIONS(13),
    [anon_sym_import_DASHextcommunity] = ACTIONS(13),
    [anon_sym_binding] = ACTIONS(13),
    [anon_sym_irf] = ACTIONS(13),
    [anon_sym_member] = ACTIONS(13),
    [aux_sym_keyword_token1] = ACTIONS(13),
  },
  [3] = {
    [sym__line] = STATE(3),
    [sym_blank_line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_cmd_interface] = STATE(3),
    [sym_cmd_generic] = STATE(3),
    [sym_keyword] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_blank_line_token1] = ACTIONS(19),
    [aux_sym_blank_line_token2] = ACTIONS(22),
    [anon_sym_POUND] = ACTIONS(25),
    [anon_sym_interface] = ACTIONS(28),
    [anon_sym_sysname] = ACTIONS(31),
    [anon_sym_system_DASHview] = ACTIONS(31),
    [anon_sym_quit] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(31),
    [anon_sym_save] = ACTIONS(31),
    [anon_sym_reboot] = ACTIONS(31),
    [anon_sym_commit] = ACTIONS(31),
    [anon_sym_rollback] = ACTIONS(31),
    [anon_sym_display] = ACTIONS(31),
    [anon_sym_disp] = ACTIONS(31),
    [anon_sym_vlan] = ACTIONS(31),
    [anon_sym_vlanif] = ACTIONS(31),
    [anon_sym_batch] = ACTIONS(31),
    [anon_sym_description] = ACTIONS(31),
    [anon_sym_ip] = ACTIONS(31),
    [anon_sym_port] = ACTIONS(31),
    [anon_sym_undo] = ACTIONS(31),
    [anon_sym_shutdown] = ACTIONS(31),
    [anon_sym_shut] = ACTIONS(31),
    [anon_sym_aaa] = ACTIONS(31),
    [anon_sym_local_DASHuser] = ACTIONS(31),
    [anon_sym_authentication_DASHmode] = ACTIONS(31),
    [anon_sym_authorization_DASHmode] = ACTIONS(31),
    [anon_sym_vpn_DASHinstance] = ACTIONS(31),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(31),
    [anon_sym_vpn_DASHtarget] = ACTIONS(31),
    [anon_sym_ospf] = ACTIONS(31),
    [anon_sym_bgp] = ACTIONS(31),
    [anon_sym_isis] = ACTIONS(31),
    [anon_sym_rip] = ACTIONS(31),
    [anon_sym_area] = ACTIONS(31),
    [anon_sym_network] = ACTIONS(31),
    [anon_sym_route_DASHpolicy] = ACTIONS(31),
    [anon_sym_bfd] = ACTIONS(31),
    [anon_sym_discriminator] = ACTIONS(31),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(31),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(31),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(31),
    [anon_sym_acl] = ACTIONS(31),
    [anon_sym_traffic] = ACTIONS(31),
    [anon_sym_classifier] = ACTIONS(31),
    [anon_sym_behavior] = ACTIONS(31),
    [anon_sym_policy] = ACTIONS(31),
    [anon_sym_stp] = ACTIONS(31),
    [anon_sym_rstp] = ACTIONS(31),
    [anon_sym_mstp] = ACTIONS(31),
    [anon_sym_vrrp] = ACTIONS(31),
    [anon_sym_vrid] = ACTIONS(31),
    [anon_sym_virtual_DASHip] = ACTIONS(31),
    [anon_sym_priority] = ACTIONS(31),
    [anon_sym_eth_DASHtrunk] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(31),
    [anon_sym_lacp] = ACTIONS(31),
    [anon_sym_lldp] = ACTIONS(31),
    [anon_sym_snmp_DASHagent] = ACTIONS(31),
    [anon_sym_ntp_DASHservice] = ACTIONS(31),
    [anon_sym_ntp_DASHserver] = ACTIONS(31),
    [anon_sym_dhcp] = ACTIONS(31),
    [anon_sym_ip_DASHpool] = ACTIONS(31),
    [anon_sym_stack] = ACTIONS(31),
    [anon_sym_css] = ACTIONS(31),
    [anon_sym_mirror] = ACTIONS(31),
    [anon_sym_observe_DASHport] = ACTIONS(31),
    [anon_sym_ssh] = ACTIONS(31),
    [anon_sym_stelnet] = ACTIONS(31),
    [anon_sym_protocol] = ACTIONS(31),
    [anon_sym_inbound] = ACTIONS(31),
    [anon_sym_user_DASHinterface] = ACTIONS(31),
    [anon_sym_authentication] = ACTIONS(31),
    [anon_sym_idle_DASHtimeout] = ACTIONS(31),
    [anon_sym_service_DASHtype] = ACTIONS(31),
    [anon_sym_level] = ACTIONS(31),
    [anon_sym_state] = ACTIONS(31),
    [anon_sym_password] = ACTIONS(31),
    [anon_sym_header] = ACTIONS(31),
    [anon_sym_banner] = ACTIONS(31),
    [anon_sym_time_DASHrange] = ACTIONS(31),
    [anon_sym_set] = ACTIONS(31),
    [anon_sym_permit] = ACTIONS(31),
    [anon_sym_deny] = ACTIONS(31),
    [anon_sym_dfs_DASHgroup] = ACTIONS(31),
    [anon_sym_m_DASHlag] = ACTIONS(31),
    [anon_sym_link_DASHtype] = ACTIONS(31),
    [anon_sym_trunk] = ACTIONS(31),
    [anon_sym_access] = ACTIONS(31),
    [anon_sym_hybrid] = ACTIONS(31),
    [anon_sym_allow_DASHpass] = ACTIONS(31),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_route_DASHstatic] = ACTIONS(31),
    [anon_sym_ipv6] = ACTIONS(31),
    [anon_sym_ip_DASHprefix] = ACTIONS(31),
    [anon_sym_export_DASHextcommunity] = ACTIONS(31),
    [anon_sym_import_DASHextcommunity] = ACTIONS(31),
    [anon_sym_binding] = ACTIONS(31),
    [anon_sym_irf] = ACTIONS(31),
    [anon_sym_member] = ACTIONS(31),
    [aux_sym_keyword_token1] = ACTIONS(31),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_blank_line_token1] = ACTIONS(34),
    [aux_sym_blank_line_token2] = ACTIONS(36),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_interface] = ACTIONS(36),
    [anon_sym_sysname] = ACTIONS(36),
    [anon_sym_system_DASHview] = ACTIONS(36),
    [anon_sym_quit] = ACTIONS(36),
    [anon_sym_return] = ACTIONS(36),
    [anon_sym_save] = ACTIONS(36),
    [anon_sym_reboot] = ACTIONS(36),
    [anon_sym_commit] = ACTIONS(36),
    [anon_sym_rollback] = ACTIONS(36),
    [anon_sym_display] = ACTIONS(36),
    [anon_sym_disp] = ACTIONS(36),
    [anon_sym_vlan] = ACTIONS(36),
    [anon_sym_vlanif] = ACTIONS(36),
    [anon_sym_batch] = ACTIONS(36),
    [anon_sym_description] = ACTIONS(36),
    [anon_sym_ip] = ACTIONS(36),
    [anon_sym_port] = ACTIONS(36),
    [anon_sym_undo] = ACTIONS(36),
    [anon_sym_shutdown] = ACTIONS(36),
    [anon_sym_shut] = ACTIONS(36),
    [anon_sym_aaa] = ACTIONS(36),
    [anon_sym_local_DASHuser] = ACTIONS(36),
    [anon_sym_authentication_DASHmode] = ACTIONS(36),
    [anon_sym_authorization_DASHmode] = ACTIONS(36),
    [anon_sym_vpn_DASHinstance] = ACTIONS(36),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(36),
    [anon_sym_vpn_DASHtarget] = ACTIONS(36),
    [anon_sym_ospf] = ACTIONS(36),
    [anon_sym_bgp] = ACTIONS(36),
    [anon_sym_isis] = ACTIONS(36),
    [anon_sym_rip] = ACTIONS(36),
    [anon_sym_area] = ACTIONS(36),
    [anon_sym_network] = ACTIONS(36),
    [anon_sym_route_DASHpolicy] = ACTIONS(36),
    [anon_sym_bfd] = ACTIONS(36),
    [anon_sym_discriminator] = ACTIONS(36),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(36),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(36),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(36),
    [anon_sym_acl] = ACTIONS(36),
    [anon_sym_traffic] = ACTIONS(36),
    [anon_sym_classifier] = ACTIONS(36),
    [anon_sym_behavior] = ACTIONS(36),
    [anon_sym_policy] = ACTIONS(36),
    [anon_sym_stp] = ACTIONS(36),
    [anon_sym_rstp] = ACTIONS(36),
    [anon_sym_mstp] = ACTIONS(36),
    [anon_sym_vrrp] = ACTIONS(36),
    [anon_sym_vrid] = ACTIONS(36),
    [anon_sym_virtual_DASHip] = ACTIONS(36),
    [anon_sym_priority] = ACTIONS(36),
    [anon_sym_eth_DASHtrunk] = ACTIONS(36),
    [anon_sym_mode] = ACTIONS(36),
    [anon_sym_lacp] = ACTIONS(36),
    [anon_sym_lldp] = ACTIONS(36),
    [anon_sym_snmp_DASHagent] = ACTIONS(36),
    [anon_sym_ntp_DASHservice] = ACTIONS(36),
    [anon_sym_ntp_DASHserver] = ACTIONS(36),
    [anon_sym_dhcp] = ACTIONS(36),
    [anon_sym_ip_DASHpool] = ACTIONS(36),
    [anon_sym_stack] = ACTIONS(36),
    [anon_sym_css] = ACTIONS(36),
    [anon_sym_mirror] = ACTIONS(36),
    [anon_sym_observe_DASHport] = ACTIONS(36),
    [anon_sym_ssh] = ACTIONS(36),
    [anon_sym_stelnet] = ACTIONS(36),
    [anon_sym_protocol] = ACTIONS(36),
    [anon_sym_inbound] = ACTIONS(36),
    [anon_sym_user_DASHinterface] = ACTIONS(36),
    [anon_sym_authentication] = ACTIONS(36),
    [anon_sym_idle_DASHtimeout] = ACTIONS(36),
    [anon_sym_service_DASHtype] = ACTIONS(36),
    [anon_sym_level] = ACTIONS(36),
    [anon_sym_state] = ACTIONS(36),
    [anon_sym_password] = ACTIONS(36),
    [anon_sym_header] = ACTIONS(36),
    [anon_sym_banner] = ACTIONS(36),
    [anon_sym_time_DASHrange] = ACTIONS(36),
    [anon_sym_set] = ACTIONS(36),
    [anon_sym_permit] = ACTIONS(36),
    [anon_sym_deny] = ACTIONS(36),
    [anon_sym_dfs_DASHgroup] = ACTIONS(36),
    [anon_sym_m_DASHlag] = ACTIONS(36),
    [anon_sym_link_DASHtype] = ACTIONS(36),
    [anon_sym_trunk] = ACTIONS(36),
    [anon_sym_access] = ACTIONS(36),
    [anon_sym_hybrid] = ACTIONS(36),
    [anon_sym_allow_DASHpass] = ACTIONS(36),
    [anon_sym_default] = ACTIONS(36),
    [anon_sym_route_DASHstatic] = ACTIONS(36),
    [anon_sym_ipv6] = ACTIONS(36),
    [anon_sym_ip_DASHprefix] = ACTIONS(36),
    [anon_sym_export_DASHextcommunity] = ACTIONS(36),
    [anon_sym_import_DASHextcommunity] = ACTIONS(36),
    [anon_sym_binding] = ACTIONS(36),
    [anon_sym_irf] = ACTIONS(36),
    [anon_sym_member] = ACTIONS(36),
    [aux_sym_keyword_token1] = ACTIONS(36),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_blank_line_token1] = ACTIONS(38),
    [aux_sym_blank_line_token2] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_interface] = ACTIONS(40),
    [anon_sym_sysname] = ACTIONS(40),
    [anon_sym_system_DASHview] = ACTIONS(40),
    [anon_sym_quit] = ACTIONS(40),
    [anon_sym_return] = ACTIONS(40),
    [anon_sym_save] = ACTIONS(40),
    [anon_sym_reboot] = ACTIONS(40),
    [anon_sym_commit] = ACTIONS(40),
    [anon_sym_rollback] = ACTIONS(40),
    [anon_sym_display] = ACTIONS(40),
    [anon_sym_disp] = ACTIONS(40),
    [anon_sym_vlan] = ACTIONS(40),
    [anon_sym_vlanif] = ACTIONS(40),
    [anon_sym_batch] = ACTIONS(40),
    [anon_sym_description] = ACTIONS(40),
    [anon_sym_ip] = ACTIONS(40),
    [anon_sym_port] = ACTIONS(40),
    [anon_sym_undo] = ACTIONS(40),
    [anon_sym_shutdown] = ACTIONS(40),
    [anon_sym_shut] = ACTIONS(40),
    [anon_sym_aaa] = ACTIONS(40),
    [anon_sym_local_DASHuser] = ACTIONS(40),
    [anon_sym_authentication_DASHmode] = ACTIONS(40),
    [anon_sym_authorization_DASHmode] = ACTIONS(40),
    [anon_sym_vpn_DASHinstance] = ACTIONS(40),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(40),
    [anon_sym_vpn_DASHtarget] = ACTIONS(40),
    [anon_sym_ospf] = ACTIONS(40),
    [anon_sym_bgp] = ACTIONS(40),
    [anon_sym_isis] = ACTIONS(40),
    [anon_sym_rip] = ACTIONS(40),
    [anon_sym_area] = ACTIONS(40),
    [anon_sym_network] = ACTIONS(40),
    [anon_sym_route_DASHpolicy] = ACTIONS(40),
    [anon_sym_bfd] = ACTIONS(40),
    [anon_sym_discriminator] = ACTIONS(40),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(40),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(40),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(40),
    [anon_sym_acl] = ACTIONS(40),
    [anon_sym_traffic] = ACTIONS(40),
    [anon_sym_classifier] = ACTIONS(40),
    [anon_sym_behavior] = ACTIONS(40),
    [anon_sym_policy] = ACTIONS(40),
    [anon_sym_stp] = ACTIONS(40),
    [anon_sym_rstp] = ACTIONS(40),
    [anon_sym_mstp] = ACTIONS(40),
    [anon_sym_vrrp] = ACTIONS(40),
    [anon_sym_vrid] = ACTIONS(40),
    [anon_sym_virtual_DASHip] = ACTIONS(40),
    [anon_sym_priority] = ACTIONS(40),
    [anon_sym_eth_DASHtrunk] = ACTIONS(40),
    [anon_sym_mode] = ACTIONS(40),
    [anon_sym_lacp] = ACTIONS(40),
    [anon_sym_lldp] = ACTIONS(40),
    [anon_sym_snmp_DASHagent] = ACTIONS(40),
    [anon_sym_ntp_DASHservice] = ACTIONS(40),
    [anon_sym_ntp_DASHserver] = ACTIONS(40),
    [anon_sym_dhcp] = ACTIONS(40),
    [anon_sym_ip_DASHpool] = ACTIONS(40),
    [anon_sym_stack] = ACTIONS(40),
    [anon_sym_css] = ACTIONS(40),
    [anon_sym_mirror] = ACTIONS(40),
    [anon_sym_observe_DASHport] = ACTIONS(40),
    [anon_sym_ssh] = ACTIONS(40),
    [anon_sym_stelnet] = ACTIONS(40),
    [anon_sym_protocol] = ACTIONS(40),
    [anon_sym_inbound] = ACTIONS(40),
    [anon_sym_user_DASHinterface] = ACTIONS(40),
    [anon_sym_authentication] = ACTIONS(40),
    [anon_sym_idle_DASHtimeout] = ACTIONS(40),
    [anon_sym_service_DASHtype] = ACTIONS(40),
    [anon_sym_level] = ACTIONS(40),
    [anon_sym_state] = ACTIONS(40),
    [anon_sym_password] = ACTIONS(40),
    [anon_sym_header] = ACTIONS(40),
    [anon_sym_banner] = ACTIONS(40),
    [anon_sym_time_DASHrange] = ACTIONS(40),
    [anon_sym_set] = ACTIONS(40),
    [anon_sym_permit] = ACTIONS(40),
    [anon_sym_deny] = ACTIONS(40),
    [anon_sym_dfs_DASHgroup] = ACTIONS(40),
    [anon_sym_m_DASHlag] = ACTIONS(40),
    [anon_sym_link_DASHtype] = ACTIONS(40),
    [anon_sym_trunk] = ACTIONS(40),
    [anon_sym_access] = ACTIONS(40),
    [anon_sym_hybrid] = ACTIONS(40),
    [anon_sym_allow_DASHpass] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_route_DASHstatic] = ACTIONS(40),
    [anon_sym_ipv6] = ACTIONS(40),
    [anon_sym_ip_DASHprefix] = ACTIONS(40),
    [anon_sym_export_DASHextcommunity] = ACTIONS(40),
    [anon_sym_import_DASHextcommunity] = ACTIONS(40),
    [anon_sym_binding] = ACTIONS(40),
    [anon_sym_irf] = ACTIONS(40),
    [anon_sym_member] = ACTIONS(40),
    [aux_sym_keyword_token1] = ACTIONS(40),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_blank_line_token1] = ACTIONS(42),
    [aux_sym_blank_line_token2] = ACTIONS(44),
    [anon_sym_POUND] = ACTIONS(44),
    [anon_sym_interface] = ACTIONS(44),
    [anon_sym_sysname] = ACTIONS(44),
    [anon_sym_system_DASHview] = ACTIONS(44),
    [anon_sym_quit] = ACTIONS(44),
    [anon_sym_return] = ACTIONS(44),
    [anon_sym_save] = ACTIONS(44),
    [anon_sym_reboot] = ACTIONS(44),
    [anon_sym_commit] = ACTIONS(44),
    [anon_sym_rollback] = ACTIONS(44),
    [anon_sym_display] = ACTIONS(44),
    [anon_sym_disp] = ACTIONS(44),
    [anon_sym_vlan] = ACTIONS(44),
    [anon_sym_vlanif] = ACTIONS(44),
    [anon_sym_batch] = ACTIONS(44),
    [anon_sym_description] = ACTIONS(44),
    [anon_sym_ip] = ACTIONS(44),
    [anon_sym_port] = ACTIONS(44),
    [anon_sym_undo] = ACTIONS(44),
    [anon_sym_shutdown] = ACTIONS(44),
    [anon_sym_shut] = ACTIONS(44),
    [anon_sym_aaa] = ACTIONS(44),
    [anon_sym_local_DASHuser] = ACTIONS(44),
    [anon_sym_authentication_DASHmode] = ACTIONS(44),
    [anon_sym_authorization_DASHmode] = ACTIONS(44),
    [anon_sym_vpn_DASHinstance] = ACTIONS(44),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(44),
    [anon_sym_vpn_DASHtarget] = ACTIONS(44),
    [anon_sym_ospf] = ACTIONS(44),
    [anon_sym_bgp] = ACTIONS(44),
    [anon_sym_isis] = ACTIONS(44),
    [anon_sym_rip] = ACTIONS(44),
    [anon_sym_area] = ACTIONS(44),
    [anon_sym_network] = ACTIONS(44),
    [anon_sym_route_DASHpolicy] = ACTIONS(44),
    [anon_sym_bfd] = ACTIONS(44),
    [anon_sym_discriminator] = ACTIONS(44),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(44),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(44),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(44),
    [anon_sym_acl] = ACTIONS(44),
    [anon_sym_traffic] = ACTIONS(44),
    [anon_sym_classifier] = ACTIONS(44),
    [anon_sym_behavior] = ACTIONS(44),
    [anon_sym_policy] = ACTIONS(44),
    [anon_sym_stp] = ACTIONS(44),
    [anon_sym_rstp] = ACTIONS(44),
    [anon_sym_mstp] = ACTIONS(44),
    [anon_sym_vrrp] = ACTIONS(44),
    [anon_sym_vrid] = ACTIONS(44),
    [anon_sym_virtual_DASHip] = ACTIONS(44),
    [anon_sym_priority] = ACTIONS(44),
    [anon_sym_eth_DASHtrunk] = ACTIONS(44),
    [anon_sym_mode] = ACTIONS(44),
    [anon_sym_lacp] = ACTIONS(44),
    [anon_sym_lldp] = ACTIONS(44),
    [anon_sym_snmp_DASHagent] = ACTIONS(44),
    [anon_sym_ntp_DASHservice] = ACTIONS(44),
    [anon_sym_ntp_DASHserver] = ACTIONS(44),
    [anon_sym_dhcp] = ACTIONS(44),
    [anon_sym_ip_DASHpool] = ACTIONS(44),
    [anon_sym_stack] = ACTIONS(44),
    [anon_sym_css] = ACTIONS(44),
    [anon_sym_mirror] = ACTIONS(44),
    [anon_sym_observe_DASHport] = ACTIONS(44),
    [anon_sym_ssh] = ACTIONS(44),
    [anon_sym_stelnet] = ACTIONS(44),
    [anon_sym_protocol] = ACTIONS(44),
    [anon_sym_inbound] = ACTIONS(44),
    [anon_sym_user_DASHinterface] = ACTIONS(44),
    [anon_sym_authentication] = ACTIONS(44),
    [anon_sym_idle_DASHtimeout] = ACTIONS(44),
    [anon_sym_service_DASHtype] = ACTIONS(44),
    [anon_sym_level] = ACTIONS(44),
    [anon_sym_state] = ACTIONS(44),
    [anon_sym_password] = ACTIONS(44),
    [anon_sym_header] = ACTIONS(44),
    [anon_sym_banner] = ACTIONS(44),
    [anon_sym_time_DASHrange] = ACTIONS(44),
    [anon_sym_set] = ACTIONS(44),
    [anon_sym_permit] = ACTIONS(44),
    [anon_sym_deny] = ACTIONS(44),
    [anon_sym_dfs_DASHgroup] = ACTIONS(44),
    [anon_sym_m_DASHlag] = ACTIONS(44),
    [anon_sym_link_DASHtype] = ACTIONS(44),
    [anon_sym_trunk] = ACTIONS(44),
    [anon_sym_access] = ACTIONS(44),
    [anon_sym_hybrid] = ACTIONS(44),
    [anon_sym_allow_DASHpass] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_route_DASHstatic] = ACTIONS(44),
    [anon_sym_ipv6] = ACTIONS(44),
    [anon_sym_ip_DASHprefix] = ACTIONS(44),
    [anon_sym_export_DASHextcommunity] = ACTIONS(44),
    [anon_sym_import_DASHextcommunity] = ACTIONS(44),
    [anon_sym_binding] = ACTIONS(44),
    [anon_sym_irf] = ACTIONS(44),
    [anon_sym_member] = ACTIONS(44),
    [aux_sym_keyword_token1] = ACTIONS(44),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_blank_line_token1] = ACTIONS(46),
    [aux_sym_blank_line_token2] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(48),
    [anon_sym_sysname] = ACTIONS(48),
    [anon_sym_system_DASHview] = ACTIONS(48),
    [anon_sym_quit] = ACTIONS(48),
    [anon_sym_return] = ACTIONS(48),
    [anon_sym_save] = ACTIONS(48),
    [anon_sym_reboot] = ACTIONS(48),
    [anon_sym_commit] = ACTIONS(48),
    [anon_sym_rollback] = ACTIONS(48),
    [anon_sym_display] = ACTIONS(48),
    [anon_sym_disp] = ACTIONS(48),
    [anon_sym_vlan] = ACTIONS(48),
    [anon_sym_vlanif] = ACTIONS(48),
    [anon_sym_batch] = ACTIONS(48),
    [anon_sym_description] = ACTIONS(48),
    [anon_sym_ip] = ACTIONS(48),
    [anon_sym_port] = ACTIONS(48),
    [anon_sym_undo] = ACTIONS(48),
    [anon_sym_shutdown] = ACTIONS(48),
    [anon_sym_shut] = ACTIONS(48),
    [anon_sym_aaa] = ACTIONS(48),
    [anon_sym_local_DASHuser] = ACTIONS(48),
    [anon_sym_authentication_DASHmode] = ACTIONS(48),
    [anon_sym_authorization_DASHmode] = ACTIONS(48),
    [anon_sym_vpn_DASHinstance] = ACTIONS(48),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(48),
    [anon_sym_vpn_DASHtarget] = ACTIONS(48),
    [anon_sym_ospf] = ACTIONS(48),
    [anon_sym_bgp] = ACTIONS(48),
    [anon_sym_isis] = ACTIONS(48),
    [anon_sym_rip] = ACTIONS(48),
    [anon_sym_area] = ACTIONS(48),
    [anon_sym_network] = ACTIONS(48),
    [anon_sym_route_DASHpolicy] = ACTIONS(48),
    [anon_sym_bfd] = ACTIONS(48),
    [anon_sym_discriminator] = ACTIONS(48),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(48),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(48),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(48),
    [anon_sym_acl] = ACTIONS(48),
    [anon_sym_traffic] = ACTIONS(48),
    [anon_sym_classifier] = ACTIONS(48),
    [anon_sym_behavior] = ACTIONS(48),
    [anon_sym_policy] = ACTIONS(48),
    [anon_sym_stp] = ACTIONS(48),
    [anon_sym_rstp] = ACTIONS(48),
    [anon_sym_mstp] = ACTIONS(48),
    [anon_sym_vrrp] = ACTIONS(48),
    [anon_sym_vrid] = ACTIONS(48),
    [anon_sym_virtual_DASHip] = ACTIONS(48),
    [anon_sym_priority] = ACTIONS(48),
    [anon_sym_eth_DASHtrunk] = ACTIONS(48),
    [anon_sym_mode] = ACTIONS(48),
    [anon_sym_lacp] = ACTIONS(48),
    [anon_sym_lldp] = ACTIONS(48),
    [anon_sym_snmp_DASHagent] = ACTIONS(48),
    [anon_sym_ntp_DASHservice] = ACTIONS(48),
    [anon_sym_ntp_DASHserver] = ACTIONS(48),
    [anon_sym_dhcp] = ACTIONS(48),
    [anon_sym_ip_DASHpool] = ACTIONS(48),
    [anon_sym_stack] = ACTIONS(48),
    [anon_sym_css] = ACTIONS(48),
    [anon_sym_mirror] = ACTIONS(48),
    [anon_sym_observe_DASHport] = ACTIONS(48),
    [anon_sym_ssh] = ACTIONS(48),
    [anon_sym_stelnet] = ACTIONS(48),
    [anon_sym_protocol] = ACTIONS(48),
    [anon_sym_inbound] = ACTIONS(48),
    [anon_sym_user_DASHinterface] = ACTIONS(48),
    [anon_sym_authentication] = ACTIONS(48),
    [anon_sym_idle_DASHtimeout] = ACTIONS(48),
    [anon_sym_service_DASHtype] = ACTIONS(48),
    [anon_sym_level] = ACTIONS(48),
    [anon_sym_state] = ACTIONS(48),
    [anon_sym_password] = ACTIONS(48),
    [anon_sym_header] = ACTIONS(48),
    [anon_sym_banner] = ACTIONS(48),
    [anon_sym_time_DASHrange] = ACTIONS(48),
    [anon_sym_set] = ACTIONS(48),
    [anon_sym_permit] = ACTIONS(48),
    [anon_sym_deny] = ACTIONS(48),
    [anon_sym_dfs_DASHgroup] = ACTIONS(48),
    [anon_sym_m_DASHlag] = ACTIONS(48),
    [anon_sym_link_DASHtype] = ACTIONS(48),
    [anon_sym_trunk] = ACTIONS(48),
    [anon_sym_access] = ACTIONS(48),
    [anon_sym_hybrid] = ACTIONS(48),
    [anon_sym_allow_DASHpass] = ACTIONS(48),
    [anon_sym_default] = ACTIONS(48),
    [anon_sym_route_DASHstatic] = ACTIONS(48),
    [anon_sym_ipv6] = ACTIONS(48),
    [anon_sym_ip_DASHprefix] = ACTIONS(48),
    [anon_sym_export_DASHextcommunity] = ACTIONS(48),
    [anon_sym_import_DASHextcommunity] = ACTIONS(48),
    [anon_sym_binding] = ACTIONS(48),
    [anon_sym_irf] = ACTIONS(48),
    [anon_sym_member] = ACTIONS(48),
    [aux_sym_keyword_token1] = ACTIONS(48),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_blank_line_token1] = ACTIONS(50),
    [aux_sym_blank_line_token2] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(52),
    [anon_sym_interface] = ACTIONS(52),
    [anon_sym_sysname] = ACTIONS(52),
    [anon_sym_system_DASHview] = ACTIONS(52),
    [anon_sym_quit] = ACTIONS(52),
    [anon_sym_return] = ACTIONS(52),
    [anon_sym_save] = ACTIONS(52),
    [anon_sym_reboot] = ACTIONS(52),
    [anon_sym_commit] = ACTIONS(52),
    [anon_sym_rollback] = ACTIONS(52),
    [anon_sym_display] = ACTIONS(52),
    [anon_sym_disp] = ACTIONS(52),
    [anon_sym_vlan] = ACTIONS(52),
    [anon_sym_vlanif] = ACTIONS(52),
    [anon_sym_batch] = ACTIONS(52),
    [anon_sym_description] = ACTIONS(52),
    [anon_sym_ip] = ACTIONS(52),
    [anon_sym_port] = ACTIONS(52),
    [anon_sym_undo] = ACTIONS(52),
    [anon_sym_shutdown] = ACTIONS(52),
    [anon_sym_shut] = ACTIONS(52),
    [anon_sym_aaa] = ACTIONS(52),
    [anon_sym_local_DASHuser] = ACTIONS(52),
    [anon_sym_authentication_DASHmode] = ACTIONS(52),
    [anon_sym_authorization_DASHmode] = ACTIONS(52),
    [anon_sym_vpn_DASHinstance] = ACTIONS(52),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(52),
    [anon_sym_vpn_DASHtarget] = ACTIONS(52),
    [anon_sym_ospf] = ACTIONS(52),
    [anon_sym_bgp] = ACTIONS(52),
    [anon_sym_isis] = ACTIONS(52),
    [anon_sym_rip] = ACTIONS(52),
    [anon_sym_area] = ACTIONS(52),
    [anon_sym_network] = ACTIONS(52),
    [anon_sym_route_DASHpolicy] = ACTIONS(52),
    [anon_sym_bfd] = ACTIONS(52),
    [anon_sym_discriminator] = ACTIONS(52),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(52),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(52),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(52),
    [anon_sym_acl] = ACTIONS(52),
    [anon_sym_traffic] = ACTIONS(52),
    [anon_sym_classifier] = ACTIONS(52),
    [anon_sym_behavior] = ACTIONS(52),
    [anon_sym_policy] = ACTIONS(52),
    [anon_sym_stp] = ACTIONS(52),
    [anon_sym_rstp] = ACTIONS(52),
    [anon_sym_mstp] = ACTIONS(52),
    [anon_sym_vrrp] = ACTIONS(52),
    [anon_sym_vrid] = ACTIONS(52),
    [anon_sym_virtual_DASHip] = ACTIONS(52),
    [anon_sym_priority] = ACTIONS(52),
    [anon_sym_eth_DASHtrunk] = ACTIONS(52),
    [anon_sym_mode] = ACTIONS(52),
    [anon_sym_lacp] = ACTIONS(52),
    [anon_sym_lldp] = ACTIONS(52),
    [anon_sym_snmp_DASHagent] = ACTIONS(52),
    [anon_sym_ntp_DASHservice] = ACTIONS(52),
    [anon_sym_ntp_DASHserver] = ACTIONS(52),
    [anon_sym_dhcp] = ACTIONS(52),
    [anon_sym_ip_DASHpool] = ACTIONS(52),
    [anon_sym_stack] = ACTIONS(52),
    [anon_sym_css] = ACTIONS(52),
    [anon_sym_mirror] = ACTIONS(52),
    [anon_sym_observe_DASHport] = ACTIONS(52),
    [anon_sym_ssh] = ACTIONS(52),
    [anon_sym_stelnet] = ACTIONS(52),
    [anon_sym_protocol] = ACTIONS(52),
    [anon_sym_inbound] = ACTIONS(52),
    [anon_sym_user_DASHinterface] = ACTIONS(52),
    [anon_sym_authentication] = ACTIONS(52),
    [anon_sym_idle_DASHtimeout] = ACTIONS(52),
    [anon_sym_service_DASHtype] = ACTIONS(52),
    [anon_sym_level] = ACTIONS(52),
    [anon_sym_state] = ACTIONS(52),
    [anon_sym_password] = ACTIONS(52),
    [anon_sym_header] = ACTIONS(52),
    [anon_sym_banner] = ACTIONS(52),
    [anon_sym_time_DASHrange] = ACTIONS(52),
    [anon_sym_set] = ACTIONS(52),
    [anon_sym_permit] = ACTIONS(52),
    [anon_sym_deny] = ACTIONS(52),
    [anon_sym_dfs_DASHgroup] = ACTIONS(52),
    [anon_sym_m_DASHlag] = ACTIONS(52),
    [anon_sym_link_DASHtype] = ACTIONS(52),
    [anon_sym_trunk] = ACTIONS(52),
    [anon_sym_access] = ACTIONS(52),
    [anon_sym_hybrid] = ACTIONS(52),
    [anon_sym_allow_DASHpass] = ACTIONS(52),
    [anon_sym_default] = ACTIONS(52),
    [anon_sym_route_DASHstatic] = ACTIONS(52),
    [anon_sym_ipv6] = ACTIONS(52),
    [anon_sym_ip_DASHprefix] = ACTIONS(52),
    [anon_sym_export_DASHextcommunity] = ACTIONS(52),
    [anon_sym_import_DASHextcommunity] = ACTIONS(52),
    [anon_sym_binding] = ACTIONS(52),
    [anon_sym_irf] = ACTIONS(52),
    [anon_sym_member] = ACTIONS(52),
    [aux_sym_keyword_token1] = ACTIONS(52),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_blank_line_token1] = ACTIONS(54),
    [aux_sym_blank_line_token2] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(56),
    [anon_sym_interface] = ACTIONS(56),
    [anon_sym_sysname] = ACTIONS(56),
    [anon_sym_system_DASHview] = ACTIONS(56),
    [anon_sym_quit] = ACTIONS(56),
    [anon_sym_return] = ACTIONS(56),
    [anon_sym_save] = ACTIONS(56),
    [anon_sym_reboot] = ACTIONS(56),
    [anon_sym_commit] = ACTIONS(56),
    [anon_sym_rollback] = ACTIONS(56),
    [anon_sym_display] = ACTIONS(56),
    [anon_sym_disp] = ACTIONS(56),
    [anon_sym_vlan] = ACTIONS(56),
    [anon_sym_vlanif] = ACTIONS(56),
    [anon_sym_batch] = ACTIONS(56),
    [anon_sym_description] = ACTIONS(56),
    [anon_sym_ip] = ACTIONS(56),
    [anon_sym_port] = ACTIONS(56),
    [anon_sym_undo] = ACTIONS(56),
    [anon_sym_shutdown] = ACTIONS(56),
    [anon_sym_shut] = ACTIONS(56),
    [anon_sym_aaa] = ACTIONS(56),
    [anon_sym_local_DASHuser] = ACTIONS(56),
    [anon_sym_authentication_DASHmode] = ACTIONS(56),
    [anon_sym_authorization_DASHmode] = ACTIONS(56),
    [anon_sym_vpn_DASHinstance] = ACTIONS(56),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(56),
    [anon_sym_vpn_DASHtarget] = ACTIONS(56),
    [anon_sym_ospf] = ACTIONS(56),
    [anon_sym_bgp] = ACTIONS(56),
    [anon_sym_isis] = ACTIONS(56),
    [anon_sym_rip] = ACTIONS(56),
    [anon_sym_area] = ACTIONS(56),
    [anon_sym_network] = ACTIONS(56),
    [anon_sym_route_DASHpolicy] = ACTIONS(56),
    [anon_sym_bfd] = ACTIONS(56),
    [anon_sym_discriminator] = ACTIONS(56),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(56),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(56),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(56),
    [anon_sym_acl] = ACTIONS(56),
    [anon_sym_traffic] = ACTIONS(56),
    [anon_sym_classifier] = ACTIONS(56),
    [anon_sym_behavior] = ACTIONS(56),
    [anon_sym_policy] = ACTIONS(56),
    [anon_sym_stp] = ACTIONS(56),
    [anon_sym_rstp] = ACTIONS(56),
    [anon_sym_mstp] = ACTIONS(56),
    [anon_sym_vrrp] = ACTIONS(56),
    [anon_sym_vrid] = ACTIONS(56),
    [anon_sym_virtual_DASHip] = ACTIONS(56),
    [anon_sym_priority] = ACTIONS(56),
    [anon_sym_eth_DASHtrunk] = ACTIONS(56),
    [anon_sym_mode] = ACTIONS(56),
    [anon_sym_lacp] = ACTIONS(56),
    [anon_sym_lldp] = ACTIONS(56),
    [anon_sym_snmp_DASHagent] = ACTIONS(56),
    [anon_sym_ntp_DASHservice] = ACTIONS(56),
    [anon_sym_ntp_DASHserver] = ACTIONS(56),
    [anon_sym_dhcp] = ACTIONS(56),
    [anon_sym_ip_DASHpool] = ACTIONS(56),
    [anon_sym_stack] = ACTIONS(56),
    [anon_sym_css] = ACTIONS(56),
    [anon_sym_mirror] = ACTIONS(56),
    [anon_sym_observe_DASHport] = ACTIONS(56),
    [anon_sym_ssh] = ACTIONS(56),
    [anon_sym_stelnet] = ACTIONS(56),
    [anon_sym_protocol] = ACTIONS(56),
    [anon_sym_inbound] = ACTIONS(56),
    [anon_sym_user_DASHinterface] = ACTIONS(56),
    [anon_sym_authentication] = ACTIONS(56),
    [anon_sym_idle_DASHtimeout] = ACTIONS(56),
    [anon_sym_service_DASHtype] = ACTIONS(56),
    [anon_sym_level] = ACTIONS(56),
    [anon_sym_state] = ACTIONS(56),
    [anon_sym_password] = ACTIONS(56),
    [anon_sym_header] = ACTIONS(56),
    [anon_sym_banner] = ACTIONS(56),
    [anon_sym_time_DASHrange] = ACTIONS(56),
    [anon_sym_set] = ACTIONS(56),
    [anon_sym_permit] = ACTIONS(56),
    [anon_sym_deny] = ACTIONS(56),
    [anon_sym_dfs_DASHgroup] = ACTIONS(56),
    [anon_sym_m_DASHlag] = ACTIONS(56),
    [anon_sym_link_DASHtype] = ACTIONS(56),
    [anon_sym_trunk] = ACTIONS(56),
    [anon_sym_access] = ACTIONS(56),
    [anon_sym_hybrid] = ACTIONS(56),
    [anon_sym_allow_DASHpass] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_route_DASHstatic] = ACTIONS(56),
    [anon_sym_ipv6] = ACTIONS(56),
    [anon_sym_ip_DASHprefix] = ACTIONS(56),
    [anon_sym_export_DASHextcommunity] = ACTIONS(56),
    [anon_sym_import_DASHextcommunity] = ACTIONS(56),
    [anon_sym_binding] = ACTIONS(56),
    [anon_sym_irf] = ACTIONS(56),
    [anon_sym_member] = ACTIONS(56),
    [aux_sym_keyword_token1] = ACTIONS(56),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_blank_line_token1] = ACTIONS(58),
    [aux_sym_blank_line_token2] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_interface] = ACTIONS(60),
    [anon_sym_sysname] = ACTIONS(60),
    [anon_sym_system_DASHview] = ACTIONS(60),
    [anon_sym_quit] = ACTIONS(60),
    [anon_sym_return] = ACTIONS(60),
    [anon_sym_save] = ACTIONS(60),
    [anon_sym_reboot] = ACTIONS(60),
    [anon_sym_commit] = ACTIONS(60),
    [anon_sym_rollback] = ACTIONS(60),
    [anon_sym_display] = ACTIONS(60),
    [anon_sym_disp] = ACTIONS(60),
    [anon_sym_vlan] = ACTIONS(60),
    [anon_sym_vlanif] = ACTIONS(60),
    [anon_sym_batch] = ACTIONS(60),
    [anon_sym_description] = ACTIONS(60),
    [anon_sym_ip] = ACTIONS(60),
    [anon_sym_port] = ACTIONS(60),
    [anon_sym_undo] = ACTIONS(60),
    [anon_sym_shutdown] = ACTIONS(60),
    [anon_sym_shut] = ACTIONS(60),
    [anon_sym_aaa] = ACTIONS(60),
    [anon_sym_local_DASHuser] = ACTIONS(60),
    [anon_sym_authentication_DASHmode] = ACTIONS(60),
    [anon_sym_authorization_DASHmode] = ACTIONS(60),
    [anon_sym_vpn_DASHinstance] = ACTIONS(60),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(60),
    [anon_sym_vpn_DASHtarget] = ACTIONS(60),
    [anon_sym_ospf] = ACTIONS(60),
    [anon_sym_bgp] = ACTIONS(60),
    [anon_sym_isis] = ACTIONS(60),
    [anon_sym_rip] = ACTIONS(60),
    [anon_sym_area] = ACTIONS(60),
    [anon_sym_network] = ACTIONS(60),
    [anon_sym_route_DASHpolicy] = ACTIONS(60),
    [anon_sym_bfd] = ACTIONS(60),
    [anon_sym_discriminator] = ACTIONS(60),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(60),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(60),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(60),
    [anon_sym_acl] = ACTIONS(60),
    [anon_sym_traffic] = ACTIONS(60),
    [anon_sym_classifier] = ACTIONS(60),
    [anon_sym_behavior] = ACTIONS(60),
    [anon_sym_policy] = ACTIONS(60),
    [anon_sym_stp] = ACTIONS(60),
    [anon_sym_rstp] = ACTIONS(60),
    [anon_sym_mstp] = ACTIONS(60),
    [anon_sym_vrrp] = ACTIONS(60),
    [anon_sym_vrid] = ACTIONS(60),
    [anon_sym_virtual_DASHip] = ACTIONS(60),
    [anon_sym_priority] = ACTIONS(60),
    [anon_sym_eth_DASHtrunk] = ACTIONS(60),
    [anon_sym_mode] = ACTIONS(60),
    [anon_sym_lacp] = ACTIONS(60),
    [anon_sym_lldp] = ACTIONS(60),
    [anon_sym_snmp_DASHagent] = ACTIONS(60),
    [anon_sym_ntp_DASHservice] = ACTIONS(60),
    [anon_sym_ntp_DASHserver] = ACTIONS(60),
    [anon_sym_dhcp] = ACTIONS(60),
    [anon_sym_ip_DASHpool] = ACTIONS(60),
    [anon_sym_stack] = ACTIONS(60),
    [anon_sym_css] = ACTIONS(60),
    [anon_sym_mirror] = ACTIONS(60),
    [anon_sym_observe_DASHport] = ACTIONS(60),
    [anon_sym_ssh] = ACTIONS(60),
    [anon_sym_stelnet] = ACTIONS(60),
    [anon_sym_protocol] = ACTIONS(60),
    [anon_sym_inbound] = ACTIONS(60),
    [anon_sym_user_DASHinterface] = ACTIONS(60),
    [anon_sym_authentication] = ACTIONS(60),
    [anon_sym_idle_DASHtimeout] = ACTIONS(60),
    [anon_sym_service_DASHtype] = ACTIONS(60),
    [anon_sym_level] = ACTIONS(60),
    [anon_sym_state] = ACTIONS(60),
    [anon_sym_password] = ACTIONS(60),
    [anon_sym_header] = ACTIONS(60),
    [anon_sym_banner] = ACTIONS(60),
    [anon_sym_time_DASHrange] = ACTIONS(60),
    [anon_sym_set] = ACTIONS(60),
    [anon_sym_permit] = ACTIONS(60),
    [anon_sym_deny] = ACTIONS(60),
    [anon_sym_dfs_DASHgroup] = ACTIONS(60),
    [anon_sym_m_DASHlag] = ACTIONS(60),
    [anon_sym_link_DASHtype] = ACTIONS(60),
    [anon_sym_trunk] = ACTIONS(60),
    [anon_sym_access] = ACTIONS(60),
    [anon_sym_hybrid] = ACTIONS(60),
    [anon_sym_allow_DASHpass] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
    [anon_sym_route_DASHstatic] = ACTIONS(60),
    [anon_sym_ipv6] = ACTIONS(60),
    [anon_sym_ip_DASHprefix] = ACTIONS(60),
    [anon_sym_export_DASHextcommunity] = ACTIONS(60),
    [anon_sym_import_DASHextcommunity] = ACTIONS(60),
    [anon_sym_binding] = ACTIONS(60),
    [anon_sym_irf] = ACTIONS(60),
    [anon_sym_member] = ACTIONS(60),
    [aux_sym_keyword_token1] = ACTIONS(60),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_blank_line_token1] = ACTIONS(62),
    [aux_sym_blank_line_token2] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(64),
    [anon_sym_interface] = ACTIONS(64),
    [anon_sym_sysname] = ACTIONS(64),
    [anon_sym_system_DASHview] = ACTIONS(64),
    [anon_sym_quit] = ACTIONS(64),
    [anon_sym_return] = ACTIONS(64),
    [anon_sym_save] = ACTIONS(64),
    [anon_sym_reboot] = ACTIONS(64),
    [anon_sym_commit] = ACTIONS(64),
    [anon_sym_rollback] = ACTIONS(64),
    [anon_sym_display] = ACTIONS(64),
    [anon_sym_disp] = ACTIONS(64),
    [anon_sym_vlan] = ACTIONS(64),
    [anon_sym_vlanif] = ACTIONS(64),
    [anon_sym_batch] = ACTIONS(64),
    [anon_sym_description] = ACTIONS(64),
    [anon_sym_ip] = ACTIONS(64),
    [anon_sym_port] = ACTIONS(64),
    [anon_sym_undo] = ACTIONS(64),
    [anon_sym_shutdown] = ACTIONS(64),
    [anon_sym_shut] = ACTIONS(64),
    [anon_sym_aaa] = ACTIONS(64),
    [anon_sym_local_DASHuser] = ACTIONS(64),
    [anon_sym_authentication_DASHmode] = ACTIONS(64),
    [anon_sym_authorization_DASHmode] = ACTIONS(64),
    [anon_sym_vpn_DASHinstance] = ACTIONS(64),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(64),
    [anon_sym_vpn_DASHtarget] = ACTIONS(64),
    [anon_sym_ospf] = ACTIONS(64),
    [anon_sym_bgp] = ACTIONS(64),
    [anon_sym_isis] = ACTIONS(64),
    [anon_sym_rip] = ACTIONS(64),
    [anon_sym_area] = ACTIONS(64),
    [anon_sym_network] = ACTIONS(64),
    [anon_sym_route_DASHpolicy] = ACTIONS(64),
    [anon_sym_bfd] = ACTIONS(64),
    [anon_sym_discriminator] = ACTIONS(64),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(64),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(64),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(64),
    [anon_sym_acl] = ACTIONS(64),
    [anon_sym_traffic] = ACTIONS(64),
    [anon_sym_classifier] = ACTIONS(64),
    [anon_sym_behavior] = ACTIONS(64),
    [anon_sym_policy] = ACTIONS(64),
    [anon_sym_stp] = ACTIONS(64),
    [anon_sym_rstp] = ACTIONS(64),
    [anon_sym_mstp] = ACTIONS(64),
    [anon_sym_vrrp] = ACTIONS(64),
    [anon_sym_vrid] = ACTIONS(64),
    [anon_sym_virtual_DASHip] = ACTIONS(64),
    [anon_sym_priority] = ACTIONS(64),
    [anon_sym_eth_DASHtrunk] = ACTIONS(64),
    [anon_sym_mode] = ACTIONS(64),
    [anon_sym_lacp] = ACTIONS(64),
    [anon_sym_lldp] = ACTIONS(64),
    [anon_sym_snmp_DASHagent] = ACTIONS(64),
    [anon_sym_ntp_DASHservice] = ACTIONS(64),
    [anon_sym_ntp_DASHserver] = ACTIONS(64),
    [anon_sym_dhcp] = ACTIONS(64),
    [anon_sym_ip_DASHpool] = ACTIONS(64),
    [anon_sym_stack] = ACTIONS(64),
    [anon_sym_css] = ACTIONS(64),
    [anon_sym_mirror] = ACTIONS(64),
    [anon_sym_observe_DASHport] = ACTIONS(64),
    [anon_sym_ssh] = ACTIONS(64),
    [anon_sym_stelnet] = ACTIONS(64),
    [anon_sym_protocol] = ACTIONS(64),
    [anon_sym_inbound] = ACTIONS(64),
    [anon_sym_user_DASHinterface] = ACTIONS(64),
    [anon_sym_authentication] = ACTIONS(64),
    [anon_sym_idle_DASHtimeout] = ACTIONS(64),
    [anon_sym_service_DASHtype] = ACTIONS(64),
    [anon_sym_level] = ACTIONS(64),
    [anon_sym_state] = ACTIONS(64),
    [anon_sym_password] = ACTIONS(64),
    [anon_sym_header] = ACTIONS(64),
    [anon_sym_banner] = ACTIONS(64),
    [anon_sym_time_DASHrange] = ACTIONS(64),
    [anon_sym_set] = ACTIONS(64),
    [anon_sym_permit] = ACTIONS(64),
    [anon_sym_deny] = ACTIONS(64),
    [anon_sym_dfs_DASHgroup] = ACTIONS(64),
    [anon_sym_m_DASHlag] = ACTIONS(64),
    [anon_sym_link_DASHtype] = ACTIONS(64),
    [anon_sym_trunk] = ACTIONS(64),
    [anon_sym_access] = ACTIONS(64),
    [anon_sym_hybrid] = ACTIONS(64),
    [anon_sym_allow_DASHpass] = ACTIONS(64),
    [anon_sym_default] = ACTIONS(64),
    [anon_sym_route_DASHstatic] = ACTIONS(64),
    [anon_sym_ipv6] = ACTIONS(64),
    [anon_sym_ip_DASHprefix] = ACTIONS(64),
    [anon_sym_export_DASHextcommunity] = ACTIONS(64),
    [anon_sym_import_DASHextcommunity] = ACTIONS(64),
    [anon_sym_binding] = ACTIONS(64),
    [anon_sym_irf] = ACTIONS(64),
    [anon_sym_member] = ACTIONS(64),
    [aux_sym_keyword_token1] = ACTIONS(64),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_blank_line_token1] = ACTIONS(66),
    [aux_sym_blank_line_token2] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_interface] = ACTIONS(68),
    [anon_sym_sysname] = ACTIONS(68),
    [anon_sym_system_DASHview] = ACTIONS(68),
    [anon_sym_quit] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(68),
    [anon_sym_save] = ACTIONS(68),
    [anon_sym_reboot] = ACTIONS(68),
    [anon_sym_commit] = ACTIONS(68),
    [anon_sym_rollback] = ACTIONS(68),
    [anon_sym_display] = ACTIONS(68),
    [anon_sym_disp] = ACTIONS(68),
    [anon_sym_vlan] = ACTIONS(68),
    [anon_sym_vlanif] = ACTIONS(68),
    [anon_sym_batch] = ACTIONS(68),
    [anon_sym_description] = ACTIONS(68),
    [anon_sym_ip] = ACTIONS(68),
    [anon_sym_port] = ACTIONS(68),
    [anon_sym_undo] = ACTIONS(68),
    [anon_sym_shutdown] = ACTIONS(68),
    [anon_sym_shut] = ACTIONS(68),
    [anon_sym_aaa] = ACTIONS(68),
    [anon_sym_local_DASHuser] = ACTIONS(68),
    [anon_sym_authentication_DASHmode] = ACTIONS(68),
    [anon_sym_authorization_DASHmode] = ACTIONS(68),
    [anon_sym_vpn_DASHinstance] = ACTIONS(68),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(68),
    [anon_sym_vpn_DASHtarget] = ACTIONS(68),
    [anon_sym_ospf] = ACTIONS(68),
    [anon_sym_bgp] = ACTIONS(68),
    [anon_sym_isis] = ACTIONS(68),
    [anon_sym_rip] = ACTIONS(68),
    [anon_sym_area] = ACTIONS(68),
    [anon_sym_network] = ACTIONS(68),
    [anon_sym_route_DASHpolicy] = ACTIONS(68),
    [anon_sym_bfd] = ACTIONS(68),
    [anon_sym_discriminator] = ACTIONS(68),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(68),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(68),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(68),
    [anon_sym_acl] = ACTIONS(68),
    [anon_sym_traffic] = ACTIONS(68),
    [anon_sym_classifier] = ACTIONS(68),
    [anon_sym_behavior] = ACTIONS(68),
    [anon_sym_policy] = ACTIONS(68),
    [anon_sym_stp] = ACTIONS(68),
    [anon_sym_rstp] = ACTIONS(68),
    [anon_sym_mstp] = ACTIONS(68),
    [anon_sym_vrrp] = ACTIONS(68),
    [anon_sym_vrid] = ACTIONS(68),
    [anon_sym_virtual_DASHip] = ACTIONS(68),
    [anon_sym_priority] = ACTIONS(68),
    [anon_sym_eth_DASHtrunk] = ACTIONS(68),
    [anon_sym_mode] = ACTIONS(68),
    [anon_sym_lacp] = ACTIONS(68),
    [anon_sym_lldp] = ACTIONS(68),
    [anon_sym_snmp_DASHagent] = ACTIONS(68),
    [anon_sym_ntp_DASHservice] = ACTIONS(68),
    [anon_sym_ntp_DASHserver] = ACTIONS(68),
    [anon_sym_dhcp] = ACTIONS(68),
    [anon_sym_ip_DASHpool] = ACTIONS(68),
    [anon_sym_stack] = ACTIONS(68),
    [anon_sym_css] = ACTIONS(68),
    [anon_sym_mirror] = ACTIONS(68),
    [anon_sym_observe_DASHport] = ACTIONS(68),
    [anon_sym_ssh] = ACTIONS(68),
    [anon_sym_stelnet] = ACTIONS(68),
    [anon_sym_protocol] = ACTIONS(68),
    [anon_sym_inbound] = ACTIONS(68),
    [anon_sym_user_DASHinterface] = ACTIONS(68),
    [anon_sym_authentication] = ACTIONS(68),
    [anon_sym_idle_DASHtimeout] = ACTIONS(68),
    [anon_sym_service_DASHtype] = ACTIONS(68),
    [anon_sym_level] = ACTIONS(68),
    [anon_sym_state] = ACTIONS(68),
    [anon_sym_password] = ACTIONS(68),
    [anon_sym_header] = ACTIONS(68),
    [anon_sym_banner] = ACTIONS(68),
    [anon_sym_time_DASHrange] = ACTIONS(68),
    [anon_sym_set] = ACTIONS(68),
    [anon_sym_permit] = ACTIONS(68),
    [anon_sym_deny] = ACTIONS(68),
    [anon_sym_dfs_DASHgroup] = ACTIONS(68),
    [anon_sym_m_DASHlag] = ACTIONS(68),
    [anon_sym_link_DASHtype] = ACTIONS(68),
    [anon_sym_trunk] = ACTIONS(68),
    [anon_sym_access] = ACTIONS(68),
    [anon_sym_hybrid] = ACTIONS(68),
    [anon_sym_allow_DASHpass] = ACTIONS(68),
    [anon_sym_default] = ACTIONS(68),
    [anon_sym_route_DASHstatic] = ACTIONS(68),
    [anon_sym_ipv6] = ACTIONS(68),
    [anon_sym_ip_DASHprefix] = ACTIONS(68),
    [anon_sym_export_DASHextcommunity] = ACTIONS(68),
    [anon_sym_import_DASHextcommunity] = ACTIONS(68),
    [anon_sym_binding] = ACTIONS(68),
    [anon_sym_irf] = ACTIONS(68),
    [anon_sym_member] = ACTIONS(68),
    [aux_sym_keyword_token1] = ACTIONS(68),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [aux_sym_blank_line_token1] = ACTIONS(70),
    [aux_sym_blank_line_token2] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_interface] = ACTIONS(72),
    [anon_sym_sysname] = ACTIONS(72),
    [anon_sym_system_DASHview] = ACTIONS(72),
    [anon_sym_quit] = ACTIONS(72),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_save] = ACTIONS(72),
    [anon_sym_reboot] = ACTIONS(72),
    [anon_sym_commit] = ACTIONS(72),
    [anon_sym_rollback] = ACTIONS(72),
    [anon_sym_display] = ACTIONS(72),
    [anon_sym_disp] = ACTIONS(72),
    [anon_sym_vlan] = ACTIONS(72),
    [anon_sym_vlanif] = ACTIONS(72),
    [anon_sym_batch] = ACTIONS(72),
    [anon_sym_description] = ACTIONS(72),
    [anon_sym_ip] = ACTIONS(72),
    [anon_sym_port] = ACTIONS(72),
    [anon_sym_undo] = ACTIONS(72),
    [anon_sym_shutdown] = ACTIONS(72),
    [anon_sym_shut] = ACTIONS(72),
    [anon_sym_aaa] = ACTIONS(72),
    [anon_sym_local_DASHuser] = ACTIONS(72),
    [anon_sym_authentication_DASHmode] = ACTIONS(72),
    [anon_sym_authorization_DASHmode] = ACTIONS(72),
    [anon_sym_vpn_DASHinstance] = ACTIONS(72),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(72),
    [anon_sym_vpn_DASHtarget] = ACTIONS(72),
    [anon_sym_ospf] = ACTIONS(72),
    [anon_sym_bgp] = ACTIONS(72),
    [anon_sym_isis] = ACTIONS(72),
    [anon_sym_rip] = ACTIONS(72),
    [anon_sym_area] = ACTIONS(72),
    [anon_sym_network] = ACTIONS(72),
    [anon_sym_route_DASHpolicy] = ACTIONS(72),
    [anon_sym_bfd] = ACTIONS(72),
    [anon_sym_discriminator] = ACTIONS(72),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(72),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(72),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(72),
    [anon_sym_acl] = ACTIONS(72),
    [anon_sym_traffic] = ACTIONS(72),
    [anon_sym_classifier] = ACTIONS(72),
    [anon_sym_behavior] = ACTIONS(72),
    [anon_sym_policy] = ACTIONS(72),
    [anon_sym_stp] = ACTIONS(72),
    [anon_sym_rstp] = ACTIONS(72),
    [anon_sym_mstp] = ACTIONS(72),
    [anon_sym_vrrp] = ACTIONS(72),
    [anon_sym_vrid] = ACTIONS(72),
    [anon_sym_virtual_DASHip] = ACTIONS(72),
    [anon_sym_priority] = ACTIONS(72),
    [anon_sym_eth_DASHtrunk] = ACTIONS(72),
    [anon_sym_mode] = ACTIONS(72),
    [anon_sym_lacp] = ACTIONS(72),
    [anon_sym_lldp] = ACTIONS(72),
    [anon_sym_snmp_DASHagent] = ACTIONS(72),
    [anon_sym_ntp_DASHservice] = ACTIONS(72),
    [anon_sym_ntp_DASHserver] = ACTIONS(72),
    [anon_sym_dhcp] = ACTIONS(72),
    [anon_sym_ip_DASHpool] = ACTIONS(72),
    [anon_sym_stack] = ACTIONS(72),
    [anon_sym_css] = ACTIONS(72),
    [anon_sym_mirror] = ACTIONS(72),
    [anon_sym_observe_DASHport] = ACTIONS(72),
    [anon_sym_ssh] = ACTIONS(72),
    [anon_sym_stelnet] = ACTIONS(72),
    [anon_sym_protocol] = ACTIONS(72),
    [anon_sym_inbound] = ACTIONS(72),
    [anon_sym_user_DASHinterface] = ACTIONS(72),
    [anon_sym_authentication] = ACTIONS(72),
    [anon_sym_idle_DASHtimeout] = ACTIONS(72),
    [anon_sym_service_DASHtype] = ACTIONS(72),
    [anon_sym_level] = ACTIONS(72),
    [anon_sym_state] = ACTIONS(72),
    [anon_sym_password] = ACTIONS(72),
    [anon_sym_header] = ACTIONS(72),
    [anon_sym_banner] = ACTIONS(72),
    [anon_sym_time_DASHrange] = ACTIONS(72),
    [anon_sym_set] = ACTIONS(72),
    [anon_sym_permit] = ACTIONS(72),
    [anon_sym_deny] = ACTIONS(72),
    [anon_sym_dfs_DASHgroup] = ACTIONS(72),
    [anon_sym_m_DASHlag] = ACTIONS(72),
    [anon_sym_link_DASHtype] = ACTIONS(72),
    [anon_sym_trunk] = ACTIONS(72),
    [anon_sym_access] = ACTIONS(72),
    [anon_sym_hybrid] = ACTIONS(72),
    [anon_sym_allow_DASHpass] = ACTIONS(72),
    [anon_sym_default] = ACTIONS(72),
    [anon_sym_route_DASHstatic] = ACTIONS(72),
    [anon_sym_ipv6] = ACTIONS(72),
    [anon_sym_ip_DASHprefix] = ACTIONS(72),
    [anon_sym_export_DASHextcommunity] = ACTIONS(72),
    [anon_sym_import_DASHextcommunity] = ACTIONS(72),
    [anon_sym_binding] = ACTIONS(72),
    [anon_sym_irf] = ACTIONS(72),
    [anon_sym_member] = ACTIONS(72),
    [aux_sym_keyword_token1] = ACTIONS(72),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_blank_line_token1] = ACTIONS(74),
    [aux_sym_blank_line_token2] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_interface] = ACTIONS(76),
    [anon_sym_sysname] = ACTIONS(76),
    [anon_sym_system_DASHview] = ACTIONS(76),
    [anon_sym_quit] = ACTIONS(76),
    [anon_sym_return] = ACTIONS(76),
    [anon_sym_save] = ACTIONS(76),
    [anon_sym_reboot] = ACTIONS(76),
    [anon_sym_commit] = ACTIONS(76),
    [anon_sym_rollback] = ACTIONS(76),
    [anon_sym_display] = ACTIONS(76),
    [anon_sym_disp] = ACTIONS(76),
    [anon_sym_vlan] = ACTIONS(76),
    [anon_sym_vlanif] = ACTIONS(76),
    [anon_sym_batch] = ACTIONS(76),
    [anon_sym_description] = ACTIONS(76),
    [anon_sym_ip] = ACTIONS(76),
    [anon_sym_port] = ACTIONS(76),
    [anon_sym_undo] = ACTIONS(76),
    [anon_sym_shutdown] = ACTIONS(76),
    [anon_sym_shut] = ACTIONS(76),
    [anon_sym_aaa] = ACTIONS(76),
    [anon_sym_local_DASHuser] = ACTIONS(76),
    [anon_sym_authentication_DASHmode] = ACTIONS(76),
    [anon_sym_authorization_DASHmode] = ACTIONS(76),
    [anon_sym_vpn_DASHinstance] = ACTIONS(76),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(76),
    [anon_sym_vpn_DASHtarget] = ACTIONS(76),
    [anon_sym_ospf] = ACTIONS(76),
    [anon_sym_bgp] = ACTIONS(76),
    [anon_sym_isis] = ACTIONS(76),
    [anon_sym_rip] = ACTIONS(76),
    [anon_sym_area] = ACTIONS(76),
    [anon_sym_network] = ACTIONS(76),
    [anon_sym_route_DASHpolicy] = ACTIONS(76),
    [anon_sym_bfd] = ACTIONS(76),
    [anon_sym_discriminator] = ACTIONS(76),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(76),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(76),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(76),
    [anon_sym_acl] = ACTIONS(76),
    [anon_sym_traffic] = ACTIONS(76),
    [anon_sym_classifier] = ACTIONS(76),
    [anon_sym_behavior] = ACTIONS(76),
    [anon_sym_policy] = ACTIONS(76),
    [anon_sym_stp] = ACTIONS(76),
    [anon_sym_rstp] = ACTIONS(76),
    [anon_sym_mstp] = ACTIONS(76),
    [anon_sym_vrrp] = ACTIONS(76),
    [anon_sym_vrid] = ACTIONS(76),
    [anon_sym_virtual_DASHip] = ACTIONS(76),
    [anon_sym_priority] = ACTIONS(76),
    [anon_sym_eth_DASHtrunk] = ACTIONS(76),
    [anon_sym_mode] = ACTIONS(76),
    [anon_sym_lacp] = ACTIONS(76),
    [anon_sym_lldp] = ACTIONS(76),
    [anon_sym_snmp_DASHagent] = ACTIONS(76),
    [anon_sym_ntp_DASHservice] = ACTIONS(76),
    [anon_sym_ntp_DASHserver] = ACTIONS(76),
    [anon_sym_dhcp] = ACTIONS(76),
    [anon_sym_ip_DASHpool] = ACTIONS(76),
    [anon_sym_stack] = ACTIONS(76),
    [anon_sym_css] = ACTIONS(76),
    [anon_sym_mirror] = ACTIONS(76),
    [anon_sym_observe_DASHport] = ACTIONS(76),
    [anon_sym_ssh] = ACTIONS(76),
    [anon_sym_stelnet] = ACTIONS(76),
    [anon_sym_protocol] = ACTIONS(76),
    [anon_sym_inbound] = ACTIONS(76),
    [anon_sym_user_DASHinterface] = ACTIONS(76),
    [anon_sym_authentication] = ACTIONS(76),
    [anon_sym_idle_DASHtimeout] = ACTIONS(76),
    [anon_sym_service_DASHtype] = ACTIONS(76),
    [anon_sym_level] = ACTIONS(76),
    [anon_sym_state] = ACTIONS(76),
    [anon_sym_password] = ACTIONS(76),
    [anon_sym_header] = ACTIONS(76),
    [anon_sym_banner] = ACTIONS(76),
    [anon_sym_time_DASHrange] = ACTIONS(76),
    [anon_sym_set] = ACTIONS(76),
    [anon_sym_permit] = ACTIONS(76),
    [anon_sym_deny] = ACTIONS(76),
    [anon_sym_dfs_DASHgroup] = ACTIONS(76),
    [anon_sym_m_DASHlag] = ACTIONS(76),
    [anon_sym_link_DASHtype] = ACTIONS(76),
    [anon_sym_trunk] = ACTIONS(76),
    [anon_sym_access] = ACTIONS(76),
    [anon_sym_hybrid] = ACTIONS(76),
    [anon_sym_allow_DASHpass] = ACTIONS(76),
    [anon_sym_default] = ACTIONS(76),
    [anon_sym_route_DASHstatic] = ACTIONS(76),
    [anon_sym_ipv6] = ACTIONS(76),
    [anon_sym_ip_DASHprefix] = ACTIONS(76),
    [anon_sym_export_DASHextcommunity] = ACTIONS(76),
    [anon_sym_import_DASHextcommunity] = ACTIONS(76),
    [anon_sym_binding] = ACTIONS(76),
    [anon_sym_irf] = ACTIONS(76),
    [anon_sym_member] = ACTIONS(76),
    [aux_sym_keyword_token1] = ACTIONS(76),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [aux_sym_blank_line_token1] = ACTIONS(78),
    [aux_sym_blank_line_token2] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_interface] = ACTIONS(80),
    [anon_sym_sysname] = ACTIONS(80),
    [anon_sym_system_DASHview] = ACTIONS(80),
    [anon_sym_quit] = ACTIONS(80),
    [anon_sym_return] = ACTIONS(80),
    [anon_sym_save] = ACTIONS(80),
    [anon_sym_reboot] = ACTIONS(80),
    [anon_sym_commit] = ACTIONS(80),
    [anon_sym_rollback] = ACTIONS(80),
    [anon_sym_display] = ACTIONS(80),
    [anon_sym_disp] = ACTIONS(80),
    [anon_sym_vlan] = ACTIONS(80),
    [anon_sym_vlanif] = ACTIONS(80),
    [anon_sym_batch] = ACTIONS(80),
    [anon_sym_description] = ACTIONS(80),
    [anon_sym_ip] = ACTIONS(80),
    [anon_sym_port] = ACTIONS(80),
    [anon_sym_undo] = ACTIONS(80),
    [anon_sym_shutdown] = ACTIONS(80),
    [anon_sym_shut] = ACTIONS(80),
    [anon_sym_aaa] = ACTIONS(80),
    [anon_sym_local_DASHuser] = ACTIONS(80),
    [anon_sym_authentication_DASHmode] = ACTIONS(80),
    [anon_sym_authorization_DASHmode] = ACTIONS(80),
    [anon_sym_vpn_DASHinstance] = ACTIONS(80),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(80),
    [anon_sym_vpn_DASHtarget] = ACTIONS(80),
    [anon_sym_ospf] = ACTIONS(80),
    [anon_sym_bgp] = ACTIONS(80),
    [anon_sym_isis] = ACTIONS(80),
    [anon_sym_rip] = ACTIONS(80),
    [anon_sym_area] = ACTIONS(80),
    [anon_sym_network] = ACTIONS(80),
    [anon_sym_route_DASHpolicy] = ACTIONS(80),
    [anon_sym_bfd] = ACTIONS(80),
    [anon_sym_discriminator] = ACTIONS(80),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(80),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(80),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(80),
    [anon_sym_acl] = ACTIONS(80),
    [anon_sym_traffic] = ACTIONS(80),
    [anon_sym_classifier] = ACTIONS(80),
    [anon_sym_behavior] = ACTIONS(80),
    [anon_sym_policy] = ACTIONS(80),
    [anon_sym_stp] = ACTIONS(80),
    [anon_sym_rstp] = ACTIONS(80),
    [anon_sym_mstp] = ACTIONS(80),
    [anon_sym_vrrp] = ACTIONS(80),
    [anon_sym_vrid] = ACTIONS(80),
    [anon_sym_virtual_DASHip] = ACTIONS(80),
    [anon_sym_priority] = ACTIONS(80),
    [anon_sym_eth_DASHtrunk] = ACTIONS(80),
    [anon_sym_mode] = ACTIONS(80),
    [anon_sym_lacp] = ACTIONS(80),
    [anon_sym_lldp] = ACTIONS(80),
    [anon_sym_snmp_DASHagent] = ACTIONS(80),
    [anon_sym_ntp_DASHservice] = ACTIONS(80),
    [anon_sym_ntp_DASHserver] = ACTIONS(80),
    [anon_sym_dhcp] = ACTIONS(80),
    [anon_sym_ip_DASHpool] = ACTIONS(80),
    [anon_sym_stack] = ACTIONS(80),
    [anon_sym_css] = ACTIONS(80),
    [anon_sym_mirror] = ACTIONS(80),
    [anon_sym_observe_DASHport] = ACTIONS(80),
    [anon_sym_ssh] = ACTIONS(80),
    [anon_sym_stelnet] = ACTIONS(80),
    [anon_sym_protocol] = ACTIONS(80),
    [anon_sym_inbound] = ACTIONS(80),
    [anon_sym_user_DASHinterface] = ACTIONS(80),
    [anon_sym_authentication] = ACTIONS(80),
    [anon_sym_idle_DASHtimeout] = ACTIONS(80),
    [anon_sym_service_DASHtype] = ACTIONS(80),
    [anon_sym_level] = ACTIONS(80),
    [anon_sym_state] = ACTIONS(80),
    [anon_sym_password] = ACTIONS(80),
    [anon_sym_header] = ACTIONS(80),
    [anon_sym_banner] = ACTIONS(80),
    [anon_sym_time_DASHrange] = ACTIONS(80),
    [anon_sym_set] = ACTIONS(80),
    [anon_sym_permit] = ACTIONS(80),
    [anon_sym_deny] = ACTIONS(80),
    [anon_sym_dfs_DASHgroup] = ACTIONS(80),
    [anon_sym_m_DASHlag] = ACTIONS(80),
    [anon_sym_link_DASHtype] = ACTIONS(80),
    [anon_sym_trunk] = ACTIONS(80),
    [anon_sym_access] = ACTIONS(80),
    [anon_sym_hybrid] = ACTIONS(80),
    [anon_sym_allow_DASHpass] = ACTIONS(80),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_route_DASHstatic] = ACTIONS(80),
    [anon_sym_ipv6] = ACTIONS(80),
    [anon_sym_ip_DASHprefix] = ACTIONS(80),
    [anon_sym_export_DASHextcommunity] = ACTIONS(80),
    [anon_sym_import_DASHextcommunity] = ACTIONS(80),
    [anon_sym_binding] = ACTIONS(80),
    [anon_sym_irf] = ACTIONS(80),
    [anon_sym_member] = ACTIONS(80),
    [aux_sym_keyword_token1] = ACTIONS(80),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym_blank_line_token1] = ACTIONS(82),
    [aux_sym_blank_line_token2] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_interface] = ACTIONS(84),
    [anon_sym_sysname] = ACTIONS(84),
    [anon_sym_system_DASHview] = ACTIONS(84),
    [anon_sym_quit] = ACTIONS(84),
    [anon_sym_return] = ACTIONS(84),
    [anon_sym_save] = ACTIONS(84),
    [anon_sym_reboot] = ACTIONS(84),
    [anon_sym_commit] = ACTIONS(84),
    [anon_sym_rollback] = ACTIONS(84),
    [anon_sym_display] = ACTIONS(84),
    [anon_sym_disp] = ACTIONS(84),
    [anon_sym_vlan] = ACTIONS(84),
    [anon_sym_vlanif] = ACTIONS(84),
    [anon_sym_batch] = ACTIONS(84),
    [anon_sym_description] = ACTIONS(84),
    [anon_sym_ip] = ACTIONS(84),
    [anon_sym_port] = ACTIONS(84),
    [anon_sym_undo] = ACTIONS(84),
    [anon_sym_shutdown] = ACTIONS(84),
    [anon_sym_shut] = ACTIONS(84),
    [anon_sym_aaa] = ACTIONS(84),
    [anon_sym_local_DASHuser] = ACTIONS(84),
    [anon_sym_authentication_DASHmode] = ACTIONS(84),
    [anon_sym_authorization_DASHmode] = ACTIONS(84),
    [anon_sym_vpn_DASHinstance] = ACTIONS(84),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(84),
    [anon_sym_vpn_DASHtarget] = ACTIONS(84),
    [anon_sym_ospf] = ACTIONS(84),
    [anon_sym_bgp] = ACTIONS(84),
    [anon_sym_isis] = ACTIONS(84),
    [anon_sym_rip] = ACTIONS(84),
    [anon_sym_area] = ACTIONS(84),
    [anon_sym_network] = ACTIONS(84),
    [anon_sym_route_DASHpolicy] = ACTIONS(84),
    [anon_sym_bfd] = ACTIONS(84),
    [anon_sym_discriminator] = ACTIONS(84),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(84),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(84),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(84),
    [anon_sym_acl] = ACTIONS(84),
    [anon_sym_traffic] = ACTIONS(84),
    [anon_sym_classifier] = ACTIONS(84),
    [anon_sym_behavior] = ACTIONS(84),
    [anon_sym_policy] = ACTIONS(84),
    [anon_sym_stp] = ACTIONS(84),
    [anon_sym_rstp] = ACTIONS(84),
    [anon_sym_mstp] = ACTIONS(84),
    [anon_sym_vrrp] = ACTIONS(84),
    [anon_sym_vrid] = ACTIONS(84),
    [anon_sym_virtual_DASHip] = ACTIONS(84),
    [anon_sym_priority] = ACTIONS(84),
    [anon_sym_eth_DASHtrunk] = ACTIONS(84),
    [anon_sym_mode] = ACTIONS(84),
    [anon_sym_lacp] = ACTIONS(84),
    [anon_sym_lldp] = ACTIONS(84),
    [anon_sym_snmp_DASHagent] = ACTIONS(84),
    [anon_sym_ntp_DASHservice] = ACTIONS(84),
    [anon_sym_ntp_DASHserver] = ACTIONS(84),
    [anon_sym_dhcp] = ACTIONS(84),
    [anon_sym_ip_DASHpool] = ACTIONS(84),
    [anon_sym_stack] = ACTIONS(84),
    [anon_sym_css] = ACTIONS(84),
    [anon_sym_mirror] = ACTIONS(84),
    [anon_sym_observe_DASHport] = ACTIONS(84),
    [anon_sym_ssh] = ACTIONS(84),
    [anon_sym_stelnet] = ACTIONS(84),
    [anon_sym_protocol] = ACTIONS(84),
    [anon_sym_inbound] = ACTIONS(84),
    [anon_sym_user_DASHinterface] = ACTIONS(84),
    [anon_sym_authentication] = ACTIONS(84),
    [anon_sym_idle_DASHtimeout] = ACTIONS(84),
    [anon_sym_service_DASHtype] = ACTIONS(84),
    [anon_sym_level] = ACTIONS(84),
    [anon_sym_state] = ACTIONS(84),
    [anon_sym_password] = ACTIONS(84),
    [anon_sym_header] = ACTIONS(84),
    [anon_sym_banner] = ACTIONS(84),
    [anon_sym_time_DASHrange] = ACTIONS(84),
    [anon_sym_set] = ACTIONS(84),
    [anon_sym_permit] = ACTIONS(84),
    [anon_sym_deny] = ACTIONS(84),
    [anon_sym_dfs_DASHgroup] = ACTIONS(84),
    [anon_sym_m_DASHlag] = ACTIONS(84),
    [anon_sym_link_DASHtype] = ACTIONS(84),
    [anon_sym_trunk] = ACTIONS(84),
    [anon_sym_access] = ACTIONS(84),
    [anon_sym_hybrid] = ACTIONS(84),
    [anon_sym_allow_DASHpass] = ACTIONS(84),
    [anon_sym_default] = ACTIONS(84),
    [anon_sym_route_DASHstatic] = ACTIONS(84),
    [anon_sym_ipv6] = ACTIONS(84),
    [anon_sym_ip_DASHprefix] = ACTIONS(84),
    [anon_sym_export_DASHextcommunity] = ACTIONS(84),
    [anon_sym_import_DASHextcommunity] = ACTIONS(84),
    [anon_sym_binding] = ACTIONS(84),
    [anon_sym_irf] = ACTIONS(84),
    [anon_sym_member] = ACTIONS(84),
    [aux_sym_keyword_token1] = ACTIONS(84),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym_blank_line_token1] = ACTIONS(86),
    [aux_sym_blank_line_token2] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_interface] = ACTIONS(88),
    [anon_sym_sysname] = ACTIONS(88),
    [anon_sym_system_DASHview] = ACTIONS(88),
    [anon_sym_quit] = ACTIONS(88),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_save] = ACTIONS(88),
    [anon_sym_reboot] = ACTIONS(88),
    [anon_sym_commit] = ACTIONS(88),
    [anon_sym_rollback] = ACTIONS(88),
    [anon_sym_display] = ACTIONS(88),
    [anon_sym_disp] = ACTIONS(88),
    [anon_sym_vlan] = ACTIONS(88),
    [anon_sym_vlanif] = ACTIONS(88),
    [anon_sym_batch] = ACTIONS(88),
    [anon_sym_description] = ACTIONS(88),
    [anon_sym_ip] = ACTIONS(88),
    [anon_sym_port] = ACTIONS(88),
    [anon_sym_undo] = ACTIONS(88),
    [anon_sym_shutdown] = ACTIONS(88),
    [anon_sym_shut] = ACTIONS(88),
    [anon_sym_aaa] = ACTIONS(88),
    [anon_sym_local_DASHuser] = ACTIONS(88),
    [anon_sym_authentication_DASHmode] = ACTIONS(88),
    [anon_sym_authorization_DASHmode] = ACTIONS(88),
    [anon_sym_vpn_DASHinstance] = ACTIONS(88),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(88),
    [anon_sym_vpn_DASHtarget] = ACTIONS(88),
    [anon_sym_ospf] = ACTIONS(88),
    [anon_sym_bgp] = ACTIONS(88),
    [anon_sym_isis] = ACTIONS(88),
    [anon_sym_rip] = ACTIONS(88),
    [anon_sym_area] = ACTIONS(88),
    [anon_sym_network] = ACTIONS(88),
    [anon_sym_route_DASHpolicy] = ACTIONS(88),
    [anon_sym_bfd] = ACTIONS(88),
    [anon_sym_discriminator] = ACTIONS(88),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(88),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(88),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(88),
    [anon_sym_acl] = ACTIONS(88),
    [anon_sym_traffic] = ACTIONS(88),
    [anon_sym_classifier] = ACTIONS(88),
    [anon_sym_behavior] = ACTIONS(88),
    [anon_sym_policy] = ACTIONS(88),
    [anon_sym_stp] = ACTIONS(88),
    [anon_sym_rstp] = ACTIONS(88),
    [anon_sym_mstp] = ACTIONS(88),
    [anon_sym_vrrp] = ACTIONS(88),
    [anon_sym_vrid] = ACTIONS(88),
    [anon_sym_virtual_DASHip] = ACTIONS(88),
    [anon_sym_priority] = ACTIONS(88),
    [anon_sym_eth_DASHtrunk] = ACTIONS(88),
    [anon_sym_mode] = ACTIONS(88),
    [anon_sym_lacp] = ACTIONS(88),
    [anon_sym_lldp] = ACTIONS(88),
    [anon_sym_snmp_DASHagent] = ACTIONS(88),
    [anon_sym_ntp_DASHservice] = ACTIONS(88),
    [anon_sym_ntp_DASHserver] = ACTIONS(88),
    [anon_sym_dhcp] = ACTIONS(88),
    [anon_sym_ip_DASHpool] = ACTIONS(88),
    [anon_sym_stack] = ACTIONS(88),
    [anon_sym_css] = ACTIONS(88),
    [anon_sym_mirror] = ACTIONS(88),
    [anon_sym_observe_DASHport] = ACTIONS(88),
    [anon_sym_ssh] = ACTIONS(88),
    [anon_sym_stelnet] = ACTIONS(88),
    [anon_sym_protocol] = ACTIONS(88),
    [anon_sym_inbound] = ACTIONS(88),
    [anon_sym_user_DASHinterface] = ACTIONS(88),
    [anon_sym_authentication] = ACTIONS(88),
    [anon_sym_idle_DASHtimeout] = ACTIONS(88),
    [anon_sym_service_DASHtype] = ACTIONS(88),
    [anon_sym_level] = ACTIONS(88),
    [anon_sym_state] = ACTIONS(88),
    [anon_sym_password] = ACTIONS(88),
    [anon_sym_header] = ACTIONS(88),
    [anon_sym_banner] = ACTIONS(88),
    [anon_sym_time_DASHrange] = ACTIONS(88),
    [anon_sym_set] = ACTIONS(88),
    [anon_sym_permit] = ACTIONS(88),
    [anon_sym_deny] = ACTIONS(88),
    [anon_sym_dfs_DASHgroup] = ACTIONS(88),
    [anon_sym_m_DASHlag] = ACTIONS(88),
    [anon_sym_link_DASHtype] = ACTIONS(88),
    [anon_sym_trunk] = ACTIONS(88),
    [anon_sym_access] = ACTIONS(88),
    [anon_sym_hybrid] = ACTIONS(88),
    [anon_sym_allow_DASHpass] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_route_DASHstatic] = ACTIONS(88),
    [anon_sym_ipv6] = ACTIONS(88),
    [anon_sym_ip_DASHprefix] = ACTIONS(88),
    [anon_sym_export_DASHextcommunity] = ACTIONS(88),
    [anon_sym_import_DASHextcommunity] = ACTIONS(88),
    [anon_sym_binding] = ACTIONS(88),
    [anon_sym_irf] = ACTIONS(88),
    [anon_sym_member] = ACTIONS(88),
    [aux_sym_keyword_token1] = ACTIONS(88),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_blank_line_token1] = ACTIONS(90),
    [aux_sym_blank_line_token2] = ACTIONS(92),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_interface] = ACTIONS(92),
    [anon_sym_sysname] = ACTIONS(92),
    [anon_sym_system_DASHview] = ACTIONS(92),
    [anon_sym_quit] = ACTIONS(92),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_save] = ACTIONS(92),
    [anon_sym_reboot] = ACTIONS(92),
    [anon_sym_commit] = ACTIONS(92),
    [anon_sym_rollback] = ACTIONS(92),
    [anon_sym_display] = ACTIONS(92),
    [anon_sym_disp] = ACTIONS(92),
    [anon_sym_vlan] = ACTIONS(92),
    [anon_sym_vlanif] = ACTIONS(92),
    [anon_sym_batch] = ACTIONS(92),
    [anon_sym_description] = ACTIONS(92),
    [anon_sym_ip] = ACTIONS(92),
    [anon_sym_port] = ACTIONS(92),
    [anon_sym_undo] = ACTIONS(92),
    [anon_sym_shutdown] = ACTIONS(92),
    [anon_sym_shut] = ACTIONS(92),
    [anon_sym_aaa] = ACTIONS(92),
    [anon_sym_local_DASHuser] = ACTIONS(92),
    [anon_sym_authentication_DASHmode] = ACTIONS(92),
    [anon_sym_authorization_DASHmode] = ACTIONS(92),
    [anon_sym_vpn_DASHinstance] = ACTIONS(92),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(92),
    [anon_sym_vpn_DASHtarget] = ACTIONS(92),
    [anon_sym_ospf] = ACTIONS(92),
    [anon_sym_bgp] = ACTIONS(92),
    [anon_sym_isis] = ACTIONS(92),
    [anon_sym_rip] = ACTIONS(92),
    [anon_sym_area] = ACTIONS(92),
    [anon_sym_network] = ACTIONS(92),
    [anon_sym_route_DASHpolicy] = ACTIONS(92),
    [anon_sym_bfd] = ACTIONS(92),
    [anon_sym_discriminator] = ACTIONS(92),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(92),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(92),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(92),
    [anon_sym_acl] = ACTIONS(92),
    [anon_sym_traffic] = ACTIONS(92),
    [anon_sym_classifier] = ACTIONS(92),
    [anon_sym_behavior] = ACTIONS(92),
    [anon_sym_policy] = ACTIONS(92),
    [anon_sym_stp] = ACTIONS(92),
    [anon_sym_rstp] = ACTIONS(92),
    [anon_sym_mstp] = ACTIONS(92),
    [anon_sym_vrrp] = ACTIONS(92),
    [anon_sym_vrid] = ACTIONS(92),
    [anon_sym_virtual_DASHip] = ACTIONS(92),
    [anon_sym_priority] = ACTIONS(92),
    [anon_sym_eth_DASHtrunk] = ACTIONS(92),
    [anon_sym_mode] = ACTIONS(92),
    [anon_sym_lacp] = ACTIONS(92),
    [anon_sym_lldp] = ACTIONS(92),
    [anon_sym_snmp_DASHagent] = ACTIONS(92),
    [anon_sym_ntp_DASHservice] = ACTIONS(92),
    [anon_sym_ntp_DASHserver] = ACTIONS(92),
    [anon_sym_dhcp] = ACTIONS(92),
    [anon_sym_ip_DASHpool] = ACTIONS(92),
    [anon_sym_stack] = ACTIONS(92),
    [anon_sym_css] = ACTIONS(92),
    [anon_sym_mirror] = ACTIONS(92),
    [anon_sym_observe_DASHport] = ACTIONS(92),
    [anon_sym_ssh] = ACTIONS(92),
    [anon_sym_stelnet] = ACTIONS(92),
    [anon_sym_protocol] = ACTIONS(92),
    [anon_sym_inbound] = ACTIONS(92),
    [anon_sym_user_DASHinterface] = ACTIONS(92),
    [anon_sym_authentication] = ACTIONS(92),
    [anon_sym_idle_DASHtimeout] = ACTIONS(92),
    [anon_sym_service_DASHtype] = ACTIONS(92),
    [anon_sym_level] = ACTIONS(92),
    [anon_sym_state] = ACTIONS(92),
    [anon_sym_password] = ACTIONS(92),
    [anon_sym_header] = ACTIONS(92),
    [anon_sym_banner] = ACTIONS(92),
    [anon_sym_time_DASHrange] = ACTIONS(92),
    [anon_sym_set] = ACTIONS(92),
    [anon_sym_permit] = ACTIONS(92),
    [anon_sym_deny] = ACTIONS(92),
    [anon_sym_dfs_DASHgroup] = ACTIONS(92),
    [anon_sym_m_DASHlag] = ACTIONS(92),
    [anon_sym_link_DASHtype] = ACTIONS(92),
    [anon_sym_trunk] = ACTIONS(92),
    [anon_sym_access] = ACTIONS(92),
    [anon_sym_hybrid] = ACTIONS(92),
    [anon_sym_allow_DASHpass] = ACTIONS(92),
    [anon_sym_default] = ACTIONS(92),
    [anon_sym_route_DASHstatic] = ACTIONS(92),
    [anon_sym_ipv6] = ACTIONS(92),
    [anon_sym_ip_DASHprefix] = ACTIONS(92),
    [anon_sym_export_DASHextcommunity] = ACTIONS(92),
    [anon_sym_import_DASHextcommunity] = ACTIONS(92),
    [anon_sym_binding] = ACTIONS(92),
    [anon_sym_irf] = ACTIONS(92),
    [anon_sym_member] = ACTIONS(92),
    [aux_sym_keyword_token1] = ACTIONS(92),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_blank_line_token1] = ACTIONS(94),
    [aux_sym_blank_line_token2] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_interface] = ACTIONS(96),
    [anon_sym_sysname] = ACTIONS(96),
    [anon_sym_system_DASHview] = ACTIONS(96),
    [anon_sym_quit] = ACTIONS(96),
    [anon_sym_return] = ACTIONS(96),
    [anon_sym_save] = ACTIONS(96),
    [anon_sym_reboot] = ACTIONS(96),
    [anon_sym_commit] = ACTIONS(96),
    [anon_sym_rollback] = ACTIONS(96),
    [anon_sym_display] = ACTIONS(96),
    [anon_sym_disp] = ACTIONS(96),
    [anon_sym_vlan] = ACTIONS(96),
    [anon_sym_vlanif] = ACTIONS(96),
    [anon_sym_batch] = ACTIONS(96),
    [anon_sym_description] = ACTIONS(96),
    [anon_sym_ip] = ACTIONS(96),
    [anon_sym_port] = ACTIONS(96),
    [anon_sym_undo] = ACTIONS(96),
    [anon_sym_shutdown] = ACTIONS(96),
    [anon_sym_shut] = ACTIONS(96),
    [anon_sym_aaa] = ACTIONS(96),
    [anon_sym_local_DASHuser] = ACTIONS(96),
    [anon_sym_authentication_DASHmode] = ACTIONS(96),
    [anon_sym_authorization_DASHmode] = ACTIONS(96),
    [anon_sym_vpn_DASHinstance] = ACTIONS(96),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(96),
    [anon_sym_vpn_DASHtarget] = ACTIONS(96),
    [anon_sym_ospf] = ACTIONS(96),
    [anon_sym_bgp] = ACTIONS(96),
    [anon_sym_isis] = ACTIONS(96),
    [anon_sym_rip] = ACTIONS(96),
    [anon_sym_area] = ACTIONS(96),
    [anon_sym_network] = ACTIONS(96),
    [anon_sym_route_DASHpolicy] = ACTIONS(96),
    [anon_sym_bfd] = ACTIONS(96),
    [anon_sym_discriminator] = ACTIONS(96),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(96),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(96),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(96),
    [anon_sym_acl] = ACTIONS(96),
    [anon_sym_traffic] = ACTIONS(96),
    [anon_sym_classifier] = ACTIONS(96),
    [anon_sym_behavior] = ACTIONS(96),
    [anon_sym_policy] = ACTIONS(96),
    [anon_sym_stp] = ACTIONS(96),
    [anon_sym_rstp] = ACTIONS(96),
    [anon_sym_mstp] = ACTIONS(96),
    [anon_sym_vrrp] = ACTIONS(96),
    [anon_sym_vrid] = ACTIONS(96),
    [anon_sym_virtual_DASHip] = ACTIONS(96),
    [anon_sym_priority] = ACTIONS(96),
    [anon_sym_eth_DASHtrunk] = ACTIONS(96),
    [anon_sym_mode] = ACTIONS(96),
    [anon_sym_lacp] = ACTIONS(96),
    [anon_sym_lldp] = ACTIONS(96),
    [anon_sym_snmp_DASHagent] = ACTIONS(96),
    [anon_sym_ntp_DASHservice] = ACTIONS(96),
    [anon_sym_ntp_DASHserver] = ACTIONS(96),
    [anon_sym_dhcp] = ACTIONS(96),
    [anon_sym_ip_DASHpool] = ACTIONS(96),
    [anon_sym_stack] = ACTIONS(96),
    [anon_sym_css] = ACTIONS(96),
    [anon_sym_mirror] = ACTIONS(96),
    [anon_sym_observe_DASHport] = ACTIONS(96),
    [anon_sym_ssh] = ACTIONS(96),
    [anon_sym_stelnet] = ACTIONS(96),
    [anon_sym_protocol] = ACTIONS(96),
    [anon_sym_inbound] = ACTIONS(96),
    [anon_sym_user_DASHinterface] = ACTIONS(96),
    [anon_sym_authentication] = ACTIONS(96),
    [anon_sym_idle_DASHtimeout] = ACTIONS(96),
    [anon_sym_service_DASHtype] = ACTIONS(96),
    [anon_sym_level] = ACTIONS(96),
    [anon_sym_state] = ACTIONS(96),
    [anon_sym_password] = ACTIONS(96),
    [anon_sym_header] = ACTIONS(96),
    [anon_sym_banner] = ACTIONS(96),
    [anon_sym_time_DASHrange] = ACTIONS(96),
    [anon_sym_set] = ACTIONS(96),
    [anon_sym_permit] = ACTIONS(96),
    [anon_sym_deny] = ACTIONS(96),
    [anon_sym_dfs_DASHgroup] = ACTIONS(96),
    [anon_sym_m_DASHlag] = ACTIONS(96),
    [anon_sym_link_DASHtype] = ACTIONS(96),
    [anon_sym_trunk] = ACTIONS(96),
    [anon_sym_access] = ACTIONS(96),
    [anon_sym_hybrid] = ACTIONS(96),
    [anon_sym_allow_DASHpass] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_route_DASHstatic] = ACTIONS(96),
    [anon_sym_ipv6] = ACTIONS(96),
    [anon_sym_ip_DASHprefix] = ACTIONS(96),
    [anon_sym_export_DASHextcommunity] = ACTIONS(96),
    [anon_sym_import_DASHextcommunity] = ACTIONS(96),
    [anon_sym_binding] = ACTIONS(96),
    [anon_sym_irf] = ACTIONS(96),
    [anon_sym_member] = ACTIONS(96),
    [aux_sym_keyword_token1] = ACTIONS(96),
  },
  [20] = {
    [sym_keyword] = STATE(33),
    [aux_sym_blank_line_token2] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(100),
    [anon_sym_interface] = ACTIONS(102),
    [anon_sym_sysname] = ACTIONS(13),
    [anon_sym_system_DASHview] = ACTIONS(13),
    [anon_sym_quit] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_reboot] = ACTIONS(13),
    [anon_sym_commit] = ACTIONS(13),
    [anon_sym_rollback] = ACTIONS(13),
    [anon_sym_display] = ACTIONS(13),
    [anon_sym_disp] = ACTIONS(13),
    [anon_sym_vlan] = ACTIONS(13),
    [anon_sym_vlanif] = ACTIONS(13),
    [anon_sym_batch] = ACTIONS(13),
    [anon_sym_description] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(13),
    [anon_sym_port] = ACTIONS(13),
    [anon_sym_undo] = ACTIONS(13),
    [anon_sym_shutdown] = ACTIONS(13),
    [anon_sym_shut] = ACTIONS(13),
    [anon_sym_aaa] = ACTIONS(13),
    [anon_sym_local_DASHuser] = ACTIONS(13),
    [anon_sym_authentication_DASHmode] = ACTIONS(13),
    [anon_sym_authorization_DASHmode] = ACTIONS(13),
    [anon_sym_vpn_DASHinstance] = ACTIONS(13),
    [anon_sym_route_DASHdistinguisher] = ACTIONS(13),
    [anon_sym_vpn_DASHtarget] = ACTIONS(13),
    [anon_sym_ospf] = ACTIONS(13),
    [anon_sym_bgp] = ACTIONS(13),
    [anon_sym_isis] = ACTIONS(13),
    [anon_sym_rip] = ACTIONS(13),
    [anon_sym_area] = ACTIONS(13),
    [anon_sym_network] = ACTIONS(13),
    [anon_sym_route_DASHpolicy] = ACTIONS(13),
    [anon_sym_bfd] = ACTIONS(13),
    [anon_sym_discriminator] = ACTIONS(13),
    [anon_sym_min_DASHtx_DASHinterval] = ACTIONS(13),
    [anon_sym_min_DASHrx_DASHinterval] = ACTIONS(13),
    [anon_sym_detect_DASHmultiplier] = ACTIONS(13),
    [anon_sym_acl] = ACTIONS(13),
    [anon_sym_traffic] = ACTIONS(13),
    [anon_sym_classifier] = ACTIONS(13),
    [anon_sym_behavior] = ACTIONS(13),
    [anon_sym_policy] = ACTIONS(13),
    [anon_sym_stp] = ACTIONS(13),
    [anon_sym_rstp] = ACTIONS(13),
    [anon_sym_mstp] = ACTIONS(13),
    [anon_sym_vrrp] = ACTIONS(13),
    [anon_sym_vrid] = ACTIONS(13),
    [anon_sym_virtual_DASHip] = ACTIONS(13),
    [anon_sym_priority] = ACTIONS(13),
    [anon_sym_eth_DASHtrunk] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(13),
    [anon_sym_lacp] = ACTIONS(13),
    [anon_sym_lldp] = ACTIONS(13),
    [anon_sym_snmp_DASHagent] = ACTIONS(13),
    [anon_sym_ntp_DASHservice] = ACTIONS(13),
    [anon_sym_ntp_DASHserver] = ACTIONS(13),
    [anon_sym_dhcp] = ACTIONS(13),
    [anon_sym_ip_DASHpool] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_css] = ACTIONS(13),
    [anon_sym_mirror] = ACTIONS(13),
    [anon_sym_observe_DASHport] = ACTIONS(13),
    [anon_sym_ssh] = ACTIONS(13),
    [anon_sym_stelnet] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_inbound] = ACTIONS(13),
    [anon_sym_user_DASHinterface] = ACTIONS(13),
    [anon_sym_authentication] = ACTIONS(13),
    [anon_sym_idle_DASHtimeout] = ACTIONS(13),
    [anon_sym_service_DASHtype] = ACTIONS(13),
    [anon_sym_level] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_header] = ACTIONS(13),
    [anon_sym_banner] = ACTIONS(13),
    [anon_sym_time_DASHrange] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_permit] = ACTIONS(13),
    [anon_sym_deny] = ACTIONS(13),
    [anon_sym_dfs_DASHgroup] = ACTIONS(13),
    [anon_sym_m_DASHlag] = ACTIONS(13),
    [anon_sym_link_DASHtype] = ACTIONS(13),
    [anon_sym_trunk] = ACTIONS(13),
    [anon_sym_access] = ACTIONS(13),
    [anon_sym_hybrid] = ACTIONS(13),
    [anon_sym_allow_DASHpass] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_route_DASHstatic] = ACTIONS(13),
    [anon_sym_ipv6] = ACTIONS(13),
    [anon_sym_ip_DASHprefix] = ACTIONS(13),
    [anon_sym_export_DASHextcommunity] = ACTIONS(13),
    [anon_sym_import_DASHextcommunity] = ACTIONS(13),
    [anon_sym_binding] = ACTIONS(13),
    [anon_sym_irf] = ACTIONS(13),
    [anon_sym_member] = ACTIONS(13),
    [aux_sym_keyword_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(104), 1,
      aux_sym_blank_line_token2,
    STATE(27), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(106), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [14] = 3,
    ACTIONS(108), 1,
      aux_sym_blank_line_token2,
    STATE(26), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(110), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [28] = 3,
    ACTIONS(112), 1,
      aux_sym_blank_line_token2,
    STATE(26), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(110), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [42] = 3,
    ACTIONS(114), 1,
      aux_sym_blank_line_token2,
    STATE(28), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(116), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [56] = 3,
    ACTIONS(118), 1,
      aux_sym_blank_line_token2,
    STATE(22), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(120), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [70] = 3,
    ACTIONS(122), 1,
      aux_sym_blank_line_token2,
    STATE(26), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(124), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [84] = 3,
    ACTIONS(127), 1,
      aux_sym_blank_line_token2,
    STATE(26), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(110), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [98] = 3,
    ACTIONS(129), 1,
      aux_sym_blank_line_token2,
    STATE(26), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(110), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [112] = 3,
    ACTIONS(131), 1,
      aux_sym_blank_line_token2,
    STATE(23), 1,
      aux_sym_cmd_interface_repeat1,
    ACTIONS(133), 5,
      aux_sym_cmd_interface_token1,
      sym_ip_address,
      sym_ip_address_slash,
      sym_number,
      sym_quoted_string,
  [126] = 2,
    ACTIONS(135), 1,
      aux_sym_blank_line_token1,
    ACTIONS(137), 1,
      aux_sym_blank_line_token2,
  [133] = 2,
    ACTIONS(139), 1,
      aux_sym_blank_line_token1,
    ACTIONS(141), 1,
      aux_sym_blank_line_token2,
  [140] = 2,
    ACTIONS(143), 1,
      aux_sym_blank_line_token1,
    ACTIONS(145), 1,
      aux_sym_blank_line_token2,
  [147] = 2,
    ACTIONS(147), 1,
      aux_sym_blank_line_token1,
    ACTIONS(149), 1,
      aux_sym_blank_line_token2,
  [154] = 2,
    ACTIONS(151), 1,
      aux_sym_blank_line_token1,
    ACTIONS(153), 1,
      aux_sym_blank_line_token2,
  [161] = 1,
    ACTIONS(155), 1,
      aux_sym_comment_token1,
  [165] = 1,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
  [169] = 1,
    ACTIONS(159), 1,
      aux_sym_blank_line_token1,
  [173] = 1,
    ACTIONS(161), 1,
      aux_sym_blank_line_token1,
  [177] = 1,
    ACTIONS(163), 1,
      sym_interface_name,
  [181] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(167), 1,
      aux_sym_blank_line_token2,
  [189] = 1,
    ACTIONS(169), 1,
      aux_sym_blank_line_token2,
  [193] = 1,
    ACTIONS(171), 1,
      sym_interface_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 14,
  [SMALL_STATE(23)] = 28,
  [SMALL_STATE(24)] = 42,
  [SMALL_STATE(25)] = 56,
  [SMALL_STATE(26)] = 70,
  [SMALL_STATE(27)] = 84,
  [SMALL_STATE(28)] = 98,
  [SMALL_STATE(29)] = 112,
  [SMALL_STATE(30)] = 126,
  [SMALL_STATE(31)] = 133,
  [SMALL_STATE(32)] = 140,
  [SMALL_STATE(33)] = 147,
  [SMALL_STATE(34)] = 154,
  [SMALL_STATE(35)] = 161,
  [SMALL_STATE(36)] = 165,
  [SMALL_STATE(37)] = 169,
  [SMALL_STATE(38)] = 173,
  [SMALL_STATE(39)] = 177,
  [SMALL_STATE(40)] = 181,
  [SMALL_STATE(41)] = 185,
  [SMALL_STATE(42)] = 189,
  [SMALL_STATE(43)] = 193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_generic, 3, 0, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_generic, 3, 0, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_generic, 2, 0, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_generic, 2, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_generic, 3, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_generic, 3, 0, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_generic, 4, 0, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_generic, 4, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_generic, 4, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_generic, 4, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_interface, 4, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_interface, 4, 0, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_interface, 5, 0, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_interface, 5, 0, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_generic, 5, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_generic, 5, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_interface, 5, 0, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_interface, 5, 0, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_interface, 6, 0, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_interface, 6, 0, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_interface, 6, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_interface, 6, 0, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_interface, 7, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_interface, 7, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_interface_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_interface_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vrp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
