#include<stdio.h>
int main(void)
{
    char s1[]="Susmita Goswami";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
           i++;
           len++;

    }
    printf("lenght=%d",len);
    return 0;

}
