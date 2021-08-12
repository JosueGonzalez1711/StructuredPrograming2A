#incluir  <> stdio.h
#incluir  <stdlib.h>   //atoi, atof, sprintf, size_t
#Incluir  <string.h>   //strcpy


///Clase Structure
typedef struct Array{
    int* adarray;
}Matriz;



//////////////////Functions Intro C Class
#definir pi 3.1416
int libnum= 15;

void sayHello(char message[]){
    printf("%s\n", mensaje);
}

// Método Secong: 1.Declare
// void saymyName(char message[]);
void saymyName(char message[]){
    printf("%s\n", mensaje);
}

int addTwoNumbers(int arg1, int arg2){  //declarando
    int result= arg1 +arg2;
    resultado devuelto;
}

///////////////

// Paso de argumentos por valor
void modifyVariables( int arg1, int arg2){
    arg1= arg1*2;
    arg2= arg2*2;
    devolución;
}

// Paso de Argumentos por Dirección
void modifyVariablesAdress(int* ptr1, int*ptr2, int multiplo){
    *ptr1= *ptr1 * multiplo;
    *ptr2= *ptr2 * multiplo;
    devolución;
}

//////Valores de swap de tarea //////

void swapValues(int* val1, int* val2){
    int temp;
    temp= *val1;
    *val1= *val2;
    *val2= temp;

}


/////Clase Estructuras
/////// stblib size_t 


void fillArray(int array[], size_t tam){
    for(size_t i=0;i < tam; i++){
 matriz[i] =i*2;
    }
    devolución;
}



void printArray1D(int array[], size_t tam){
    for(size_t i=0; i < tam; i++){
        printf("%i\n", array[i]);
    }
    devolución; 
}


Matriz* returnArray(){
    Array* anArrayType = (Array*)malloc(sizeof(Array));
    printf("Dirección anArrayType: %p \t anArrayType= %p\n", &anArrayType, anArrayType),
    anArrayType->adarray[0]= 16;
    anArrayType->adarray[1]= 18;
   
    devolver anArrayType;
};