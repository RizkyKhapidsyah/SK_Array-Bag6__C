#include <stdio.h>
#include <conio.h>

int main()
{
	char hello[] = "Halo Manusia!\n";
	int n;

	n = 0;

	while (hello[n] != '\0') {
		putchar(hello[n]);
		n++;
	}

	_getch();
	return(0);
}