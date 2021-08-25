#include <stdio.h>
#include <stdlib.h>


int main()
{
int a=0,b=0,c=0,i=0,num=0;
a=0;
b=1;

printf("Ingrese la cantidad de numeros de fibonacci que quiere ver: \n", num);
scanf("%d", &num);
printf("%d\n%d\n",a,b);
for (i=3;i<=num;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
return 0;
}
