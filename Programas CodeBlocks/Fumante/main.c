/*vers�o 1.0
Algoritmo: M�dia
Objetivo: Retornar a media de 2 (dois) valores
Entrada: Valor 1, Valor 2
Sa�da: m�dia */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fumante;

    printf("digite caracter: ");
    scanf("%c",&fumante);

    if(fumante=='s')
    {
        puts("Sim");
    }
    else if(fumante=='n')
        {
            puts("Nao");
        }
        else
        {
            puts("opcao invalida");
            system("cls");
        }


    return 0;
}
