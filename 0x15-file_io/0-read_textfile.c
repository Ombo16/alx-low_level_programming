#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

ssize_t _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (filename == 0)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    buffer = malloc(letters);
    if (buffer == 0) {
        close(fd);
        return 0;
    }

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        close(fd);
        free(buffer);
        return 0;
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1) {
        close(fd);
        free(buffer);
        return 0;
    }

    close(fd);
    free(buffer);

    return bytes_written;
}

