#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(s[i]>=65 && s[i]<=90)
                printf("%c",s[i]+32);
            else
                printf("%c",s[i]);                
        }
        else{
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
                {
                if(s[i]>=65 && s[i]<=90)
                printf("%c",s[i]+32);
            else
                printf("%c",s[i]);
            }
            else
            {
                i++;
                if(i<n)
                {
                    if(s[i]>=97 && s[i]<=122)
                printf("%c",s[i]-32);
            else
                printf("%c",s[i]);
                }
            }
        }
    }
    return 0;
}
