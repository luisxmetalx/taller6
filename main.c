#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fechaSalida(char *fecha);
int * direccion(int *arreglo);
void swap(int* a, int* b);

int main(){
    char *fecha="2017-06-06";
    fechaSalida(fecha);
    int c[5];
    int *d=direccion(c);
    printf("Direccion de memoria del arreglo: %p\n",d);
    int a=3;
    int b=2;
    printf("Los numeros coriginales son: a=%d y b=%d\n",a,b);
    swap(&a, &b);
}


void fechaSalida(char *fecha){
    int i,acum;
    //char dia[2],mes[2],año[4]
    char *tmp;
    tmp=(char*) malloc(4*sizeof(char));
    

    for(i=0;i<4;i++){
        *(tmp+i)=*(fecha+i);
    }
    printf("el año es: %s\n",tmp);
    free(tmp);
    tmp=(char*) malloc(2*sizeof(char));
    for(i=5;i<7;i++){
        acum=i-5;   
        *(tmp+acum) = *(fecha+i);
    }
    printf("el dia es: %s\n",tmp);
    free(tmp);
    tmp=(char*) malloc(2*sizeof(char));
    for(i=8;i<10;i++){
        acum=i-8;   
        *(tmp+acum) = *(fecha+i);
    }
    printf("el mes es: %s\n",tmp);
}

int * direccion(int *arreglo)
{
    int *dir;
    dir=&arreglo[0];
    return dir;
}

void swap(int* a, int* b)
{
	int* temp=malloc(sizeof(int *));
	*temp=*a; 
	*a = *b;
	*b = *temp;
printf("Los numeros cambiados son: a=%d y b=%d\n",*a,*b);
}
