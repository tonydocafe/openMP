

# soma_vetor

Este programa gera dois vetores de 32 inteiros com valores aleatórios entre 0 e 9, e os soma elemento por elemento utilizando paralelismo com OpenMP. 
Os resultados são então impressos. O uso de OpenMP permite que a operação de soma seja dividida entre múltiplos threads, 
aumentando a eficiência em sistemas com múltiplos núcleos de processamento.



- pragma omp parallel: Inicia uma região paralela onde os threads serão criados.
- pragma omp for: Divide o laço for subsequente entre os threads disponíveis.


# matriz.c

Este programa gera uma matriz de 32x32 inteiros e um vetor de 32 inteiros, ambos com valores aleatórios entre 0 e 9. 
Em seguida, ele multiplica a matriz pelo vetor, armazenando o resultado em um segundo vetor. A multiplicação é paralelizada usando OpenMP, 
o que permite que a operação seja distribuída entre múltiplos threads, aumentando a eficiência em sistemas com múltiplos núcleos de processamento. 
O vetor b e a matriz a são impressos antes e depois da operação de multiplicação.

- Dentro do laço for, a multiplicação da matriz a pelo vetor b é realizada. Para cada linha i da matriz, 
a soma dos produtos dos elementos da linha a[i][j] pelo correspondente elemento do vetor b[j] é calculada e armazenada no vetor c[i].
