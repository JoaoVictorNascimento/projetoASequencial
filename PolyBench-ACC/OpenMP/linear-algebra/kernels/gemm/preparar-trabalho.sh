#!/bin/bash


# Baixe o Código do PolyBench-ACC.
git clone https://github.com/cavazos-lab/PolyBench-ACC.git

# Execute o Patch que corrige para compilar com gcc e colocar a opção -fopenmp.
patch -s -p0 < para-compilar-com-gcc-fopenmp.patch

# Acesse o diretório do benchmark escolhido: por exemplo gemm.
cd PolyBench-ACC/OpenMP/linear-algebra/kernels/gemm/
make

# Execute o benchmark.

./gemm_openmp.exe

