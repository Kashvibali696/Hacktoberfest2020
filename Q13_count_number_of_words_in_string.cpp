//Program to find the no of words in a string 
#include<stdio.h>
#include<string.h>
int main ()
{
    char str[50];
    int count=1,i;
    printf("Enter a string : ");    //message for user to enter a string
    gets(str);
    for(i=0;str[i]!='\0';i++)     //'\0' represents end of the string
    {
        if(str[i]==' ')
            count++;
    }
    printf("Number of words in the string are  : %d ",count);
    return 0;
}
