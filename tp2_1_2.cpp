#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5
int f,c;
double mt[N][M];

int main(int argc, char const *argv[])
{
// // Inicializo la matriz (para prueba)
//     int i=0;
//     for (f = 0; f < N; f++)
//     {
//         for (c = 0; c < M; c++)
//         {
//             mt[f][c]=i++;
//         }
//     }


    double * pMat=&mt[0][0];
    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            printf("%lf\t", *pMat);
            pMat++;
        }
        printf("\n");
    }
    getchar();
    return 0;
}
