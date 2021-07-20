#include <stdio.h>
int main()
{
   int i,n[20],temp,j,k,c;
   printf("How many numbers please enter:");
   scanf("%d", &c);
   printf("\nEnter the numbers :");
   for (i = 0; i < c; ++i)
   {
      scanf("%d", &n[i]);
   }
   for (j = 0; j < c; ++j)
   {
      for (k = j + 1; k < c; ++k)
      {
         if (n[j] > n[k])
         {
            temp = n[j];
            n[j] = n[k];
            n[k] = temp;
         }
      }
   }
   printf("The order is:");
   for (i = 0; i < c; ++i)
      printf("%d ", n[i]);
}
