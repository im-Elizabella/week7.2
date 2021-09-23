#include <stdio.h>  //while loop
int main()
{
    char str[1000];
    int count_u = 0;
    int count_l = 0;
    int i;

    printf("Enter string : ");
    gets(str);

    i=0;
    while(str[i] != 0)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count_u++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            count_l++;
        }
        i++;
    }

    printf("Uppercase = %d\n", count_u);    
    printf("Lowercase = %d", count_l);        
    return 0;
}