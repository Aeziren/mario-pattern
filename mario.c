#include <cs50.h>
#include <stdio.h>

int get_altura();
void criar_piramides();

int main(void)  // programa principal
{
    int altura = get_altura();
    criar_piramides(altura);
}

int get_altura() // funcao para receber altura
{
    int altura = 0;
    do
    {
        altura = get_int("Height: ");
    }
    while (altura < 1 || altura > 8);
    return altura;
}

void criar_piramides(meta) // funcao de mostrar piramide na tela
{
    int altura = 1;
    while (altura <= meta)
    {
        for (int c = meta - altura; c > 0; c--) // comeca com muitos espacos e vai diminuindo
        {
            printf(" ");
        }
        for (int blocos = altura; blocos > 0; blocos--) // comeca com poucos '#' e vai aumentando
        {
            printf("#");
        }
        printf("  ");
        for (int blocos = altura; blocos > 0; blocos--)
        {
            printf("#");
        }
        altura++;
        printf("\n");
    }
}