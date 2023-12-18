#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int _strlen(char * cont )
{
	int i = 0 ;

	if(cont == NULL)
	return (0);
	while(cont[i])
	i++;
	return (i);
}
int append_text_to_file(const char *filename, char *text_content)
{
	int *fp = open(filenmae,O_WRONLY  | O_APPEND);
	ssize_t yassin;

	if(fp == NULL || fp == -1)
	 return (-1);
	 if(text_content != NULL)
	 {
		yassin = write(fd, text_content, _strlen(text_content));
		if(yassin == -1)
		{
			fclose(fp)
			return(-1)
		}
	 }
fclose(fp);
return (1);
}
