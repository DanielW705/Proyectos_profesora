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
    int mult = 0, i = 0;
    printf_s("Que numero quieres la tabla: ");
    scanf_s("%d", &mult);
    for (i = 1; i < 11; i++)
    {
        printf_s("%d x %d = %d\n", i, mult, i * mult);
    }
    system("pause");
    return 0;
}
