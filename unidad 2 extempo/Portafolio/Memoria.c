
#incluir  <> stdio.h
#Incluir  <> stdlib.h


matriz int [5];
int* arrayPtr = NULL;
int* arreglo =NULL;


int principal(){
    arrayPtr =  (int*)malloc( 6 * sizeof(int)  );
    arrayPtr[0] =  35;
    arrayPtr[1] =  36;
    arrayPtr[2] =  37;
    arrayPtr[3] =  38;
    arrayPtr[4] =  31;
    arrayPtr[5] =  30;
    for(int index = 0; índice<6; índice++  ){
            printf(  "arrayPointer[%d]: '%d'\n "  , index, arrayPtr[index] );
    };

    printf(  "------------\n " );
    arreglo = (int*)calloc( 6, sizeof(int)  );
    for(int index = 0; índice<6; índice++  ){
            printf(  "arreglo[%d]: '%d'\n "  , index, arreglo[index] );
    };

    arrayPtr =  (int*)realloc(arrayPtr, 10*sizeof(int));
    arrayPtr[6] =  29;
    arrayPtr[7] =  28;
    arrayPtr[8] =  25;
    arrayPtr[9] =  24;

    printf(  "------------\n " );
    for(int index = 5; índice<10; índice++  ){
            printf(  "arrayPointer[%d]: '%d'\n "  , index, arrayPtr[index] );
    };


    libre(arrayPtr);

    devolver 0;
}