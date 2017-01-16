#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <syslog.h>
#include <sys/time.h>

int main(int argc, char *argv[])
{
    // var
    int listenfd = 0, connfd = 0;
    struct sockaddr_in serv_addr;

    char recv_buff[1024];
    time_t ticks;

    memset(recv_buff, '0', sizeof(recv_buff));

    // init syslog
    setlogmask (LOG_UPTO (LOG_NOTICE));
    openlog ("miniserver", LOG_CONS|LOG_PID|LOG_NDELAY, LOG_LOCAL1);

    // init socket to get a file descriptor
    listenfd = socket(AF_INET, SOCK_STREAM, 0);

    // configure server to listen message comming from in port 5000
    memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5000);

    // bind and listen
    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
    listen(listenfd, 10);

    // listen
    printf("Server is listening...\n");
	char buffer[128];
    size_t count=100;
	fd_set rfds;
	struct timeval tv;
	int retval;
    while (1)
    {
	   
		/* Watch stdin (fd 0) to see when it has input. */
	   FD_ZERO(&rfds);
	   FD_SET(0, &rfds);
	   FD_SET(listenfd, &rfds);
	   

	   /* Wait up to five seconds. */
	   tv.tv_sec = 1;
	   tv.tv_usec = 0;

	   retval = select(1, &rfds, NULL, NULL, &tv);
	   /* Don't rely on the value of tv now! */

	   if (retval == -1)
		   perror("select()");
	   else if (retval){
			if (FD_ISSET(0, &rfds)){			
			   	read(0, buffer, count);
				printf("keyboard input : %s\n",buffer);
			}
			else if(FD_ISSET(listenfd, &rfds)){
				connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
				int bytes = read(connfd, recv_buff, sizeof(recv_buff)-1);

				if (bytes > 0)
					close(connfd);
            	//syslog(LOG_NOTICE, "Message received: %s", recv_buff);
				printf("Message received: %s", recv_buff);
				fflush(stdout);
			}
				

	   }
	   //else
		   //printf("No data within one seconds.\n");

		


    }

    close(listenfd);
    closelog();
}
