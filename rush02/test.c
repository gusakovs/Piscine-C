#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	size_t lines, j;

	j = 0;
	lines = 0;
	char buf[693];
	int fd = open("./numbers.dict", O_RDONLY);
	
	read(fd, buf, 691);
	buf[692] = '\0';
	
	while (buf[j])
	{
		if(buf[j] == '\n')
			lines++;
		j++;
	}
	
	printf("%zu", lines);	

	close(fd);

	return (0);
}
