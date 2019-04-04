#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/op locas.h"

int main()
{
    int op;
    int seguir=1;
    int num1=0,num2=0;
    long resuma,resres,resmul,facnum1,facnum2;
    float resdivi;

    while(seguir)
    {
        system("cls");
        menu(num1,num2);
        printf("\nIngrese una opcion (del 1 al 5)\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            system("cls");
            printf("ingrese el primer numero: ");
            scanf("%d",&num1);
            break;
        case 2:
            system("cls");
            printf("ingrese el segundo numero: ");
            scanf("%d",&num2);
            break;
        case 3:
            system("cls");
            resuma=suma(num1,num2);
            resres=resta(num1,num2);
            resdivi=divi(num1,num2);
            resmul=multi(num1,num2);
            facnum1=fact(num1);
            facnum2=fact(num2);
            break;
        case 4:
            system("cls");
            printf("El resultado de %d + %d es : %li",num1,num2,resuma);
            printf("\nEl resultado de %d - %d es : %li ",num1,num2,resres);
            if(num2==0)
            {
                printf("\nNo es posible dividir por 0");
            }
            else
            {
                printf("\nEl resultado de %d / %d es: %f ",num1,num2,resdivi);
            }
            printf("\nEl resultado de %d x %d es : %li",num1,num2,resmul);
            if(num1<0 || num1>12)
            {
                printf("\nNo se pudo calcular el factorial de : %d",num1);
            }
            else
            {
               printf("\nel factorial de %d es %li",num1,facnum1);
            }
            if(num2<0 || num2>12)
            {
                printf("\nNo se pudo calcular el factorial de : %d",num2);
            }
            else
            {
                printf("\nel factorial de %d es %li",num2,facnum2);
            }
            printf("\nPrecione 1 seguido de enter para continuar:\n");
            scanf("%d",&seguir);
            break;
        case 5:
            seguir=0;
            break;
        default:
            system("cls");
            printf("Ingrese una opcion valida (1-5)");
            scanf("%d",&op);
            break;
        }
    }

    return 0;
}
