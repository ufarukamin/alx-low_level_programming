#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
  * create_file - creates a file using filename and content
  * @filename: Name to the file to create
  * @text_content: Content to write into the file
  * Return: 1 on success, -1 on any failure
  */
int create_file(const char *filename, char *text_content)
{
	int file_o, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file_o = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_o < 0)
		return (-1);
	write(file_o, text_content, len);
	close(file_o);
	return (1);
}
