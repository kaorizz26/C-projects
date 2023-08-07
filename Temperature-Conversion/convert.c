#include <stdio.h>
#include <cs50.h>

void tempConvertOption(void)
{   
    //* Options of user to pick:
    printf("\nTemperature Conversion:\n");
    printf("\n1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exit");
    printf("\n");
}

float celciusToFahrenheit(float celsius)
{   
    // Convert celsius to fahrenheit
    float cel_to_fah = celsius * 1.8 + 32;
    return cel_to_fah;
}

float fahrenToCelsius(float fahren)
{   
    // convert fahrenheit to celsius
    float fah_to_cel = (fahren - 32) * 0.56;
    return fah_to_cel;
}

int main(void)
{   
    while (true)
    {
        tempConvertOption(); // Options of user to pick

        int choice = get_int("\nEnter your choice: ");

        // Do something if user pick from options
        if (choice == 1)
        {
            float celsius = get_float("Enter temperature in Celsius: ");
            float celsius_convert = celciusToFahrenheit(celsius); // Show conversion of celsius to fahrenheit
            printf("\n---%.1f degrees Celsius is equal to %.1f degrees Fahreheit.---\n", celsius, celsius_convert);
        }

        else if (choice == 2) 
        {
            float fahren = get_float("Enter temperature in Fahrenheit: ");
            float fahren_convert = fahrenToCelsius(fahren); // Show conversion of fahrenheit to celsius
            printf("\n---%.1f degrees Fahrenheit is equal to %.1f degrees Celsius.---\n", fahren, fahren_convert);

        }

        else if (choice == 3)
        {   
            printf("\nGoodbye!\n");
            break;
        }

        else
        {
            printf("\n---Invalid input. Enter from (1, 2, 3)---\n");
            
        }
    }
    
    return 0;
}