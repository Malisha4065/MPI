#include "mpi.h"
#include <stdio.h>

int main(argc, argv)
int argc;
char **argv;    // char *argv[] is same?
{
    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    printf("Hello, world! I am process %d of %d.\n", rank, size);
    MPI_Finalize();
    return 0;
}
