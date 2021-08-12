
#incluir  <> stdio.h
#include  <stdlib.h>   //atoi, atof, sprintf
#Incluir  <string.h>   //strcpy
#incluir  "./myFunctions.h" 
//#include "./FolderTest/myFunctions.h"

int minúmero= 3;
char mystring[255]=  "Hola Mundo" ;

// Declare and define (FirstMethod) Siempre tiene que retornar algo: void, int, str, float
//void sayHello(char message[]){
 // printf("%s\n", mensaje);
//}

// Método Secong: 1.Declare
void saymyName(char message[]);


int principal(){

    sayHello("Hola Mundo" );

    saymyName("Adri" );

    int MyResu= addTwoNumbers(4,6);
    printf("El resultado es: %d \n", MyResu);

    printf("%d", libnum);
    devolver 0;
}
