#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

// C Macro
#define filename "./lecture-2/README.md"

// bitwise operators
// &  1 & 1 = 1
// |  1 | 0 = 1
// ^  1 ^ 0 = 1

/**
 * O_RDONLY: 0000
 * O_WRONLY: 0001
 * O_RDWR:   0010
 * O_CREAT:  0100
 * 
 * O_WRONLY | O_CREAT = 0101
 * 
 * Octal (base 8, each digit is 0 - 7)
 * 0644: 110 100 100
 *       rw- r-- r--
 */

int main() {
    int fd = open(filename, O_RDWR | O_CREAT, 0444);

    // read one character at a time until none is read
    // check if the character is '\n'

    int count = 0;
    char buf[1];
    while (read(fd, &buf, 1) > 0) {
        if (buf[0] == '\n') {
            count++;
        }
    }

    printf("%d lines\n", count);
    close(fd);
}




// TASK: write a program to count the number of lines of a file
// HINT: a newline character is '\n'


// write a program that reads all file, but uses only the exact amount of buffer
// and it can print out the entire buffer at the end




