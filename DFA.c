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

        int flag=0;
    while(str[i]!='\0') 
    {
        if(str[i]=='0' && str[i+1]=='0')   //here if once 0 is found it checks if next position also contains a 0 or not if found it breaks and 
                                        //gives the result else if 1 is found carry on  
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("\n   AND    \nSTRING EXITS IN LANGUAGE L");
    }
    else
    {
        printf("\n   BUT    \nSTRING DOES EXITS IN LANGUAGE L");
    }
    }
    else
    {
        printf("STRING IS NOT EXCEPTED SO IT CANNOT BE A PART OF LANGUAGE L");
    }
    
}   
