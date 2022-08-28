#include<stdio.h>
int main(void)
{
    char a[30];

    printf(" enter your full name %s ");
    gets(a); // we are using gets instate of scanf as it cant write the full name because of space
printf(" full name %s",a);// after space string get stop so we use use gets
    return 0;
}

