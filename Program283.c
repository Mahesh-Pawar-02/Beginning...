/*
1 : To open existing file
int open(char * File_name, int Mode);

File_name : Name of file that we want to open
Mode : Mode in which we want to open file
        O_RDONLY    : Read mode
        O_WRONLY    : Write mode
        O_RDWR      : Read + Write mode
On success the function will return the integer as File descriptor.
On failure it will return -1.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;

    fd = open("Demo.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);
    }

    return 0;
}