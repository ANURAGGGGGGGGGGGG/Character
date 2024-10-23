#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("The character is %c \n", ch);
    printf("The value of character is %d\n" , ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowerCase");
    }
    else{
        printf("This character is not lowerCase");
    }
    
    return 0;
}