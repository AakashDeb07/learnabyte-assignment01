#include <math.h>
#include <stdio.h>
int main()
{
    int n, i, f = 1;
    printf("Insert a number: ");
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
     {
        if (n % i == 0) 
        {
            f = 0;
            break;
        }
    }
    if (n <= 1)
        f = 0; 
    if (f == 1)
    {
        printf("It is a Prime Number");
    }
    else 
	{
        printf("It's Not a Prime Number\n");
        printf("It's factorial are ");
        for (i = 1; i <= n; i++)
     {
        if (n % i == 0) 
        {
        	printf("%d ",i);
        }
    }
}
    return 0;
}
