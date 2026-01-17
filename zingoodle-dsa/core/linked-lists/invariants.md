# Invariants for Linked Lists

## Structural Invariants

- Dynamic size, grows/shrinks as needed
- Nodes connected via pointers
- Each node contains data + next pointer
- Singly-linked: one-way traversal

## Access Invariants

- O(n) sequential access
- No random access by index
- Must traverse from head to reach position

## Performance Invariants

- Insertion/deletion at ends: O(1)
- Insertion/deletion in middle: O(n) to find position
- Search: O(n)
- Space overhead: O(n) (one pointer per node)

## Failure Modes

- Memory leaks if pointers not managed
- Dangling pointers on improper deletion
- Cycle creation if not careful
- Stack overflow on deep recursion
