#include <stdio.h>
#include <stdlib.h>

int Primo(int num)
{
    if (num<=1)
    {
        return 0;
    }
    for (int i=2; i * i <=num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


void rangoPrimos(int inicio, int fin)
{
    printf("\nCalculando n%cmeros primos en el rango [%d, %d]\n", 163, inicio, fin);
    for (int i = inicio; i <= fin; i++)
    {
        if (Primo(i)){
            printf(" %d ", i);
        }
    }
    printf("\n");
}

void MenuVista()
{
    printf("\nMen%c", 163);
    printf("\n1-Realizar analisis para determinar n%cmero primo", 163);
    printf("\n2-Cerrar programa");
    printf("\nElija la opci%cn que desea: ", 162);
}

int main()
{
    int opcion, inicio, fin;
    do {
        MenuVista();
        scanf("%d", &opcion);
        
        switch (opcion)
        {
            case 1: {
                do {
                    printf("\nIngrese el inicio del rango (debe ser mayor o igual a 0): ");
                    scanf("%d", &inicio);
                } while (inicio < 0);

                do {
                    printf("\nIngrese el fin del rango (debe ser mayor o igual a %d): ", inicio);
                    scanf("%d", &fin);
                } while (fin < inicio);
                rangoPrimos(inicio, fin);
                break;
            }
            case 2: {
                printf("\nCerrando programa");
            }
        }
    } while (opcion != 2);

    system("pause");
    return 0;
}
