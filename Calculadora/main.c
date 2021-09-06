#include <stdio.h>
#include <math.h>

int main()
{
    int operando1, operando2;
    int opcion;
    int resultado;
    int res;
    int deseo;

    do
    {
    printf("Dame un numero entero: ");
    scanf("%d", &operando1);

    printf("Dame un numero entero: ");
    scanf("%d", &operando2);

    printf("Que operacion deseas realizar (1-suma, 2-resta, 3-multiplicacion, 4-division, 5-potencia, 6-modulo o 7-raiz cuadrada): ");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
        resultado=operando1+operando2;
        printf("El resultado es %d\n", resultado);
        break;
    case 2:
        resultado=operando1-operando2;
        printf("El resultado es %d\n", resultado);
        break;
    case 3:
        resultado=operando1*operando2;
        printf("El resultado es %d\n", resultado);
        break;
    case 4:
        resultado=operando1/operando2;
        printf("El resultado es %d\n", resultado);
        break;
    case 5:
        resultado=pow(operando1, operando2);
        printf("El resultado es %d\n", resultado);
        break;
    case 6:
        resultado=operando1%operando2;
        printf("El resultado es %d\n", resultado);
        break;
    case 7:
        resultado=sqrt(operando1);
        res=sqrt(operando2);
        printf("El resultado es %d\n", resultado);
        printf("El resultado es %d\n", res);
        break;
    default:
        printf("Opcion no disponible\n");
    }
    printf("Desea continuar (yes-1/no-2)?");
    scanf("%d", &deseo);

    }while(deseo==1);

    return 0;
}
