#include <stdio.h>

int main()
{
	char string[]= "yes MADAM, i Agree"
	int ch;
	int x=0;

	while(ch(string)!='\0'){
		if(isupper(ch))
			putchar(islower(ch));
		else if(islower(ch))
			putchar(isupper(ch));
		else
				putchar(ch);
	x++;
	}
	return 0;
}
