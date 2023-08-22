#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
int const BLOCK_SIZE = 512;


int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./recover file.raw");
        return 1;
    }


    FILE *raw_file = fopen(argv[1], "r");

    if (raw_file == NULL)
    {
        printf("Could not be opened");
        return 1;
    }

    unsigned int img_id = 0;

    BYTE block[BLOCK_SIZE];

    FILE *jpg_file = NULL;

    while (fread(block, 1, BLOCK_SIZE, raw_file) == BLOCK_SIZE)
    {

        if (block[0] == 0xff && block[1] == 0xd8 && block[2] == 0xff && (block[3] & 0xf0) == 0xe0)
        {
            if (jpg_file != NULL)
            {
                fclose(jpg_file);
            }

            char filename[8];
            sprintf(filename, "%03i.jpg", img_id);

            jpg_file = fopen(filename, "w");

            img_id++;

            if (raw_file == NULL)
            {
                printf("Could not be created");
                return 1;
            }
        }

        if (jpg_file != NULL)
        {
            fwrite(block, 1, BLOCK_SIZE, jpg_file);
        }
    }

    fclose(raw_file);
    fclose(jpg_file);

}