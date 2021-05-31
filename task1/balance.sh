#!/bin/bash
#SBATCH --nodes=4
#SBATCH --ntasks-per-node=40
#SBATCH --time=1:00:00
#SBATCH --job-name=zsr_code_challenge_task1_balance
#SBATCH --output=out/balance_sbatch.txt
#SBATCH --mail-type=FAIL

cd $SCRATCH/zsr/ISC21-CodeChallenge/task1

module load NiaEnv/2019b
module load intel/2019u4
module load openmpi/4.0.1

mpirun -n 160 ./balance
