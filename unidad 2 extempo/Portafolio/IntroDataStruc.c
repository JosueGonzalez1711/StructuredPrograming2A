#incluir  <> stdio.h
#Incluir  <> String.h
#incluir  <> stdio.h 

#incluir  "./myFunctions.h" 

// Array (Arreglos) estructuras

int myIntArray[5];

typedef struct wizard{
    salud int;
    resistencia int;
    char* nombre;
    //más atributes
}Asistente;  //Lleva ; al final

// Asistente para typedef struct;

estructura Matriz{
    int* adarray;
};

int principal(){

    struct wizard Josue= {100, 100,  "Josue Gonzalez" };
 Wizard chris = {50, 70,  "Cristiano " };
    printf("%s\n", Josue. nombre);

    fillArray(myIntArray, 5));
    printArray1D(myIntArray, 5);
    printf("%d", myIntArray[0]);
    printf("%d", myIntArray[1]);
    printf("%d", myIntArray[2]);
    printf("%d", myIntArray[3]);
    printf("%d\n", myIntArray[4]);

    Array** myarray= aFunction();
    printf("%p\n", myarray);


    devolver 0; 
}