#include <stdio.h>
#include <math.h>

int main()
{
    float operando1, operando2;
    int i1, i2;
    int opcion;
    float resultado;
    float res;
    int deseo;

    do
    {
    printf("Dame un numero entero: ");
    scanf("%f", &operando1);

    printf("Dame un numero entero: ");
    scanf("%f", &operando2);

    printf("Que operacion deseas realizar (1-suma, 2-resta, 3-multiplicacion, 4-division, 5-potencia, 6-modulo o 7-raiz cuadrada): ");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
        resultado=operando1+operando2;
        printf("El resultado es %f\n", resultado);
        break;
    case 2:
        resultado=operando1-operando2;
        printf("El resultado es %f\n", resultado);
        break;
    case 3:
        resultado=operando1*operando2;
        printf("El resultado es %f\n", resultado);
        break;
    case 4:
        resultado=operando1/operando2;
        printf("El resultado es %f\n", resultado);
        break;
    case 5:
        resultado=pow(operando1, operando2);
        printf("El resultado es %f\n", resultado);
        break;
    case 6:
        i1=(int)operando1;
        i2=(int)operando2;
        resultado=i1%i2;
        printf("El resultado es %f\n", resultado);
        break;
    case 7:
        resultado=sqrt(operando1);
        res=sqrt(operando2);
        printf("El resultado es %f\n", resultado);
        printf("El resultado es %f\n", res);
        break;
    default:
        printf("Opcion no disponible\n");
    }
    printf("Desea continuar (yes-1/no-2)?");
    scanf("%d", &deseo);

    }while(deseo==1);

    return 0;
}
