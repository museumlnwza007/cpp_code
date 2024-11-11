#include <string.h>
int main (void)
{
	char buf1 [] = "nanometer", buf2[] = "nanometer";
	int ptr;
	printf("buffer 1 : \"%s\"\n",buf1);
	printf("buffer 2 : \"%s\"\n",buf2);
	ptr = strcmp(buf2, buf1);
	if(ptr == 0)
		printf("buffewr 2 is equal to buffer 1\n")
	printf("lenght of buffer 1 : %d\n" strlen(buf1));
	return(0)
}
