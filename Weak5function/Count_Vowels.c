#include <stdio.h>

int isVowel(char character)
{
    return character == 'a' || character == 'e' || character == 'i' ||
           character == 'o' || character == 'u' || character == 'A' ||
           character == 'E' || character == 'I' || character == 'O' ||
           character == 'U';
}

int countVowels(const char string[], int index)
{
    if (string[index] == '\0')
    {
        return 0;
    }

    return isVowel(string[index]) + countVowels(string, index + 1);
}

int main(void)
{
    char string[202];

    fgets(string, sizeof(string), stdin);
    printf("%d", countVowels(string, 0));

    return 0;
}
