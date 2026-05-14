#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define PATH_MAX 200
#define target_path "./copied.c"
#define buffer_size 10

int main() {
  char path[PATH_MAX];
  char cwd[PATH_MAX];
  if (getcwd(cwd, sizeof(cwd)) != NULL) {
    sprintf(path, "%s/%s", cwd, __FILE__);
    printf("%s\n", path);
  } else {
    perror("getcwd() error");
    return 0;
  }

  int source_fd = open(path, O_RDONLY);
  // it removes the content and restarts file if specified O_CREAT
  int target_fd = open(target_path, O_RDWR | O_CREAT, 0644);

  char buf[buffer_size];
  int bytes_read = 1;
  while ((bytes_read = read(source_fd, &buf, buffer_size)) > 0) {
    int bytes_written = write(target_fd, buf, buffer_size);
    if (bytes_written < 0) {
      perror("write");
    }
  }
  if (bytes_read < 0) {
    perror("read");
  }

  printf("successfully copied to %s\n", target_path);
  return 1;
}

// Write a program that reads its own code and writes it to a new file. So it
// copies the source code, essentially. Use read and write functions.

// Level 2 (optional): make the program work for arbitrarily long files.
