# get_next_line
I got it

An appoinment was to create function

int    get_next_line(int fd, char **line)

that will read from file specified with fd and save to *line exactly one line, living the rest in buffer, if it read more. So the ammount of symbols to be read is cpecified in [get_next_line]() with define BUFF_SIZE. Seems not complicated at all, right? Well, it was until restriction and edge cases. I was only able to use 

open

write

read

close

malloc

free

At the end, it is messy but stable, so i let it live. It supports numerous file descriptors at once, which means that it is saving the rest for each fd in eparated node and when it's time, it pulls it out.
