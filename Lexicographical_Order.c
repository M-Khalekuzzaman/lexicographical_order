#include<stdio.h>
int main()
{
    char a[100], b[100];

    scanf("%s %s",a,b);
    /***
    printf("A of : %s, B of : %s\n",a,b);
    int idx = 0;
    while(a[idx] == b[idx] && a[idx] !='\0' && b[idx] !='\0'){
        idx ++;
    }
    if(a[idx] == '\0' && b[idx] == '\0')
        printf("Equal");
    else if(a[idx] == '\0' && b[idx] != '\0')
        printf("A is smaller");
    else if(a[idx] != '\0' && b[idx] == '\0')
        printf("B is smaller");
    else if(a[idx] < b[idx])
        printf("A is smaller");
    else
        printf("B is smaller");
    ***/
    int val = strcmp(a,b);
    scanf("%d\n",val);

        /*
        negative(-) = first value is smaller
        zero(0) = two value are equal
        positive(+) = second value is smaller

        */

        return 0;
}
