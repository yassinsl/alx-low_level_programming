#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
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

int create_file(const char *filename, char *text_content)
{
	int *fp = open(filename,O_WRONLY | O_CREAT |O_TRUNK,0600);
	int dst;
	
		if(!filename || fp == -1)
		return (-1);

		if(text_content)
		{
			dst = write(fd, text_content, _strlen(text_content));
			if(dst == -1)
			{
				fclose(fp);
				return (-1);
			}
		}
	fclose(fp)
return (1);

}
