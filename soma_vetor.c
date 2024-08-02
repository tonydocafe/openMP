#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>
#define N 32

int main(){
    int a[N],b[N];
    
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        a[i] = rand()%10;
        b[i] = rand()%10;
    }
    
    for(int i = 0; i < N; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    #pragma omp parallel
    {
        #pragma omp for
        for(int i = 0; i < N; i++){
            printf("Thread %d trabalhando no indice %d\n",omp_get_thread_num(),i);
            a[i] = a[i] + b[i];
        }
    }
    printf("\n\n");
    for(int i = 0; i < N; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    return 0;
}
