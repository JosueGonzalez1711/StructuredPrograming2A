#incluir  <> stdio.h
#incluir  "./myFunctions.h" 
#Incluir  <> stdlib.h

int var1= 10;
int var2= 20;

int main(int argc, char** argv){
    //printf("Variable 1: %d, Variable 2: $d\n", var1, var2 );
    

    printf("Variable 1= %d, Variable 2= %d \n", var1, var2);
    printf("---Programa ejecutado---\n" );

    // Paso de argumentos por direcicón
    modifyVariables(var2, var2);

    printf("New Varible 1: %d, New Variable 2: %d\n", var1, var2);


    printf("------------------------Utilar punteros------------------------\n" );
    // Obtener la dirección de var1 y var2
    //&= La dirección de 
    int* myptr= &var1;
    int* myptr2= &var2;
    printf("Variable de dirección1: %p, \t Variable de dirección2: %p\n", myptr, myptr2);

    modifyVariablesAdress(&var1, &var2, 3);
    // *myptr= El valor de la dirección= a algo
    printf("Función completada:\n" );
    
    printf("Nueva Variable1: %d, Nueva Variable2: %d\n", var1, var2);
    devolver 0;
}