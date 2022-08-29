#include<stdio.h>
int main(void)
{
    char str1[]="Susmita Goswami";
    char str2[]="Susmita Goswam";
    int d=strcmp(str1,str2);
    if(d==0)
        printf("lines are equal");
        else
            printf("lines are not equal");
    return 0;

}
