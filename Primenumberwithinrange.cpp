#include <stdio.h>
int main()
{
int a, b, i, flag;
printf("\nInsert the starting number:");
scanf("%d",&a);
printf("\nInsert the ending number: ");
scanf("%d",&b);
printf("\nThe Prime Numbers are: ");
while (a < b)
{
flag = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
printf("%d ", a);
++a;
}
printf("\n");
return 0;
}
