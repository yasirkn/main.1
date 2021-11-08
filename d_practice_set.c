#include<stdio.h>

int main()
{
    int a=0, n, add=0;

    printf("Enter the number of which you want the Sum of:\n");
    scanf("%d", &n);

    do
    {
       add+=a;
        a++;
    } while (a<=n);
    printf("The value of sum(1 to %d) is %d\n", n, add);
    
    return 0;
}