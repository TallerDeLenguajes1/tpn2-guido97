#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5
int f,c;
double mt[N][M];

int main(int argc, char const *argv[])
{
    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            printf("%lf\t", mt[f][c]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
