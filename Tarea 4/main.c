#include <stdio.h>

void cicloFor(int numero1, int numero2);
void cicloWhile(int numeral1, int numeral2);
void cicloDoWhile(int number1, int number2);

int main()
{
    int num1;
    int num2;

    printf("Dame un numero: ");
    scanf("%d", &num1);

    printf("Dame otro numero: ");
    scanf("%d", &num2);

    cicloFor(num1, num2);
    cicloWhile(num1, num2);
    cicloDoWhile(num1, num2);

    return 0;
}

void cicloFor(int numero1, int numero2)
{
    int i;
    for(i=numero1; i>numero1 && i<numero2; i++)
        {
            printf("%d ", i);
        }
}

void cicloWhile(int numeral1, int numeral2)
{
  int j=numeral1;
  while(j>numeral1 && j<numeral2)
  {
      j++;
      printf("%d", j);
  }
}

void cicloDoWhile(int number1, int number2)
{
  int k=number1;
  do{
        k++;
        printf("%d ", k);
  }while(k>number1 && k<number2);
}
