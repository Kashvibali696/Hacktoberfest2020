#include<stdio.h>
#include<string.h>
void main()
{
    int i, j, k;
    char str[100];
    printf("Enter a string:\t");
    scanf("%s", str);
    strrev(str);
    printf("the reverse  string is %s\n",str );
}
