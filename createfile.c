#include <stdio.h>

int main()
{
    char filename[] = "test.txt";
    FILE *pF = fopen(filename, "w");
    fprintf(pF, "Chester Nimitz\n");
    fclose(pF);

    fopen(filename, "a");
    fprintf(pF, "Yamamoto\n");
    fclose(pF);

    char response;
    printf("Would you like to delete the file Y/n?\n");
    scanf("%c", &response);
    if (response == 'Y')
    {
        printf("Deleting the file\n");
        if (remove(filename) == 0)
        {
            printf("File %s was deleted\n", filename);
        }
    }
    else
    {
        printf("File %s was kept on disk", filename);
    }

    return 0;
}