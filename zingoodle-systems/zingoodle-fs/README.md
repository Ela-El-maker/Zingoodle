# Zingoodle FS

## Purpose

Implements a basic filesystem from scratch, handling file storage, retrieval, and organization.

## Question Answered

How can we store and retrieve data persistently on disk while maintaining integrity and efficiency?

## Invariants

- Data integrity: writes are atomic
- No data loss on crashes
- File metadata consistency
- Directory structure maintained
- Permissions enforced
- Concurrent access safe

## Non-Goals

- Distributed filesystems
- Advanced features like snapshots or encryption
- Network file sharing
- Hardware RAID management

## Failure Modes

- Data corruption from power loss
- Inconsistent state after crashes
- Performance degradation from fragmentation
- Security vulnerabilities in access control
