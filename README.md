# tree-sitter-huawei-vrp

Tree-sitter grammar and Zed extension for Huawei VRP CLI configuration files.

## Structure

```
tree-sitter-huawei-vrp/
├── grammar.js              ← tree-sitter grammar
├── queries/highlights.scm  ← syntax highlighting rules
├── src/                    ← generated parser (parser.c, grammar.json)
├── test/corpus/            ← test cases
├── examples/               ← sample Huawei config files
├── huawei-vrp/             ← Zed extension (installable)
│   ├── extension.toml
│   ├── grammars/            ← .wasm goes here (CI generates)
│   ├── languages/vrp/
│   └── assets/theme_everedit.json
├── .github/workflows/      ← CI: build WASM on push/tag
└── package.json
```

## Install (Zed)

### Option A: Download Release

1. Download `huawei-vrp-extension.zip` from [Releases](https://github.com/hanako-dev/tree-sitter-huawei-vrp/releases)
2. Extract to `%LOCALAPPDATA%\Zed\extensions\installed\huawei-vrp\`
3. Restart Zed

### Option B: Build Locally

```powershell
npm install
npx tree-sitter generate
npx tree-sitter build --wasm
Copy-Item tree-sitter-vrp.wasm huawei-vrp/grammars/vrp.wasm
# Then copy huawei-vrp/ to Zed extensions directory
```

## Features

- 40+ VRP keywords with 7 semantic color groups
- Interface name / IP address / CIDR / number / string highlighting
- Comment support (`#`)
- Display command recognition
- EverEdit-inspired white-background theme

## File Association

By default: `.vrp`, `.cfg`

For `.txt` files, add to Zed `settings.json`:
```json
"file_types": { "Huawei VRP": ["txt"] }
```

## Credits

Based on [kirylx/vscode-huawei-vrp-helper](https://github.com/kirylx/vscode-huawei-vrp-helper) (MIT).

## License

MIT
