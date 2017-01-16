#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

int
main(void)
{   
	char buffer[128];
    size_t count=100;
	fd_set rfds;
	struct timeval tv;
	int retval;
	
	while(1){
	   
	   /* Watch stdin (fd 0) to see when it has input. */
	   FD_ZERO(&rfds);
	   FD_SET(0, &rfds);
	   

	   /* Wait up to five seconds. */
	   tv.tv_sec = 1;
	   tv.tv_usec = 0;

	   retval = select(1, &rfds, NULL, NULL, &tv);
	   /* Don't rely on the value of tv now! */

	   if (retval == -1)
		   perror("select()");
	   else if (retval){
			printf("retval : %d\n",retval);
		   	read(0, buffer, count);
			printf("keyboard input : %s\n",buffer);
		   /* FD_ISSET(0, &rfds) will be true. */
	   }
	   //else
		   //printf("No data within one seconds.\n");

	}
}

