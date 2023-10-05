#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int valor[] = {0,1,2,3,4,5,6};
    int *ptr, *ptr2;

    valor[0] = 7;
    ptr = &valor[0];

    ptr2 = ptr + 10;
    *ptr = 10;

    std::cout << "puntero: " << *ptr2 << std::endl;
    return 0;
}
