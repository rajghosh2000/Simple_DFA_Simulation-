#include<stdio.h>
#include<stdlib.h>

int s_check(char s[])
{
    char st[1000];
    int i=0,l,f=0;
    while(s[i]!='\0')
    {
        if((s[i] =='0' || s[i] =='1'))
        {
            f=0;
        }
        else
        {
            f=1;
            break;
        }
        
        i++;
    }
    return f;
}

int main()
{
    char str[1000];
    int i=0,f;
    printf("Enter a string containing only 0s and 1s\n");
    scanf("%s",str);

    f = s_check(str);
    if(f==0)
    {
        printf("STRING IS EXCEPTED");
    }
    else
    {
        printf("STRING IS NOT EXCEPTED");
    }
    int flag=0;
    while(str[i]!='\0')
    {
        if(str[i]=='0' && str[i+1]=='0')
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("\nSTRING EXITS IN LANGUAGE L");
    }
    else
    {
        printf("\nSTRING DOES EXITS IN LANGUAGE L");
    }
}   