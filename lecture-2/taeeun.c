#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

#define filename "./lecture-2/taeeun.c"

int main() {
    int fd = open(filename, O_RDONLY | O_CREAT, 0644);

    char content[100];
    int ctr = 0;
    int read_res = 1; 
    while (read_res > 0) {
        read_res = read(fd, &buf, 1);  
        if read_res > 0 && buf[0] == '\n'{
            ctr++;
        }

        strncat(content, buf, read_res);
    };

 
    
    printf("Content of %s:\n%s\n", filename, content);
    // if (strstr(buf, "\n")) {
    //     ctr++;
    // }

    close(fd); 
    // printf("Found %d lines in %s\n", ctr, filename); 
    return 1;
}