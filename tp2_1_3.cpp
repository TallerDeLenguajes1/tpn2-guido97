#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15
int f, c;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int M = 5 + rand() % 11;
    double mt[N][M];
    // Inicializo la matriz (para prueba)
    int i = 0;
    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            mt[f][c] = 100 + rand() % 900;
        }
    }

    double *pMat = &mt[0][0];
    int pares = 0;
    for (f = 0; f < N; f++)
    {
        pares = 0;
        for (c = 0; c < M; c++)
        {
            printf("%.2f\t", *pMat);
            if ((int)*pMat % 2 == 0)
            {
                pares++;
            }

            pMat++;
        }
        printf("\nNúmeros pares encontrados en la fila anterior: %d\n",pares);
    }
    getchar();
    return 0;

    // El punto 3b te lo debo
}
