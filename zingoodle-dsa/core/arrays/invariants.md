# Invariants for Arrays

## Structural Invariants

- Contiguous memory allocation
- Fixed size after creation
- Elements stored sequentially
- No gaps between elements

## Access Invariants

- O(1) random access via index
- Index bounds: 0 ≤ index < size
- Invalid index access results in error

## Performance Invariants

- Insertion at end: O(1) amortized
- Insertion/deletion in middle: O(n)
- Search: O(n) linear, O(log n) if sorted
- Space overhead: O(1) (no extra pointers)

## Failure Modes

- Buffer overflow on out-of-bounds access
- Memory waste if underutilized
- Inefficient for frequent insertions/deletions
