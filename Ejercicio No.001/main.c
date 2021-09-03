#include <stdio.h>

int main()
{
  int cont1, i, fact=1, n;
  printf("hasta que numero: ");
  scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
      fact= fact*i;
      printf("%d %d\n", i, fact);
    }
}


