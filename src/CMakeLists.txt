# Distributed under Apache License 2.0.  See accompanying
# file LICENSE for details.

cmake_minimum_required(VERSION 3.0.0)

set(SRCS
​	cat.c
	yes.c
​	echo.c
	timenow.c
​	)

add_executable(cat cat.c)
add_executable(echo echo.c)
add_executable(timenow timenow.c)
add_executable(yes yes.c)
