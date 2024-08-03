

# soma_vetor

Este programa gera dois vetores de 32 inteiros com valores aleatórios entre 0 e 9, e os soma elemento por elemento utilizando paralelismo com OpenMP. 
Os resultados são então impressos. O uso de OpenMP permite que a operação de soma seja dividida entre múltiplos threads, 
aumentando a eficiência em sistemas com múltiplos núcleos de processamento.

- pragma omp parallel: Inicia uma região paralela onde os threads serão criados.
- pragma omp for: Divide o laço for subsequente entre os threads disponíveis.
