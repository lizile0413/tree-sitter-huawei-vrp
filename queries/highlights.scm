; Tree-sitter highlights for Huawei VRP CLI configuration files
; Based on TextMate scope mappings from kirylx/vscode-huawei-vrp-helper (MIT)

; === Comments ===
(comment) @comment

; === Interface declarations ===
(cmd_interface
  "interface" @keyword)

; === Generic command keywords ===
(cmd_generic
  keyword: (keyword) @keyword)

; === Semantic keyword overrides ===

; Critical/dangerous operations
((keyword) @keyword.exception
  (#match? @keyword.exception "^(reboot|commit|rollback|error|Error|Warning|warning)$"))

; Removal/denial operations
((keyword) @keyword.conditional
  (#match? @keyword.conditional "^(undo|shutdown|shut|deny)$"))

; Enable/grant operations
((keyword) @keyword.directive
  (#match? @keyword.directive "^(permit|allow-pass)$"))

; Display commands
((keyword) @constant.builtin
  (#match? @constant.builtin "^(display|disp)$"))

; === Identifiers ===
(interface_name) @type.interface

; === Literals ===
(ip_address) @constant.numeric
(ip_address_slash) @constant.numeric
(number) @number
(quoted_string) @string
