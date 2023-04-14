#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * desc_error - displays error
 * @err_val: error
 * @_file: file_name
 * Return: ......
 */
int desc_error(int err_val, const char *_file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", _file);
	return (err_val);
}

/**
 * cp_helper - copies from src file to dest
 * @src: source file
 * @dest: destination file
 * Return: ......
 */
void cp_helper(const char *src, const char *dest)
{
	int from_o, to_o, file_r, file_w;
	char buff[1024];

	from_o = open(src, O_RDONLY);
	if (src == NULL || from_o < 0)
		exit(desc_error(98, src));
	to_o = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == NULL || to_o < 0)
		exit(desc_error(99, dest));
	file_r = read(from_o, buff, 1024);
	if (file_r < 0)
		exit(desc_error(98, src));
	while (file_r > 0)
	{
		file_w = write(to_o, buff, file_r);
		if (file_w < 0)
			exit(desc_error(99, dest));
		file_r = read(from_o, buff, 1024);
		if (file_r < 0)
			exit(desc_error(98, src));
	}
	if (file_r < 0)
		exit(desc_error(98, src));
	if (close(from_o) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_o);
		exit(100);
	}
	if (close(to_o) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_o);
		exit(100);
	}
}

/**
 * main - copies files
 * @argc: number of passed arguments
 * @argv: pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_helper(argv[1], argv[2]);
	return (0);
}
