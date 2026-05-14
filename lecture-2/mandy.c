#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// Write a program that reads its own code and writes it to a new file. So it copies the source code, essentially.
// Use read and write functions.

// C Macro
#define filename "./lecture-2/mandy.c"
#define destination "./lecture-2/mandy_result.c"

int main() {
    int fd = open(filename, O_RDONLY);
    int result_fd = open(destination, O_WRONLY); 
    
    char *buf1; // 0 capacity. so can't read anything into this buffer. same as char buf1[0]
    char buf2[1000]; // 1000 capacity. buf2 is a pointer to the first element in the array.
    // read(fd, &buf, 1000);

    // write(fd, &buf, 1000);

    close(fd);

}

// int main(){
//     int fd = open(filename, O_RDONLY);

//     int bytes_read = 1;
//     int count = 1;

//     while(bytes_read > 0) {
//         char buf[1];
//         bytes_read = read(fd, &buf, 1);
//         if buf[0] == '\n'{
//             count++;
//         }
//     }

//     printf("%d lines\n", count);
//     close(fd);
    
//     return 1;
// }