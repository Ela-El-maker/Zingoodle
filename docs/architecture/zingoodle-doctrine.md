# Zingoodle Doctrine

This document defines the culture, philosophy, and structure of Zingoodle.

## Core Mission

Zingoodle is a long-term personal learning repository focused on mastering Data Structures & Algorithms (DSA) and low-level systems programming from first principles.

The repository is organized into two core domains:

**Data Structures & Algorithms** — clean, well-documented implementations, problem-solving exercises, and optimizations aimed at strengthening algorithmic intuition, computational reasoning, and correctness under constraints.

**Low-Level Systems** — multiple systems built from the ground up (not a single monolith), each exploring fundamental systems concepts such as memory management, concurrency, I/O, scheduling, isolation, and performance.

Through building many small-to-medium systems and writing extensive DSA code, Zingoodle serves as a personal systems laboratory to develop deep systems thinking, first-principles reasoning, and disciplined problem-solving skills.

## Naming & Structure Convention

### Platform Root Name

**Name:** `Zingoodle`

**Rules:**

- Umbrella ecosystem / identity
- No suffixes, adjectives, or technologies
- Used as repository root, documentation namespace, personal systems identity

### Component Naming

**Pattern:** `zingoodle-<role>[-<scope>]`

**Rules:**

- Lowercase only
- Kebab-case
- No technologies or adjectives
- Name by authority and responsibility

### Canonical Roles

#### Data Structures & Algorithms

- `zingoodle-dsa`: DSA domain root
- `zingoodle-dsa-core`: Fundamental data structures
- `zingoodle-dsa-problems`: Problem-solving & exercises
- `zingoodle-dsa-notes`: Reasoning, proofs, observations

#### Low-Level Systems

- `zingoodle-runtime`: Minimal execution model
- `zingoodle-memory`: Allocators, paging, arenas
- `zingoodle-scheduler`: Threads, tasks, coroutines
- `zingoodle-io`: Files, sockets, device I/O
- `zingoodle-fs`: Filesystem fundamentals
- `zingoodle-net`: TCP/UDP from scratch
- `zingoodle-kernel`: Kernel-like subsystems
- `zingoodle-isolation`: Sandboxing, permissions

### Repository Structure

```
Zingoodle/
├── zingoodle-dsa/
├── zingoodle-systems/
├── experiments/
├── docs/
└── README.md
```

## Cultural Laws

### 1. Invariants Over Features

Every system must declare invariants before code. If you can't write invariants, you do not yet understand the system.

### 2. First-Principles Rule

No abstraction is allowed unless you can re-implement it and understand how it fails.

### 3. Build → Break → Document

Every system must eventually include a breaking case, failure analysis, and written lesson.

### 4. One System = One Question

Each system answers exactly one fundamental question. If it answers more than one → split it.

### 5. No Magic Rule

Every line of code must be classifiable as policy, mechanism, or interface. Unclassifiable code is rewritten.

### 6. Longevity Mindset

Zingoodle is optimized for clarity, correctness, and permanence. You are writing this for your future self.

## Zingoodle Law

Zingoodle names things by responsibility, builds systems from first principles, documents invariants before code, isolates experiments from truth, and treats understanding as the only real milestone.
