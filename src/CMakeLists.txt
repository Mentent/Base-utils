cmake_minimum_required(VERSION 3.0.0)

set(SRCS
        cat.c
        yes.c
        echo.c
        sleep.c
        timenow.c
)

add_executable(yes yes.c)
add_executable(cat cat.c)
add_executable(echo echo.c)
add_executable(timenow timenow.c)
add_executable(sleep sleep.c)
