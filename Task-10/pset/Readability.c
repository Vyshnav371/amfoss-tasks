#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Enter string: ");
    int m=strlen(s);
    int w=1;
    int l=0;
    int z=0;
    for(int i=0; i<m; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            l++;
        }
        else if(s[i]==' ')
        {
            w++;
        }
        else if(s[i]=='.' || s[i]=='?' || s[i]=='!' )
        {
            z++;
        }
    }
    float avgw=((float)l/(float)w)*100;
    float avgs=((float)z/(float)w)*100;
    float j=(0.0588 * avgw) - (0.296 * avgs) - 15.8;
    int k =round(j);
    printf("Grade: %i\n",k);
}
