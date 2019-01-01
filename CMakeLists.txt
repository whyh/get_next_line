cmake_minimum_required(VERSION 3.12)
project(GetNextLine C)

set(CMAKE_C_STANDARD 99)

AUX_SOURCE_DIRECTORY(libft LIBA)

add_executable(GetNextLine ${LIBA}
        libft/libft.h
        get_next_line.h
        main.c
        get_next_line.c)

link_libraries(libft/libft.a)