#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>
#define N 8

int main(){
    int b[N];
    int s = 0;
    
    srand(time(NULL));
    for(int i = 0; i < N; i++)
        b[i] = rand()%10;
    
    printf("\n");
    for(int i = 0; i < N; i++)
        printf("%d ",b[i]);
    printf("\n");
    
    #pragma omp parallel
    {
        #pragma omp for
        for(int i = 0; i < N; i++)
            s = s + b[i];
    }
    printf("\n\n");

    printf("s = %d\n",s);
    
    return 0;
}
