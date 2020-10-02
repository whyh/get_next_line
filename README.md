# get_next_line
### I got it

```c
int    get_next_line(int fd, char **line);
```
Reads the next line from file specified with `fd` and saves it to `*line`


Used just 3 standard C library functions
```c
ssize_t read(int fd, void *buf, size_t count);
void    *malloc(size_t size);
void    free(void *ptr);
```

## Features

Can be optimized for small and large files by tweaking the number of symbols to be read with one call of `read` function. Just change the [BUFF_SIZE](get_next_line.h) define


Supports multiple file descriptors, allowing you to call `get_next_line` for a bunch of different files in one execution


Stress tested on many, many examples and against edge cases






