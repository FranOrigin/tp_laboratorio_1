#include <stdio.h>
#include <stdlib.h>
/*La funci�n suma recibe dos variables tipo int,
opera la primera y la segunda entre ellas mediante el operador +, asigna el resultado
a una variable tipo long y retorna esta �ltima. */

long suma(num1,num2)
{
    long res;
    res=num1+num2;

    return res;
}
/*La funci�n resta recibe dos variables tipo int,
opera la primera y la segunda entre ellas mediante el operador -, asigna el resultado
a una variable tipo long y retorna esta �ltima.*/

long resta(num1,num2)
{
    long res;
    res=num1-num2;
    return res;
}
/*La funci�n multi recibe dos variables tipo int,
opera la primera y la segunda entre ellas mediante el operador *, asigna el resultado
a una variable tipo long y retorna esta �ltima.*/

long multi(num1,num2)
{
     long res;
     res=num1*num2;
     return res;
}
/*La funci�n divi recibe dos variables tipo int,
opera la primera y la segunda entre ellas mediante el operador /, asigna el resultado
a una variable tipo float y retorna esta �ltima.*/

float divi(num1,num2)
{
    double res;
    res=(float)num1/num2;

    return res;
}
/*La funci�n fact recibe una variable tipo int, la asigna a
la variable i y realiza un bucle decreciente operando la variable
resp y la variable i mediante el operador *.  Mientras  i sea
mayor a 0, luego asigna la operaci�n a la variable resp y la retorna.
*/

long fact(n)
{
    int i;
    long resp=1;

    for(i=n;i>0;i--)
    {
        resp=resp*i;
    }

    return resp;
}
/*La funci�n menu recibe dos variables tipo int,
muestra 5 lineas de texto, en la primera linea tambien
muestra la primer variable y en la segunda linea muestra
la segunda variable y no retorna nada.*/


void menu(num1,num2)
{
    printf("1. Ingresar 1er operando (A=%d)\n",num1);
    printf("2. Ingresar 2do operando (B=%d)\n",num2);
    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n");
}
