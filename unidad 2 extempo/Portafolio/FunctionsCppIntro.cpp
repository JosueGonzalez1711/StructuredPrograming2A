
#incluir  <> iostream
#Incluir  <> de tupla
std:: string mystr=  "Hola Mundo";  //::= está contenido en esa biblioteca
int minúmero= 3;
flotar myFlt= 3.141;

std::tuple<int,int> myTuple= {1, 2};

// Second (Método)
void sayHello(std::string tag1);


int principal(){
    sayHello(mystr );
    volver EXIT_SUCCESS;
}

void sayHello(std::string tag1){
    std::cout<<tag1<<std::endl;
}