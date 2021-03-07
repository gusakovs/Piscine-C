#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char a[] = {0x01};
	printf("%d", ft_str_is_printable(a));
}
