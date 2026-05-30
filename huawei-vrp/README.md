# Huawei VRP Syntax for Zed

Huawei VRP CLI configuration syntax highlighting extension for Zed Editor.

## Features

- 40+ VRP keywords with semantic coloring
- Interface name highlighting
- IP address / CIDR notation
- Comment highlighting (`#`-prefixed)
- Display command recognition
- EverEdit-inspired classic white-background theme

## Install

### Option A: From .wasm (recommended)

```powershell
# 1. Build the grammar (in tree-sitter-vrp/)
cd tree-sitter-vrp
npm install
npx tree-sitter generate
npx tree-sitter build --wasm

# 2. Copy to Zed extensions
$extDir = "$env:LOCALAPPDATA\Zed\extensions\installed\huawei-vrp"
Copy-Item -Recurse ..\huawei-vrp\* $extDir
Copy-Item tree-sitter-vrp.wasm $extDir\grammars\vrp.wasm
```

### Option B: From Git (auto-download)

In `extension.toml`, keep the `[grammars.vrp]` section pointing to the GitHub repo.
Zed will automatically fetch and compile the grammar.

## Theme

Copy `assets/theme_everedit.json` into your Zed `settings.json` for EverEdit-style highlighting:

| Element | Color | Style |
|---------|-------|-------|
| Keywords | Dark Blue `#0033B3` | **Bold** |
| Interface names | Dark Green `#006622` | **Bold** |
| IP addresses | Dark Red `#991111` | Normal |
| Comments | Gray `#8A8A8A` | *Italic* |
| Display commands | Purple `#660099` | *Italic* |
| Errors (reboot/commit) | Red `#CC0000` | **Bold** |
| undo/shutdown/deny | Orange `#AA4400` | **Bold** |

## File Association

By default, `.vrp` and `.cfg` files use this grammar.
For `.txt` files, add to `settings.json`:

```json
"file_types": {
  "Huawei VRP": ["txt"]
}
```

## Credits

Based on [kirylx/vscode-huawei-vrp-helper](https://github.com/kirylx/vscode-huawei-vrp-helper) (MIT).
