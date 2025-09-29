#include <unistd.h>
#include <stdio.h>
#include "life.h"
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[]) {

	(void)argv;
	if(argc != 4)
		return 1;
	if(argc == 4) {
		putchar('a');
		putchar('\n');
	}
	char *cmds = (char *)calloc(BUFF, sizeof(char));
	//ssize_t read(int fildes, void *buf, size_t nbyte);
	char	*buf = (char *)calloc((BUFF + 1), sizeof(char));
	size_t	nbytes;
	ssize_t bytes_read = 1;
    int fd = 0;
	nbytes = BUFF;

	while(bytes_read != 0) {
		bytes_read = read(fd, buf, nbytes);
		if (bytes_read == -1) {
			// free buf
			return 1;
		}
		buf[bytes_read] = '\0';
		// Reallocate cmds to fit new data
        size_t old_len = ft_strlen(cmds);
        char *new_cmds = (char *)calloc(old_len + bytes_read + 1, sizeof(char));
        // Copy old data
        for (size_t i = 0; i < old_len; i++)
            new_cmds[i] = cmds[i];
        // Append new data
        for (ssize_t i = 0; i < bytes_read; i++)
            new_cmds[old_len + i] = buf[i];
        free(cmds);
        cmds = new_cmds;
	}

	for (int i = 0; cmds[i] != '\0'; i++) {
		putchar(cmds[i]);
	}
	putchar('\n');
	free(buf);
	free(cmds);
	return 0;
}