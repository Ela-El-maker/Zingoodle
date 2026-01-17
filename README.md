# Zingoodle

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/Ela-El-maker/Zingoodle)
[![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)](https://github.com/Ela-El-maker/Zingoodle/blob/main/CONTRIBUTING.md)

> A personal systems laboratory for mastering Data Structures & Algorithms and low-level systems programming from first principles.

## 🌟 Overview

Zingoodle is a comprehensive learning repository dedicated to deep systems thinking. It serves as a structured environment for building fundamental computer science knowledge through hands-on implementation and experimentation.

### Core Domains

#### 🧠 Data Structures & Algorithms (DSA)

Clean, well-documented implementations of core data structures and algorithms, focusing on:

- Algorithmic intuition and computational reasoning
- Correctness under constraints
- Performance analysis and optimization

#### 🧩 Low-Level Systems Programming

Multiple isolated systems built from the ground up, each exploring fundamental concepts:

- Memory management and allocation
- Concurrency and scheduling
- I/O operations and device handling
- Filesystem fundamentals
- Networking protocols
- Kernel-like subsystems
- Security and isolation

## 🎯 Philosophy

Zingoodle follows strict principles for long-term learning:

- **First Principles**: Everything built from scratch, no black boxes
- **Invariants First**: System constraints documented before implementation
- **Build → Break → Document**: Learn through failure and analysis
- **One Question Per System**: Focused, atomic explorations
- **Clarity Over Performance**: Prioritize understanding and correctness

## 📁 Project Structure

```
Zingoodle/
├── zingoodle-dsa/          # Data Structures & Algorithms
│   ├── core/               # Fundamental data structures
│   ├── problems/           # Problem-solving exercises
│   └── notes/              # Analysis and observations
├── zingoodle-systems/      # Low-level systems implementations
│   ├── zingoodle-memory/   # Custom memory allocator
│   ├── zingoodle-scheduler/# Task scheduler
│   ├── zingoodle-fs/       # Filesystem implementation
│   └── ...                 # Other systems
├── experiments/            # Scratch space for prototyping
├── docs/                   # Documentation and invariants
└── README.md
```

## 🚀 Getting Started

### Prerequisites

- Basic programming knowledge
- Curiosity about systems internals
- Willingness to build from first principles

### Setup

1. Clone the repository:

   ```bash
   git clone https://github.com/Ela-El-maker/Zingoodle.git
   cd Zingoodle
   ```

2. Explore the domains:
   - Start with `zingoodle-dsa/core/` for fundamental data structures
   - Move to `zingoodle-systems/` for system implementations

3. Read the doctrine:
   - See `docs/architecture/zingoodle-doctrine.md` for complete guidelines

## 📚 Learning Path

1. **Foundation**: Study DSA implementations in `zingoodle-dsa/core/`
2. **Systems**: Build small systems in `zingoodle-systems/`
3. **Experiment**: Prototype ideas in `experiments/`
4. **Document**: Record findings in `docs/`

## 🛠️ Technologies & Languages

- **Primary**: C, C++ (for systems programming)
- **Secondary**: Python, Rust (for certain implementations)
- **Focus**: Language-agnostic concepts and principles

## 🤝 Contributing

This is primarily a personal learning project, but insights and improvements are welcome:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Ensure invariants are maintained
5. Submit a pull request

## 📖 Documentation

- **[Doctrine](docs/architecture/zingoodle-doctrine.md)**: Complete project philosophy and rules
- **[Invariants](docs/invariants/)**: System constraints and guarantees
- **[Postmortems](docs/postmortems/)**: Lessons from failures

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📞 Contact

- **Author**: Ela-El-maker
- **Project Link**: [https://github.com/Ela-El-maker/Zingoodle](https://github.com/Ela-El-maker/Zingoodle)

---

_"Zingoodle names things by responsibility, builds systems from first principles, documents invariants before code, isolates experiments from truth, and treats understanding as the only real milestone."_

This is a **culture + doctrine**, not just a prompt.
Zingoodle is a long-term personal systems laboratory governed by strict naming, structure, and thinking rules.

This document defines:

1. The **core mission**
2. The **naming & structure convention**
3. The **cultural laws** that must be followed over time

---

## 1️⃣ Refined Core Project Prompt (Zingoodle)

> **Zingoodle** is a long-term personal learning repository focused on mastering **Data Structures & Algorithms (DSA)** and **low-level systems programming** from first principles.
>
> The repository is organized into two core domains:
>
> **Data Structures & Algorithms** — clean, well-documented implementations, problem-solving exercises, and optimizations aimed at strengthening algorithmic intuition, computational reasoning, and correctness under constraints.
>
> **Low-Level Systems** — multiple systems built from the ground up (not a single monolith), each exploring fundamental systems concepts such as memory management, concurrency, I/O, scheduling, isolation, and performance.
>
> Through building many small-to-medium systems and writing extensive DSA code, Zingoodle serves as a personal systems laboratory to develop deep systems thinking, first-principles reasoning, and disciplined problem-solving skills.

This is **README-grade**, **philosophy-complete**, and **future-you-proof**.

---

## 2️⃣ Zingoodle Project Naming & Structure Convention (Full)

### 1️⃣ Platform Root Name

**Name:** `Zingoodle`

**Rules:**

- Umbrella ecosystem / identity
- No suffixes, adjectives, or technologies
- Used as:
  - Repository root
  - Documentation namespace
  - Personal systems identity

> Think of **Zingoodle** as an operating system for your thinking, not an application.

---

### 2️⃣ Component Naming

**Pattern:**

```
zingoodle-<role>[-<scope>]
```

#### Rules

- Lowercase only
- Kebab-case
- **No technologies**
- **No adjectives**
- Name by **authority and responsibility**, never implementation details

---

### 3️⃣ Canonical Roles

#### 🧠 Data Structures & Algorithms

| Role Type  | Example                  | Meaning                         |
| ---------- | ------------------------ | ------------------------------- |
| Algorithms | `zingoodle-dsa`          | DSA domain root                 |
| Core       | `zingoodle-dsa-core`     | Fundamental data structures     |
| Problems   | `zingoodle-dsa-problems` | Problem-solving & exercises     |
| Analysis   | `zingoodle-dsa-notes`    | Reasoning, proofs, observations |

> Note: These are **logical roles**. Physically, they live _inside_ `zingoodle-dsa/`.

---

#### 🧩 Low-Level Systems (Core Subsystems)

Each system answers **one fundamental question**.

| Role Type   | Example               | Meaning                    |
| ----------- | --------------------- | -------------------------- |
| Execution   | `zingoodle-runtime`   | Minimal execution model    |
| Memory      | `zingoodle-memory`    | Allocators, paging, arenas |
| Concurrency | `zingoodle-scheduler` | Threads, tasks, coroutines |
| I/O         | `zingoodle-io`        | Files, sockets, device I/O |
| Storage     | `zingoodle-fs`        | Filesystem fundamentals    |
| Networking  | `zingoodle-net`       | TCP/UDP from scratch       |
| OS          | `zingoodle-kernel`    | Kernel-like subsystems     |
| Security    | `zingoodle-isolation` | Sandboxing, permissions    |

---

### 4️⃣ Scope Suffixes (Strictly Optional)

Used **only** to describe platform or environment.

| Scope     | Meaning          |
| --------- | ---------------- |
| linux     | Linux-specific   |
| windows   | Windows-specific |
| wasm      | WebAssembly      |
| baremetal | No host OS       |
| dev       | Development      |
| prod      | Production-grade |

**Examples**

```
zingoodle-scheduler-linux
zingoodle-runtime-baremetal
```

No other suffixes are allowed.

---

### 5️⃣ Repository / Folder Structure (Corrected)

**Root rule:**
The root contains **domains**, not individual systems.

```
Zingoodle/
├── zingoodle-dsa/
├── zingoodle-systems/
├── experiments/
├── docs/
└── README.md
```

#### Inside `zingoodle-systems/`

```
zingoodle-systems/
├── zingoodle-memory/
├── zingoodle-scheduler/
├── zingoodle-io/
├── zingoodle-runtime/
├── zingoodle-fs/
├── zingoodle-net/
├── zingoodle-kernel/
└── zingoodle-isolation/
```

> Systems live **under a single domain root**, not scattered at top-level.

No exceptions.

---

### 6️⃣ Binary / Executable Naming

**Pattern:**

```
<role>[-<scope>][-vX.Y.Z]
```

**Examples**

```
zingoodle-scheduler-v0.1.0
zingoodle-runtime-baremetal-v0.0.1.bin
```

Rules:

- Version only when meaningful
- Version numbers imply _semantic understanding_, not completeness

---

### 7️⃣ Spec / Protocol / Design Naming

**Pattern:**

```
zingoodle-<component>-<topic>-v<major>
```

**Examples**

```
zingoodle-memory-allocator-v1.md
zingoodle-scheduler-api-v1.json
zingoodle-fs-layout-v1.md
```

Rules:

- Version **only** specs and protocols
- Major version = breaking conceptual change
- Never version folders

---

### 8️⃣ Docs Structure

```
docs/
├── architecture/
├── specs/
├── invariants/
├── notes/
├── postmortems/
```

**Examples**

```
docs/architecture/zingoodle-overview.md
docs/invariants/zingoodle-memory.md
docs/specs/zingoodle-scheduler-api-v1.json
docs/postmortems/allocator-fragmentation.md
```

---

### 9️⃣ Experiments / Scratch Space

```
experiments/
├── array-resize-sim/
├── paging-sim/
├── scheduler-v0/
```

Rules:

- No guarantees
- No polish
- No permanence
- Promote to core **only after clarity**

Experiments are where confusion is allowed.

---

### 🔟 Versioning Rules

Version **only**:

- Protocols
- Specs
- Binaries

Never version:

- Folders
- Repo names
- Architecture docs
- Experiments

---

## 3️⃣ Cultural Laws (Non-Negotiable)

### 🧱 1. Invariants Over Features

Every system **must declare invariants before code**.

```
docs/invariants/zingoodle-memory.md
```

If you can’t write invariants, you do not yet understand the system.

---

### 🧠 2. First-Principles Rule

No abstraction is allowed unless:

- You can re-implement it
- You understand how it fails

---

### 🧪 3. Build → Break → Document

Every system must eventually include:

- A breaking case
- A failure analysis
- A written lesson

Stored in:

```
docs/postmortems/
```

---

### 🧭 4. One System = One Question

Each system answers **exactly one fundamental question**.

If it answers more than one → split it.

---

### 🪓 5. No Magic Rule

Every line of code must be classifiable as:

- Policy
- Mechanism
- Interface

Unclassifiable code is rewritten.

---

### 🧘 6. Longevity Mindset

Zingoodle is:

- Not optimized for speed
- Not optimized for hype
- Optimized for **clarity, correctness, and permanence**

You are writing this for **your future self**, not an audience.

---

## 4️⃣ Zingoodle Law (Final Doctrine)

> **Zingoodle names things by responsibility, builds systems from first principles, documents invariants before code, isolates experiments from truth, and treats understanding as the only real milestone.**

---

# Zingoodle
