#include <iostream>

struct Nodo {
    int dato;
    Nodo *siguiente;
};

class ListaEnlazada {
public:
    ListaEnlazada();
    ~ListaEnlazada();
    void insertarAlInicio(int dato);
    void insertarAlFinal(int dato);
    void eliminar(int dato);
    void imprimir();

private:
    Nodo *primero;
};

ListaEnlazada::ListaEnlazada() {
    primero = nullptr;
}

ListaEnlazada::~ListaEnlazada() {
    Nodo *actual = primero;
    while (actual) {
        Nodo *aEliminar = actual;
        actual = actual->siguiente;
        delete aEliminar;
    }
}

void ListaEnlazada::insertarAlInicio(int dato) {
    Nodo *nuevoNodo = new Nodo;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = primero;
    primero = nuevoNodo;
}

void ListaEnlazada::insertarAlFinal(int dato) {
    Nodo *nuevoNodo = new Nodo;
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = nullptr;

    if (primero == nullptr) {
        primero = nuevoNodo;
    } else {
        Nodo *actual = primero;
        while (actual->siguiente) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
    }
}

void ListaEnlazada::eliminar(int dato) {
    Nodo *actual = primero;
    Nodo *anterior = nullptr;

    while (actual && actual->dato != dato) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual) {
        if (anterior) {
            anterior->siguiente = actual->siguiente;
        } else {
            primero = actual->siguiente;
        }
        delete actual;
    }
}

void ListaEnlazada::imprimir() {
    Nodo *actual = primero;
    while (actual) {
        std::cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    ListaEnlazada lista;
    lista.insertarAlInicio(10);
    lista.insertarAlInicio(20);
    lista.insertarAlFinal(5);
    lista.imprimir();
    lista.eliminar(20);
    lista.imprimir();

    return 0;
}
