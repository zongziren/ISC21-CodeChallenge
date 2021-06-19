FORMAT_VERSION: 9

stack trace for /gpfs/fs0/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zhengyufei/WRF/WRF_ISC21_mkl/main/wrf.exe pid=241478

# Trace

/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zsr/ISC21-CodeChallenge/task2/collective_profiler-ISC21_cc_v1/src/alltoallv/liballtoallv_backtrace.so(_mpi_alltoallv+0xd4) [0x2b34a01cfc10]
/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zsr/ISC21-CodeChallenge/task2/collective_profiler-ISC21_cc_v1/src/alltoallv/liballtoallv_backtrace.so(MPI_Alltoallv+0x7d) [0x2b34a01d0074]
./wrf.exe() [0x2f2bb4b]
./wrf.exe() [0x7cdfd8]
./wrf.exe() [0x1521b14]
./wrf.exe() [0x4dd891]
./wrf.exe() [0x4dd580]
./wrf.exe() [0x41a171]
./wrf.exe() [0x41a11e]
./wrf.exe() [0x41a092]
/lib64/libc.so.6(__libc_start_main+0xf5) [0x2b34a1e93555]
./wrf.exe() [0x419fa9]

# Context 0

Communicator: 0
Communicator rank: 0
COMM_WORLD rank: 0
Calls: 963

