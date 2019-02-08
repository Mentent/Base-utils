// Copyright (C) 2018,2019.
// Mentent. All rights reserved.

#include <config.h>
#include <stdio.h>

int main(int argc,char *argv [])
{
    if(argc==1)
    {
	    while(1)
	    {
            printf("y\n");
	    }
    }
    else
    {
        while(1)
        {
            puts(argv[1]);
        }
    }
	return 0;
}
