#include <iostream>
int main()
{   
    int numero;

    printf("Digite numero ");
    scanf_s("%d", &numero);

    if (numero > 1000)
    {
        printf("Maior que 1000");
    }
    else
    {
        printf("Numero menor que 1000 \n");
    }

    while (numero < 101)
    {
        printf("%d \n", numero);
        numero++;
    }
}