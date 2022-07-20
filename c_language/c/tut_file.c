#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "tanuj is good boy";

    // ****** Reading a file ******
    // ptr = fopen("tanny.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has : %s\n", string);

    // // ****** Writing a file ******
    // ptr = fopen("myfile.txt", "w");//rewrite a file from start
    // fprintf(ptr, "%s", string);

    // ****** Append a file ******
    ptr = fopen("tanny.txt", "a"); // add content to previous file content
    fprintf(ptr, "%s", string);

    fclose(ptr);

    return 0;
}
