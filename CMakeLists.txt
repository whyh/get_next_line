cmake_minimum_required(VERSION 3.13)

project(get_next_line)

set(CMAKE_C_STANDARD 99)

AUX_SOURCE_DIRECTORY(libft LIBFT)

add_executable(
        get_next_line ${LIBFT}
        get_next_line.c
        get_next_line.h
        main.c)
