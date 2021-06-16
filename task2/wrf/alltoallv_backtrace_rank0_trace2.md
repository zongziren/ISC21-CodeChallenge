FORMAT_VERSION: 9

stack trace for /gpfs/fs0/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zhengyufei/WRF/WRF_ISC21_mkl/main/wrf.exe pid=75011

# Trace

/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zsr/ISC21-CodeChallenge/task2/collective_profiler-ISC21_cc_v1/src/alltoallv/liballtoallv_backtrace.so(_mpi_alltoallv+0xd4) [0x2b1754f9ec10]
/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zsr/ISC21-CodeChallenge/task2/collective_profiler-ISC21_cc_v1/src/alltoallv/liballtoallv_backtrace.so(MPI_Alltoallv+0x7d) [0x2b1754f9f074]
./wrf.exe() [0x2f2b823]
./wrf.exe() [0x6923d4]
./wrf.exe() [0x151dee6]
./wrf.exe() [0x101edbd]
./wrf.exe() [0x4dd69b]
./wrf.exe() [0x41a171]
./wrf.exe() [0x41a11e]
./wrf.exe() [0x41a092]
/lib64/libc.so.6(__libc_start_main+0xf5) [0x2b1756c62555]
./wrf.exe() [0x419fa9]

# Context 0

Communicator: 0
Communicator rank: 0
COMM_WORLD rank: 0
Calls: 2, 12, 20, 28, 36, 44, 52, 60, 68, 76, 84, 92, 100, 108, 116, 124, 132, 140, 148, 156, 164, 172, 180, 188, 196, 204, 212, 220, 228, 236, 244, 252, 260, 268, 276, 284, 292, 300, 308, 316, 324, 332, 340, 348, 356, 364, 372, 380, 388, 396, 404, 412, 420, 428, 436, 444, 452, 460, 468, 476, 484, 492, 500, 508, 516, 524, 532, 540, 548, 556, 564, 572, 580, 588, 596, 604, 612, 620, 628, 636, 644, 652, 660, 668, 676, 684, 692, 700, 708, 716, 724, 732, 740, 748, 756, 764, 772, 780, 788, 796, 804, 812, 820, 828, 836, 844, 852, 860, 868, 876, 884, 892, 900, 908, 916, 924, 932, 940, 948, 956

