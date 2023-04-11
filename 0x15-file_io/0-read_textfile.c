#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - reads a text file and prints it
  * to the POSIX standard output.
  * @filename: the file to use
  * @letters: number of letters to reads and prints
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_o, file_r, file_w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char *) * letters);
	if (buff == NULL)
		return (0);
	file_o = open(filename, O_RDONLY);
	if (file_o < 0)
	{
		free(buff);
		return (0);
	}
	file_r = read(file_o, buff, letters);
	if (file_r < 0)
	{
		free(buff);
		return (0);
	}
	file_w = write(STDOUT_FILENO, buff, file_r);
	free(buff);
	close(file_o);
	if (file_w < 0)
		return (0);
	return (file_w);
}
