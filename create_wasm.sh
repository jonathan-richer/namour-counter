#!/usr/bin/env sh
emcc src/NamourCounter.cpp -s WASM=1 -o docs/index.html
