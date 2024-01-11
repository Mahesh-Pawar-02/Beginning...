/*
6 : To delete the file

void unlink(char * file_name);

file_name : name of file that we want to delete permanently
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    unlink("Marvellous.txt");

    return 0;
}