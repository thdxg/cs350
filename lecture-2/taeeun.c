#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

#define filename "./taeeun.c"

int main() {
    int fd = open(filename, O_RDONLY | O_CREAT, 0644);

    int ctr = 0;
    int read_res = 1; 
    char buf[1];

    while ((read_res = read(fd, &buf, 1))> 0) {
        if (buf[0] == '\n'){
            ctr++;
        }
    };

    // if (strstr(buf, "\n")) {
    //     ctr++;
    // }

    close(fd); 
    printf("Found %d lines in %s\n", ctr, filename); 
    return 1;
}
