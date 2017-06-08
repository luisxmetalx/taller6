#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fechaSalida(char *fecha);

int main(){
    char *fecha="2017-06-06";

    fechaSalida(fecha);
    return 0;
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

