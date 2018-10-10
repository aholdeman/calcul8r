###Running MATLAB

MATLAB is a high-level language and interactive environment for numerical computation, visualization, and programming. Here is a demonstration of running MATLAB in batch mode.

1. Create a MATLAB script. This repository provides a simple script, matlabtest.m, which generates a matrix and performs Gauss-Jordan elimination to find the inverse of that matrix.
2. Prepare the submission script, which is the script that is submitted to the Slurm scheduler as a job in order to run the MATLAB script. This repository provides the script job.sh as an example.
3. Submit the job using
        sbatch job.sh
4. Examine the results

