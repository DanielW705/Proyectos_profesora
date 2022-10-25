/*
 * Algoritmo cajero
 * El algotimo conciste en:
 * Un cajero que cobra 25 debe devolver el cambio exacto con monedas de 1,5,10
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int total_pagar = 0;
    int cambio[3] = {0, 0, 0};
    printf_s("Cuanto va a pagar: ");
    scanf_s("%d", &total_pagar);
    total_pagar -= 25;
    for (; total_pagar != 0;)
    {
        if (total_pagar >= 10)
        {
            total_pagar -= 10;
            cambio[0]++;
        }
        else if (total_pagar >= 5)
        {
            total_pagar -= 5;
            cambio[1]++;
        }
        else if (total_pagar >= 1)
        {
            total_pagar -= 1;
            cambio[2]++;
        }
        else
        {
            break;
        }
    }
    printf_s("Monedas de a diez: %d\n", cambio[0]);
    printf_s("Monedas de a cinco: %d\n", cambio[1]);
    printf_s("Monedas de a uno: %d\n", cambio[2]);
    system("pause");
    return 0;
}
