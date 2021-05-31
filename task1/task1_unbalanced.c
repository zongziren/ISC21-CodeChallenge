#include <stdio.h>
#include "mpi.h"
#include "stdlib.h"
#define MB_INT 25400
int main(int argc, char **argv)
{
    const int nProcess = 160;
    int proc_nums, rank;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &proc_nums);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int SendBuf[MB_INT*40];
    int ReceiveBuf[MB_INT*40];

    int SendCount[nProcess];
    int SendDisp[nProcess];
    int ReceiveCount[nProcess];
    int ReceiveDisp[nProcess];

    int i;

    //set SendCount and SendDisp
    for (i = 0; i < nProcess; i++)
    {
        if (rank <= 39 && rank >= 0)
        {
            if (i >= 40 && i <= 79)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 40);
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 40);
            }
            //1MB=10^6 byte=25400*size(int)
            else
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
        }
        else if (rank <= 79 && rank >= 40)
        {
            if (i >= 0 && i <= 39)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * i;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * i;
            }
            //1MB=10^6 byte=25400*size(int)
            else
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
        }
        else
        {
            SendCount[i] = 0;
            SendDisp[i] = 0;
            ReceiveCount[i] = 0;
            ReceiveDisp[i] = 0;
        }
    }
    MPI_Alltoallv(SendBuf, SendCount, SendDisp, MPI_INT, ReceiveBuf, ReceiveCount, ReceiveDisp, MPI_INT, MPI_COMM_WORLD);
    MPI_Finalize();
    return 0;
}
