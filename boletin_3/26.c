/* Plantee e implemente una función recursiva en Lenguaje C que sume los números enteros positivos hasta un entero dado.
Además de la función, implemente la función apropiada para probar su funcionamiento, activando este último desde el programa 
principal.
*/
#include<stdio.h>

int pedirN(const char *string) {
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
    // Pide un entero
}

int sumar(int n) {
    if (n<0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return n + sumar(n - 1);
    }
    // Calcula 1+2+3+...+N recursivamente
}

void test() {
    printf("El resultado es %d\n", sumar(pedirN("Dime hasta que número quieres sumar (1+2+3+...+N)")));
}

int main() {
    test();
    return 0;
}
