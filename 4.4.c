// C program to Open a File,
// Read from it, And Close the File
#include <stdio.h>
#include <string.h>

int main()
{

    // Declare the file pointer
    FILE *filePointer;

    // Declare the variable for the data to be read from
    // file
    char dataToBeRead[50];

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("GfgTest.c", "r");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL)
    {
        printf("GfgTest.c file failed to open.");
    }
    else
    {
        printf("The file is now opened.\n");

        // Read the dataToBeRead from the file
        char s[5];
        while (fgets(s, sizeof(s) / sizeof(s[0]), filePointer))
        {
            printf("%s", s);
        }

        fclose(filePointer);
    }
}