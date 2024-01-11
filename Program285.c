/*
2 : To close file
void close(int fd);

fd : File descriptor which was returned by open or creat system call

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Program283.c",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);
        close(fd);
        printf("File gets succesfully closed.");
    }

    return 0;
}