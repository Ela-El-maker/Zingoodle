# Zingoodle Scheduler

## Purpose

Implements a task scheduler for managing concurrent execution of tasks, threads, or coroutines.

## Question Answered

How can we schedule and manage multiple tasks to ensure fairness, efficiency, and progress?

## Invariants

- All tasks eventually execute
- Fairness: no starvation
- Priority respected when applicable
- Preemption works correctly
- No race conditions
- Mutual exclusion on shared resources
- Deadlock freedom

## Non-Goals

- Distributed scheduling
- Real-time guarantees beyond basic
- GPU or hardware acceleration scheduling
- Complex load balancing

## Failure Modes

- Priority inversion
- Deadlocks from circular waits
- Thrashing under overload
- Inefficient resource usage
