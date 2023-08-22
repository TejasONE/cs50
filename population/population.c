#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startSize, endSize;
    int years = 0;

    // TODO: Prompt for start size
    do
    {
        startSize = get_int("Enter start population ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    do
    {
        endSize = get_int("Enter end population size ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    while (startSize < endSize)
    {
        startSize += (startSize / 3) - (startSize / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);
}
