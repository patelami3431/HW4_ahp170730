#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
main()
{
	int fd1,fd2,fd3;

	if(mkdir("dir1", 0777) == -1)
	{
		printf("Couldn't create the directory dir1! Try again..");
		exit(1);
	}
	chdir("dir1");
	fd1 = open("file10", O_RDWR | O_CREAT, 0644);
	if (fd1 < 0)
	{
		perror("Error in creating file10 in dir1");
		exit(1);
	}
	close(fd1);
	chdir("..");
	if(mkdir("dir2", 0777) == -1)
        {
                printf("Couldn't create the directory dir2! Try again..");
                exit(1);
	}
        chdir("dir2");
        fd2 = open("file20", O_RDWR | O_CREAT, 0644);
        if (fd2 < 0)
        {
                perror("Error in creating file20 in dir2");
                exit(1);
        }
        close(fd2);
        chdir("..");
	fd3 = open("file1", O_RDWR | O_CREAT, 0644);
	if (fd3 < 0)
	{
		perror("Error in creating file1");
		exit(1);
	}
	close(fd3);
	char s[100];
	printf("Creating a soft link in directory: %s\n",getcwd(s,100));
	if ((symlink("/dir2/file20","link1")) == -1)
	{
		printf("Couldn't link to file20");
		exit(1);
	}
	printf("DONE!\n");
}

