#include <iostream>
#include <cstring>

void ejemplo_1() {
    // Cadenas estaticos
    const char* text = "Texto";     // En memoria estatica
    char text_2[] = "Hola Mundo";
    std::cout << text << std::endl;
    std::cout << sizeof(text) << std::endl;         // Tamaño del puntero
    std::cout << sizeof(text_2) << std::endl;       // Tamaño total
    std::cout << strlen(text) << std::endl;     // Tamaño de caracteres visible
    std::cout << strlen(text_2) << std::endl;   // Tamaño de caracteres visible
}

void ejemplo_2() {

    // Desde un estatico hacia un texto dinamico
    char text_e[] = "Texto";
    char* text_d = new char[strlen(text_e)+1];
    strcpy(text_d, text_e);
    std::cout << text_d << std::endl;

    // Dinamico hacia otro dinamico
    char* text_f = new char[strlen(text_d)+1];
    strcpy(text_f, text_d);
    std::cout << text_f << std::endl;
}

void ejemplo_3() {
    char nombre[] = "Jose";
    char apellido[] = "Perez";
    char* saludo = new char[strlen("Hola")+strlen(nombre)+strlen(apellido)+3]{};
    strcat(saludo, "Hola ");
    strcat(saludo, nombre);
    strcat(saludo, " ");
    strcat(saludo, apellido);
    std::cout << saludo << std::endl;
}

int main() {
//    ejemplo_1();
//    ejemplo_2();
    ejemplo_3();
    return 0;
}
