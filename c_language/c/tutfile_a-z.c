#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("tutmyfile.txt", "a+"); // r,w,a,r+,w+,a+
    char *c = fgetc(ptr);
    printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );

    // char str[64];
    // fgets(str, 40, ptr);
    // printf("The string is \n %s", str);

    FILE *ptr2 = NULL;
    ptr2 = fopen("tuttanny.txt", "a+");
    char *t = fgetc(ptr2);
    printf("The character I read was %c\n", t);
    char str2[64];
    fgets(str2, 40, ptr2);
    printf("The character I read was \n %s", str2);
    fputs("i am the best", ptr2);

    fputc('o', ptr2);
    fputs("this is tanny im from another world", ptr2);

    fclose(ptr);
    fclose(ptr2);
    return 0;
}
