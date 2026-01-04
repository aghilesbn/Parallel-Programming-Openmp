# OpenMP Shared Variable Problem

This program demonstrates a **race condition** when multiple threads update a shared variable in OpenMP without proper synchronization.

## Description

- `x` is a shared variable among all threads.
- Each thread increments `x` concurrently **without protection**.
- The final value of `x` is **unpredictable** and may vary each time the program runs.
- This illustrates the dangers of race conditions in parallel programming.

## Source File

`shared_x_problem.c` contains the program code with comments explaining the issue.

## Requirements

- C compiler with OpenMP support (GCC recommended)
- OpenMP enabled during compilation (`-fopenmp` flag)

## Compilation

```bash
gcc -fopenmp shared_x_problem.c -o shared_x_problem
