
#include <stdio.h>
#include <stdlib.h>

void	func(char *s)
{
	*s = 'a';
}

int main(void)
{
	char **tab = malloc(sizeof(char *) * 2);

	tab[0] = malloc(sizeof(4));
	tab[0][0] = 'j';
	tab[0][2] = '\0';

	func(tab[0]);
	printf("%s\n", tab[0]);
}
