#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    string key = argv[1];

    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    int freq[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Only contain alphabetic characters.\n");
            return 1;
        }
        int index = toupper(key[i]) - 'A';
        if (freq[index] > 0)
        {
            printf("Should not contain repeated characters.\n");
            return 1;
        }
        freq[index]++;
    }

    string plaintext = get_string("Plaintext ");
    int length = strlen(plaintext);

    printf("Piphertext ");
    for (int i = 0; i < length; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (islower(plaintext[i]))
            {
                printf("%c", tolower(key[plaintext[i] - 'a']));
            }
            else
            {
                printf("%c", toupper(key[plaintext[i] - 'A']));
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
