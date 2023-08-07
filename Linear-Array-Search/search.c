#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int numOfInput = get_int("Enter how many elements in the array: ");

    int arrayNum[numOfInput];
    
    for (int i = 0; i < numOfInput; i++)
    {
        arrayNum[i] = get_int("Number %i: ", i + 1);
    }

    int searchNumber = get_int("\nEnter the number to search: ");
    
    for (int i = 0; i < numOfInput; i++)
    {

        if (arrayNum[i] == searchNumber)
        {
            printf("\nFound %i at index %i\n", searchNumber, i);
            return 0;
        }
    }
    printf("\nNot found\n");
    return 1;
}
