#include <iostream>

struct Ejemplo {
    int variable;
    bool calcular(int valor){
        return valor;
    };
};

int main(int argc, char const *argv[])
{
    
    Ejemplo obj;
    obj.variable = 5;  // Usando el operador .
    //obj.calcular(5);

    std::cout << "Valor: "<<obj.variable << std::endl;

    Ejemplo* ptr = new Ejemplo;
    ptr -> variable = 5;  // Usando el operador ->

    std::cout << "Valor: "<< ptr -> variable;

    return 0;
}
