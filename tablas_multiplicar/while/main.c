/*
 * Algoritmo tablas de multiplicar
 * El algotimo conciste en:
 * Mostrar una tabla de multiplicar
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int mult = 0, i = 1;
    printf_s("¿Que numero quieres de la tabla? ");
    scanf_s("%d", &mult);
    while (i < 11)
    {
        printf_s("%d x %d = %d\n", mult, i, mult * i);
        i++;
    }
    system("pause");
    return 0;
}
