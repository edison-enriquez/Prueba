#include <iostream>

struct Ejemplo {
    int variable;
};

int main(int argc, char const *argv[])
{
    int valor = 0;
    int *puntero = &valor;

    Ejemplo obj;
    obj.variable = 5;  // Usando el operador .

    *puntero = 123;

    /* code */
    std::cout << "Puntero: " << puntero << " - Valor: " << &valor << std::endl;
    return 0;
}
