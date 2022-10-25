/*
 * Algoritmo tablas de multiplicar
 * El algotimo conciste en:
 * Mostrar una tabla de multiplicar
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mul = 0, i = 1;
    printf_s("Que numeros quieres que sea multiplo: ");
    scanf_s("%d", &mul);
    do
    {
        printf_s("%d x %d = %d \n", i, mul, i * mul);
        i++;
    } while (i < 11);
    system("pause");
    return 0;
}
