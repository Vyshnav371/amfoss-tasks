#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int n;
    do
    {
        n=get_int("key: ");
    }
    while(n<0);
    string s=get_string("Enter cipher text: ");
    int l=strlen(s);
    for(int i=0; i<l; i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            if(s[i]+n>'z')
            {
                printf("%c",s[i]+n-26);
            }
            else
            {
                printf("%c",s[i]+n);
            }
        }
        
        else if (s[i]>='A' && s[i]<='Z')
        {
            if(s[i]+n>'Z')
            {
                printf("%c",s[i]+n-26);
            }
            else
            {
                printf("%c",s[i]+n);
            }
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
    
}
