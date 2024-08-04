#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>
#define N 32

int main(){
    int a[N][N],b[N],c[N];
    
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        b[i] = rand()%10;
        for(int j = 0; j < N; j++)
            a[i][j] = rand()%10;
    }
    
    /*for(int i = 0; i < N; i++){
        printf("%d ",a[i]);
    }*/
    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    
    #pragma omp parallel
    {
        #pragma omp for
        for(int i = 0; i < N; i++){
            int parcial = 0;
            for(int j = 0; j < N; j++)
                parcial += a[i][j]*b[j];
            c[i] = parcial;
        }
    }
    printf("\n\n");
    for(int i = 0; i < N; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    return 0;
}
