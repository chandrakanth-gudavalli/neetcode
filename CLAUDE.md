# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Overview

This is a NeetCode roadmap practice repository containing competitive programming solutions in C++. Problems are organized into topic folders following NeetCode's categorized problem set.

## Folder Convention

Folders follow the pattern `NN__topic_name/`, e.g.:
- `01__arrays_and_hashing/`
- `02__two_pointers/`
- `03__sliding_window/`

Each file within a folder is named after the problem, e.g., `contains_duplicate.cpp`.

## Building and Running Solutions

There is no build system. Each file is a standalone solution compiled individually:

```bash
# Compile a single solution
g++ -std=c++17 -O2 -o solution 01__arrays_and_hashing/contains_duplicate.cpp

# Run it
./solution
```

Solutions use LeetCode-style class/method signatures and typically require a `main()` function or test harness to run locally. Add one when needed for local testing.

## Code Style

- Language: C++17
- Solutions are written as `class Solution { public: ... };` matching LeetCode format
- STL headers (`<vector>`, `<unordered_set>`, etc.) should be included at the top when adding a runnable main
