#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
  * append_text_to_file - creates a file using filename and content
  * @filename: Name of the file to append to
  * @text_content: Content to append into the file
  * Return: 1 on success, -1 on any failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_o, file_w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file_o = open(filename, O_RDWR | O_APPEND);
	if (file_o < 0)
		return (-1);
	file_w = write(file_o, text_content, len);
	close(file_o);
	if (file_w < 0)
		return (-1);
	return (1);
}
