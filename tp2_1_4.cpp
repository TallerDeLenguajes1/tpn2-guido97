#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2000 y 2017
int cantidad;//entre 1 y 4
char *tipo_cpu;//valores del arreglo tipos
};

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
int ret_velocidad();
int ret_anio();
int ret_velocidad();
void mostrarCompu(compu);
compu crearCompuRandom();
void cargarArreglo(compu*,int);
void mostrarListaCompu(compu*,int);
void mostrarMasVieja(compu*,int);
void mostrarMasRapida(compu*,int);


int f, c;
int t;//tamaño del arreglo

int main(int argc, char const *argv[])
{
    printf("¿Cuántas PC se deverían cargar?: ");
    scanf("%d",&t);
    srand(time(NULL));
    compu compu_arr[t];
    cargarArreglo(compu_arr,t);
    mostrarListaCompu(compu_arr,t);
    mostrarMasVieja(compu_arr,t);
    mostrarMasRapida(compu_arr,t);
    getchar();
    return 0;


}
int ret_velocidad(){
    return 1+rand()%4;
}
int ret_anio(){
    return 2000+rand()%18;
}
int ret_nucleos(){
    return 1+rand()%5;
}

compu crearCompuRandom(){
    char * tipo=*(tipos+rand()%6);
    compu c={ret_velocidad(),ret_anio(),ret_nucleos(),tipo};
    return c;
}

void mostrarCompu(compu c){
    printf("\n\
    Velocidad: %d GHz\n\
    Año: %d\n\
    # Núcleos: %d\n\
    Tipo: %s\n",c.velocidad,c.anio,c.cantidad,c.tipo_cpu);
}

void cargarArreglo(compu lista[],int tam){
    for (size_t i = 0; i < tam; i++)
    {
        lista[i]=crearCompuRandom();
    }
}

void mostrarListaCompu(compu lista[], int tam){
    for (int i = 0; i < tam; i++)
    {
        mostrarCompu(lista[i]);
    }
    
}

void mostrarMasVieja(compu lista[], int tam){
    int minIdx=0;//indice de la más vieja
    int minAnio=lista->anio;//inicializo el año con el primer valor
    compu * listainterna= lista;
    for (int i = 0; i < tam; i++)
    {
        if (minAnio>listainterna->anio)
        {
            minAnio=listainterna->anio;
            minIdx=i;
        }
        listainterna++;
    }
    printf("\nLa PC más vieja es:\n");
    mostrarCompu(lista[minIdx]);
}

void mostrarMasRapida(compu lista[], int tam){
    int maxIdx=0;//indice de la más rapida
    int maxVel=lista->velocidad;//inicializo la velocidad con el primer valor
    compu * listainterna= lista;
    for (int i = 0; i < tam; i++)
    {
        if (maxVel<listainterna->velocidad)
        {
            maxVel=listainterna->velocidad;
            maxIdx=i;
        }
        listainterna++;
    }
    printf("\nLa PC más rápida es:\n");
    mostrarCompu(lista[maxIdx]);
}