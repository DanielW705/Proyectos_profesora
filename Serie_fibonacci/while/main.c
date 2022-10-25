/*
 * Algoritmo fibonacci
 * El algotimo conciste en:
 * Sumar el primer numero mas el segundo
 * para proseguir sumando el segundo numero mas el primero
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a = 0, b = 1, fin = 0;
    printf_s("Hasta que numero quieres que acabe la serie: ");
    scanf("%d", &fin);
    while (fin > 0)
    {
        printf_s("%d\n", a);
        a += b;
        fin--;
        if (fin > 1)
        {
            printf_s("%d\n", b);
            b += a;
            fin--;
        }
        else
            break;
    }
    system("pause");
    return 0;
}
