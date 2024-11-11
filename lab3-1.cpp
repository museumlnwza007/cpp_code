#include <stdio.h>
#include <string.h>
int main (void)
{
	char str1 [30] = "My Birthday ";
	char str2 [30] = "18 August 1991";
	char str3 [30];
	strcpy(str3, str1);
	strcat(str1, str2);
	printf("str1 = %s\n", str1);
	printf("str3 = %s\n", str3);
	return(0);
}