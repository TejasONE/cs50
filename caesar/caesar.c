#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage ./caesar k");
        return 1;
    }

    for (int k = 0; k < strlen(argv[1]); k++)
    {
        if (isalpha(argv[1][k]))
        {
            printf("Usage ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]) % 26;
    string pt = get_string("Plaintext ");

    printf("ciphertext: ");

    for (int i = 0; i < strlen(pt); i++)
    {
        if (!isalpha(pt[i]))
        {
            printf("%c", pt[i]);
            continue;
        }

        int ascii_offset = isupper(pt[i]) ? 65 : 97;

        int pi = pt[i] - ascii_offset;
        int ci = (pi + k) % 26;

        printf("%c", ci + ascii_offset);
    }

    printf("\n");
    return 0;
}