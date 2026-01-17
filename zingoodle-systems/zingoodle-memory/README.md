# Zingoodle Memory

## Purpose

Implements a custom memory allocator from first principles, managing dynamic memory allocation and deallocation.

## Question Answered

How can we allocate and deallocate memory dynamically while ensuring safety, efficiency, and preventing leaks?

## Invariants

- Allocated memory is valid and accessible
- No overlapping allocations
- Memory bounds are respected
- Deallocation frees memory completely
- No double-free errors
- No use-after-free
- Bounds checking on all accesses

## Non-Goals

- Virtual memory management
- Garbage collection
- Multi-process memory sharing
- Hardware-specific optimizations

## Failure Modes

- Out of memory conditions
- Fragmentation leading to unusable space
- Memory leaks from forgotten deallocations
- Corruption from buffer overflows
