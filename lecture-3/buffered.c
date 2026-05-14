#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("./README.md", O_RDONLY);
    char buf1[10 + 1];
    read(fd, buf1, 10);
    close(fd);
    buf1[10] = '\0';

    FILE *f = fopen("./README.md", "r");
    char buf2[10 + 1];
    fread(buf2, sizeof(char), 10, f);
    fclose(f);
    buf2[10] = '\0';

    printf("%s\n ==", buf1);
    printf("%s\n ==", buf2);
}
