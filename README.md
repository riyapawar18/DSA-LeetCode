# DSA-LeetCode

C++ solutions to LeetCode problems, organized one folder per problem. Each folder contains the problem statement/notes (`README.md`) and a class-based solution (`*.cpp`).

**89 solutions published** here as part of **200+ LeetCode problems solved** in C++.

## Structure

```text
DSA-LeetCode/
├── 1-two-sum/
│   ├── README.md          # problem statement and examples
│   └── two-sum.cpp        # class Solution implementation
├── 100-same-tree/
│   ├── README.md
│   └── same-tree.cpp
└── ...
```

Folders are named with the LeetCode problem number and slug, so they sort numerically.

## Topics

The published set covers:

- Arrays, strings, and hashing
- Two pointers and sliding window
- Linked lists, stacks, and queues
- Binary trees and binary search trees
- Binary search
- Recursion and backtracking-style traversal

## Compile check

The solutions define `class Solution` and are not standalone executables. Use a syntax-only compile to verify a file:

```bash
g++ -std=c++17 -fsyntax-only 1-two-sum/two-sum.cpp
```

To run a solution locally, add a temporary `main()` that builds the input and calls the method; keep that harness out of the committed file unless the problem needs one.

## Notes

- Problem statements in each `README.md` are exported from LeetCode; the solution files are my implementations.
- The repository is a record of practice, not a library. Signatures follow LeetCode's expected interface.
- No license is specified. Ask before reusing the content.
