#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *buf = "abcd";
    printf("%p\n", buf);
    printf("%p -> %c\n", buf + 1, *(buf + 1));

    int arr[10] = {1, 2, 3, 4, 5, 6};
    printf("%p\n", arr);
    printf("%p -> %d\n", arr + 1, *(arr + 1));
}