#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    struct stat st;
    if (stat("./README2.md", &st) != 0) {
        perror("failed to stat");
        return 1;
    }
    printf("%d\n", st.st_mode);
    return 0;
}
