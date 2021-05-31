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
        if (rank <= 19 && rank >= 0)
        {
            if (i >= 40 && i <= 59)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 40);
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
            else if (i >= 80 && i <= 99)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 80 + 20);
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 80);
            }
        }
        else if (rank <= 39 && rank >= 20)
        {
            if (i >= 120 && i <= 139)
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 120);
            }
        }
        else if (rank <= 59 && rank >= 40)
        {
            if (i >= 0 && i <= 19)
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * i;
            }
            else if (i >= 100 && i <= 119)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 100);
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
            else if (i >= 120 && i <= 139)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 120 + 20);
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
        }
        else if (rank <= 79 && rank >= 60)
        {
            if (i >= 120 && i <= 139)
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 120);
            }
        }
        else if (rank <= 99 && rank >= 80)
        {
            if (i >= 140 && i <= 159)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 140);
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
            else if (i >= 0 && i <= 19)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i + 20);
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * i;
            }
        }
        else if (rank <= 119 && rank >= 100)
        {
            if (i >= 40 && i <= 59)
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 40);
            }
        }
        else if (rank <= 139 && rank >= 120)
        {
            if (i >= 20 && i <= 39)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 20);
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
            else if (i >= 60 && i <= 79)
            {
                SendCount[i] = MB_INT;
                SendDisp[i] = MB_INT * (i - 60 + 20);
                ReceiveCount[i] = 0;
                ReceiveDisp[i] = 0;
            }
            else if (i >= 40 && i <= 59)
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 40);
            }
        }
        else if (rank <= 159 && rank >= 140)
        {
            if (i >= 80 && i <= 99)
            {
                SendCount[i] = 0;
                SendDisp[i] = 0;
                ReceiveCount[i] = MB_INT;
                ReceiveDisp[i] = MB_INT * (i - 80);
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
