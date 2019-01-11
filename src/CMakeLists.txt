cmake_minimum_required(VERSION 3.0.0)

set(SRCS
​	cat.c
​	echo.c
	timenow.c
​	)

add_executable(cat cat.c)
add_executable(echo echo.c)
add_executable(timenow timenow.c)
