/*
 * Algoritmo fizz buzz
 * El algotimo conciste en:
 * a) cuando el numero es multiplo de 3 imprima "fizz"
 * b) cuando el numero es multiplo de 5 imprima "buzz"
 * c) cuando el numero es multiplo de 5 y 3 imprima "fizz buzz"
 * d) en caso contrario solo imprima el numero
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    for (num = 0; num < 101; num++)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            printf("fizz buzz");
        }
        else if (num % 5 == 0)
        {
            printf("buzz");
        }
        else if (num % 3 == 0)
        {
            printf("fizz");
        }
        else
        {
            printf("%d", num);
        }
        num++;
        printf("\n");
    }
    system("pause");
    return 0;
}
