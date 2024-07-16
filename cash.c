#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

    float troco;
    int m25 = 0;
    int m10 = 0;
    int m5 = 0;
    int m1 = 0;

    do {
        troco = get_float("Insira o valor: ");
    } while (troco < 0);

    int trococentavos = round(troco * 100);

    while (trococentavos >= 25)
    {
        trococentavos = trococentavos - 25;
        m25++;
    }

    while (trococentavos >= 10)
    {
        trococentavos = trococentavos - 10;
        m10++;
    }

    while (trococentavos >= 5)
    {
        trococentavos = trococentavos - 5;
        m5++;
    }

    while (trococentavos >= 1 && trococentavos > 0)
    {
        trococentavos = trococentavos - 1;
        m1++;
    }

    printf ("Moedas de 25: %i\n\n", m25);
    printf ("Moedas de 10: %i\n\n", m10);
    printf ("Moedas de 5: %i\n\n", m5);
    printf ("Moedas de 1: %i\n\n", m1);
    printf("Sobrou: %i\n", trococentavos);

    //I showed each amount of coins neeeded, for check50 put all amount of coins in one variable
}
