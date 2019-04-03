#include <stdio.h>
#include <stdlib.h>

int suma(num1,num2)
{
    int res;
    res=num1+num2;

    return res;
}
int resta(num1,num2)
{
    int res;
    res=num1-num2;
    return res;
}
int multi(num1,num2)
{
     int res;
     res=num1*num2;
     return res;
}
float divi(num1,num2)
{
    float res;
    res=(float)num1/num2;

    return res;
}
int fact(n)
{
    int i;
    int resp=1;

    for(i=n;i>0;i--)
    {
        resp=resp*i;
    }

    return resp;
}
void menu(int num1, int num2)
{
    printf("1. Ingresar 1er operando (A=%d)\n",num1);
    printf("2. Ingresar 2do operando (B=%d)\n",num2);
    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n");
}
