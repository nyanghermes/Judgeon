#include <stdio.h>
int main(void)
{
long long int a,b;
scanf("%ld%ld",&a,&b);
printf("%ld\n",a+b);
printf("%ld\n",a-b);
printf("%ld\n",a*b);
printf("%ld\n",a/b);
printf("%ld\n",a%b);
printf("%.2lf\n",(float)a/b);
return 0;
}
