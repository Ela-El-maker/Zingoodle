# Zingoodle Build System
# Basic Makefile for building systems

CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -std=c11 -g -O0
CXXFLAGS = -Wall -Wextra -std=c++11 -g -O0

# Default target
all: help

# Help target
help:
	@echo "Zingoodle Build System"
	@echo ""
	@echo "Available targets:"
	@echo "  dsa         - Build DSA implementations"
	@echo "  systems     - Build all systems"
	@echo "  memory      - Build memory system"
	@echo "  scheduler   - Build scheduler system"
	@echo "  clean       - Clean build artifacts"
	@echo "  test        - Run tests (when implemented)"
	@echo ""
	@echo "Example: make memory"

# DSA builds
dsa: dsa-core

dsa-core: arrays linked-lists

arrays:
	@echo "Building arrays..."
	$(CC) $(CFLAGS) -I. zingoodle-dsa/core/arrays/array.c zingoodle-dsa/core/arrays/test_array.c -o build/test_array
	@echo "Running array tests..."
	./build/test_array

linked-lists:
	@echo "Building linked lists..."
	# Add compilation commands here when code exists

# Systems builds
systems: memory scheduler

memory:
	@echo "Building zingoodle-memory..."
	$(CC) $(CFLAGS) -I. zingoodle-systems/zingoodle-memory/memory.c zingoodle-systems/zingoodle-memory/test_memory.c -o build/test_memory
	@echo "Running memory tests..."
	./build/test_memory

scheduler:
	@echo "Building zingoodle-scheduler..."
	# Add compilation commands here when code exists

# Testing
test:
	@echo "Running tests..."
	# Add test commands here when tests exist

# Clean
clean:
	@echo "Cleaning build artifacts..."
	find . -name "*.o" -delete
	find . -name "*.exe" -delete
	find . -name "*.out" -delete
	rm -rf build/

.PHONY: all help dsa dsa-core arrays linked-lists systems memory scheduler test clean