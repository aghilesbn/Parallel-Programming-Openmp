# OpenMP Hello World

This is a simple OpenMP program written in C to demonstrate the basics of parallel programming with threads.

## Description

The program prints "Hello" messages from multiple threads. It illustrates:

- How to create a parallel region using OpenMP
- How to retrieve thread IDs
- How to determine the total number of threads
- How threads execute concurrently

## Source File

`hello_world.c` contains the program code with comments explaining each part.

## Requirements

- C compiler with OpenMP support (GCC recommended)
- OpenMP enabled during compilation (`-fopenmp` flag)

## Compilation

```bash
gcc -fopenmp hello_world.c -o hello_world
