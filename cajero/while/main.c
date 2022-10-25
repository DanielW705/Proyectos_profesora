/*
 * Algoritmo cajero
 * El algotimo conciste en:
 * Un cajero que cobra 25 debe devolver el cambio exacto con monedas de 1,5,10
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int total_pagar = 0;
    int cambio[3] = {0, 0, 0};
    printf_s("Cuanto va a pagar: ");
    scanf_s("%d", &total_pagar);
    total_pagar -= 25;
    while (total_pagar != 0)
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
            break;
    }
    printf_s("No. monedas de 10: %d\n", cambio[0]);
    printf_s("No. monedas de 5: %d\n", cambio[1]);
    printf_s("No. monedas de 1: %d\n", cambio[2]);
    system("pause");
    return 0;
}
