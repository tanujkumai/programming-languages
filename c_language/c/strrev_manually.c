
// strrev() manually

#include <stdio.h>

int main(void)
{

	char str[100], str1[100];
	int count = 0, m = 0, i;
	printf("enter string = ");
	gets(str);
	// copy string
	for (i = 0; str[i] != '\0'; i++)
	{
		str1[i] = str[i];
	}
	str1[i] = '\0';
	// length calculate
	for (i = 0; str1[i] != '\0'; i++)
	{
		count++;
	}
	count--; // exact location count-1
	// reverse
	for (i = count; i >= 0; i--)
	{
		str[m] = str1[i];
		m++;
	}
	str[m] = '\0';
	printf("after reversing\n");
	puts(str);

	return (0);
}