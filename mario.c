#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for height

    int height;
    do
    {
        height = get_int("Height: ");
    }
    // only accepts input between 1 - 8
    while (height < 1 || height > 8);

    // loop for print new line
    for (int i = 0; i < height; i++)
    {
        // loop to print spaces to make it right aligned spaces
        for (int d = height - i; d > 1; d--)
        {
            printf(" ");
        }
        // loop for hastags
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
