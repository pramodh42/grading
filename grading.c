#include<stdio.h>
int main()
{
    int a;
    printf("enter your marks out of 100");
    scanf("%d",&a);
    printf("%s",a>=85?"grade A":(a>=70&&a<=84?"grade B":(a>=55&&a<=69?"grade C":(a>=40&&a<=54?"grade D":("grade F")))));
    return 0;
}
