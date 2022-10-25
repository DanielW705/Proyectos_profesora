/*
 * Algoritmo numeros de amstrong
 * El algotimo conciste en:
 * un numero de n digitos, el cual la suma de todos sus digitos elevado a la n da el numero
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *num;
    int res = 0, i = 0;
    printf_s("Deme un numero: ");
    scanf_s("%s", num);
    do
    {
        res += pow(num[i] - '0', strlen(num));
        i++;
    } while (i < strlen(num));
    if (res == atoi(num))
        printf_s("Es un numero de amstrong");
    else
        printf_s("No es un numero de amstrong");
    return 0;
}
