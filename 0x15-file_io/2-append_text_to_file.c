#include "main.h"

/**
 * append_text_to_file - It appends a text at the end of a file.
 * @filename: It is a pointer to the name of the file.
 * @text_content: It is the string to add to the end of the file.
 *
 * Return: -1 if filename is NULL of the function fails.
 *         -1 if the file does not exist the user lacks write permissions.
 *         1 if success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
