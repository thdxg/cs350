#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define filename "./lecture-3/test.txt"
#define BUFFER_SIZE 100

int main() {
    int fd  = open(filename, O_RDONLY);

    char buffer[BUFFER_SIZE];
    
    
}