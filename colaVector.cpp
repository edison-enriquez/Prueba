#include <iostream>
#include <vector>

class Cola {
public:
    void enqueue(int valor) {
        elementos.push_back(valor);
    }

    void dequeue() {
        if (estaVacia()) {
            std::cerr << "Cola vacía, no se puede hacer dequeue." << std::endl;
            return;
        }
        elementos.erase(elementos.begin());
    }

    int front() const {
        if (estaVacia()) {
            std::cerr << "Cola vacía, no hay elementos para mostrar." << std::endl;
            return -1; // Valor de error, en un diseño real podrías lanzar una excepción.
        }
        return elementos.front();
    }

    bool estaVacia() const {
        return elementos.empty();
    }

private:
    std::vector<int> elementos;
};

int main() {
    Cola cola;
    cola.enqueue(10);
    cola.enqueue(20);
    cola.enqueue(30);

    std::cout << "Primer elemento: " << cola.front() << std::endl;
    cola.dequeue();
    std::cout << "Primer elemento después de dequeue: " << cola.front() << std::endl;

    return 0;
}
