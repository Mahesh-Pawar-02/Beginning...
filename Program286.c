/*
3 : To create new regular file

int creat(char *file_name, int permission);

file_name : name of new file
permission : File permissions (0777)

Read :  4
Write : 2
Execute : 1

Owner of file
Group members
Others
 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is succesfully created with fd : %d\n",fd);
    }

    return 0;
}