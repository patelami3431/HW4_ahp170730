#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
main()
{
	FILE *fd1;
	FILE *fd2;
	FILE *fd3;
	if(mkdir("dir1", 0777) == -1)
	{
		printf("Couldn't create the directory dir1! Try again..");
		exit(1);
	}
	chdir("dir1");
	fd1 = fopen("file10", "w");
	if (fd1 == NULL)
	{
		perror("Error in creating file10 in dir1");
		exit(1);
	}
	fclose(fd1);
	chdir("..");
	if(mkdir("dir2", 0777) == -1)
	{
	       printf("Couldn't create the directory dir2! Try again..");
	       exit(1);
	}
	chdir("dir2");
	fd2 = fopen("file20", "w");
	if (fd2 == NULL)
	{
	       perror("Error in creating file20 in dir2");
	       exit(1);
	}
	fclose(fd2);
	chdir("..");
	fd3 = fopen("file1", "w");
	if (fd3 == NULL)
	{
		perror("Error in creating file1");
		exit(1);
	}
	fclose(fd3);
	char s[100];
	printf("Creating a soft link in directory: %s\n",getcwd(s,100));
	if ((symlink("/dir2/file20","link1")) == -1)
	{
		printf("Couldn't link to file20");
		exit(1);
	}
	printf("DONE!\n");
}
