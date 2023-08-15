#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char **argv){

	int sockfd;
	
	char *ip = "127.0.5.1";
	
	struct sockaddr_in server_addr, client_addr;
	
	char buffer[1024];
	
	int number;
	
	socklen_t addr_size;
	
	int n;
	
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	
	if (sockfd < 0){
	
		perror("[-]socket error");
		
		exit(1);
		
	}
	
	else{
	
		printf("socket created \n");}
		
		memset(&server_addr, '\0', sizeof(server_addr));
		
		server_addr.sin_family = AF_INET;
		
		server_addr.sin_port = htons(8080);
		
		server_addr.sin_addr.s_addr = inet_addr(ip);
		
		n = bind(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr));
		
		if (n < 0) {
		
			perror("[-]bind error");
			
			exit(1);
			
		}
		
		addr_size = sizeof(client_addr);
		
		recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr*)&client_addr, &addr_size);
		
		while(1){
		
			printf("enter the data: ");
			
			scanf("%d",&number);
			
			sendto(sockfd, &number, sizeof(number), 0, (struct sockaddr*)&client_addr, sizeof(client_addr));
			
		  	printf("Data send: %d\n", number);
		  	
		}
		
  		return 0;
  
}