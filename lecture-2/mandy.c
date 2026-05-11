// TASK: write a program to count the number of lines of a file

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// C Macro
#define filename "./lecture-2/mandy.c"

int main(){
    int fd = open(filename, O_RDONLY);

    int bytes_read = 1;
    int count = 1;

    while(bytes_read > 0) {
        char buf[1];
        bytes_read = read(fd, &buf, 1);
        if buf[0] == '\n'{
            count++;
        }
    }

    printf("%d lines\n", count);
    close(fd);
    
    return 1;
}