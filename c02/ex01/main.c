#include <stdio.h>

const 	char	*ft_strncpy(char *dist, char *src, unsigned int n);

int		main(void)
{
	char a[100] = "salut a tous les amis c jojol";
	char b[100];

	printf("%s", ft_strncpy(b, a, 7));
}
