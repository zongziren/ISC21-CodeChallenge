FORMAT_VERSION: 9

stack trace for /gpfs/fs1/scinet/niagara/software/2019b/opt/base/python/3.8.5/bin/python3.8 pid=28829

# Trace

/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zsr/ISC21-CodeChallenge/task2/collective_profiler-ISC21_cc_v1/src/alltoallv/liballtoallv_backtrace.so(_mpi_alltoallv+0xd4) [0x2b0dcd0c3c10]
/scratch/l/lcl_uotiscscc/lcl_uotiscsccs1044/zsr/ISC21-CodeChallenge/task2/collective_profiler-ISC21_cc_v1/src/alltoallv/liballtoallv_backtrace.so(MPI_Alltoallv+0x7d) [0x2b0dcd0c4074]
/gpfs/fs1/home/l/lcl_uotiscscc/lcl_uotiscsccs1044/shaojiemike/github/gpaw21/gpaw_code/gpaw/../build/lib.linux-x86_64-3.8/_gpaw.cpython-38-x86_64-linux-gnu.so(+0x6f004) [0x2b0ddbe72004]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(+0x134d16) [0x2b0dcd963d16]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyEval_EvalFrameDefault+0x67a) [0x2b0dcd9d240a]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyFunction_Vectorcall+0xc1) [0x2b0dcd95e391]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyEval_EvalFrameDefault+0x67a) [0x2b0dcd9d240a]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyFunction_Vectorcall+0xc1) [0x2b0dcd95e391]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(PyVectorcall_Call+0x5d) [0x2b0dcd95f2fd]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyEval_EvalFrameDefault+0x2cd6) [0x2b0dcd9d4a66]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyEval_EvalCodeWithName+0x7bd) [0x2b0dcd9d164d]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyFunction_Vectorcall+0x155) [0x2b0dcd95e425]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(+0x131549) [0x2b0dcd960549]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyObject_FastCallDict+0x3ca) [0x2b0dcd95db0a]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(+0x23cf77) [0x2b0dcda6bf77]
/scinet/niagara/software/2019b/opt/base/python/3.8.5/lib/libpython3.8.so.1.0(_PyObject_MakeTpCall+0x84) [0x2b0dcd95dc84]

# Context 0

Communicator: 0
Communicator rank: 0
COMM_WORLD rank: 0
Calls: 0-35, 42-77, 84-119, 126-161, 168-203, 210-245, 252-287, 294-329, 336-371, 378-413

