#incluir  <> stdio.h
#include  <stdlib.h>   // atoi, atof
#incluir  <stdbool.h>   // break (creo)

#definir TAM 10  //sin ; y =

int lista[TAM]= {11,12,13,14,15,16,17,18,19,20};
int idx=0;

int main(int argc, char** argv){
    
    for( int index=1; índice <= TAM; índice++){
        printf("Índice: %d, Valor: %d \n\a", índice, lista[]);
    }

   // while (lista[idx] != 17){
     //   idx++;
    //}

    mientras que(true){
        if(lista[idx] == 17){
            quebrar;
        }
        idx++;
    }
    printf("Idx encontrado: %d\n", idx);

    devolver 0;
}