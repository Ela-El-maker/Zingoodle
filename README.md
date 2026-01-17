# Zingoodle

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/Ela-El-maker/Zingoodle)
[![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)](https://github.com/Ela-El-maker/Zingoodle/blob/main/CONTRIBUTING.md)


> A personal systems laboratory for mastering Data Structures & Algorithms and low-level systems programming from first principles.

## Overview

Zingoodle is a comprehensive learning repository dedicated to deep systems thinking. It serves as a structured environment for building fundamental computer science knowledge through hands-on implementation and experimentation.

### Core Domains

#### Data Structures & Algorithms (DSA)

Clean, well-documented implementations of core data structures and algorithms, focusing on:

- Algorithmic intuition and computational reasoning
- Correctness under constraints
- Performance analysis and optimization

#### Low-Level Systems Programming

Multiple isolated systems built from the ground up, each exploring fundamental concepts:

- Memory management and allocation
- Concurrency and scheduling
- I/O operations and device handling
- Filesystem fundamentals
- Networking protocols
- Kernel-like subsystems
- Security and isolation

## Philosophy

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

## Contact

