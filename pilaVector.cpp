#include <iostream>
#include <vector>

class Pila {
public:
    void push(int valor) {
        elementos.push_back(valor);
    }

    void pop() {
        if (estaVacia()) {
            std::cerr << "Pila vacía, no se puede hacer pop." << std::endl;
            return;
        }
        elementos.pop_back();
    }

    int peek() const {
        if (estaVacia()) {
            std::cerr << "Pila vacía, no hay elementos para mostrar." << std::endl;
            return -1; // Valor de error, en un diseño real podrías lanzar una excepción.
        }
        return elementos.back();
    }

    bool estaVacia() const {
        return elementos.empty();
    }

private:
    std::vector<int> elementos;
};

int main() {
    Pila pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);

    std::cout << "Elemento en el tope: " << pila.peek() << std::endl;
    pila.pop();
    std::cout << "Elemento en el tope ahora: " << pila.peek() << std::endl;

    return 0;
}
