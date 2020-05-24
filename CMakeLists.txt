cmake_minimum_required(VERSION 3.16)
project(printf C)
set(SOURCE_FILES
        ft_printf.c
        main.c
        )
set(HEADERS
        header.h sum_double.c)

file(GLOB CPPS "libft/*.c"
        CPPH "libft/*.h")

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADERS} ${CPPS} ${CPPH})
