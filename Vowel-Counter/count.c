#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string input = get_string("Enter words: ");
    for (int i = 0; input[i] != '\0'; i++)
    {
        input[i] = tolower(input[i]);
    }

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int sizeofVowels = sizeof(vowels) / sizeof(vowels[0]);

    int vowelCounter = 0;
    for (int i = 0; i < strlen(input); i++)
    {   

        for (int j = 0; j < sizeofVowels; j++)
        {
            if (input[i] == vowels[j])
            {
                vowelCounter++;
                break;
            }
        }
    }
    printf("Vowels: %i\n", vowelCounter);
}