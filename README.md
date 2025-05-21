# MPI Example Programs

This repository contains example C programs demonstrating various features of MPI (Message Passing Interface) for parallel and distributed computing.

## File Descriptions

- **hellompi.c**: Classic "Hello, world!" MPI program, each process prints its rank and total number of processes.
- **environmentmanageroutines.c**: Prints the number of tasks, rank, and processor name for each MPI process.
- **nonblockingmessage.c**: Example of non-blocking send and receive operations using `MPI_Isend` and `MPI_Irecv`.
- **blockingmessage.c**: Demonstrates point-to-point blocking send and receive between two MPI tasks.
- **collectivecomm.c**: Shows how to use collective communication (`MPI_Scatter`) to distribute data among processes.
- **group.c**: Demonstrates creating new MPI groups and communicators, and performing collective operations within them.
- **hostfile.txt**: Specifies host and slot information for running MPI programs.

---

## How to Compile

Make sure you have an MPI implementation installed (e.g., OpenMPI or MPICH).

To compile any of the C programs, use `mpicc`. For example:

```
mpicc -o collectivecomm collectivecomm.c
```

## How to Run

Run the compiled program with `mpirun` or `mpiexec`, specifying the number of processes. For example, to run `collectivecomm` with 4 processes:

```
mpirun -np 4 ./collectivecomm
```

**Note:**  
Some programs require a specific number of processes (e.g., `collectivecomm` requires 4). Check the source code or the descriptions above.

---

Each C file demonstrates a different aspect of MPI programming for educational purposes.