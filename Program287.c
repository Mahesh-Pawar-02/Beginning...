/*
4 : To write the data into the file

int write(int fd, char *Buffer, int size);

Buffer : Its a base address of character array which contains the data that we want to write
size : Number of bytes that we want to write

return value is number of bytes succesfully written into the file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Logic Building with Industrial Project Development";

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = write(fd,Arr,14);
        printf("%d bytes gets succesfully written into the file\n",iRet);

        close(fd);
    }

    return 0;
}