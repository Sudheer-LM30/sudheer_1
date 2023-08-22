#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include<string.h>
#include<stdio.h>

pthread_t thread_id1;

void display_alive(int threadid){

	while(1){
	
		printf("\n %d Thread alive\n", threadid);
		
		sleep(2);
		
	}
}

void *Thread1(void *vargp){

	int sockfd;
	
	char *ip = "127.0.5.1";
	
	struct sockaddr_in addr;
	
	char buffer[1024];

	socklen_t addr_size;
	
	int number;
	
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	
	memset(&addr, '\0', sizeof(addr));
	
	addr.sin_family = AF_INET;
	
	addr.sin_port = htons(8080);
	
	addr.sin_addr.s_addr = inet_addr(ip);
	
	sendto(sockfd, buffer, 1024, 0, (struct sockaddr*)&addr, sizeof(addr));
	
	addr_size = sizeof(addr);
			  
	while(1){
			  
		recvfrom(sockfd, &number, sizeof(number),0,(struct sockaddr*)&addr, &addr_size);
		
		printf("Data recieved: %d\n", number);
		
		display_alive(1);
			  
	}
			  
}


int main(){

	//pthread_t thread_id1, thread_id2;
	
	//int sockfd;
	
	//struct sockaddr_in addr;
	
	//char buffer[1024];

	//socklen_t addr_size;
	
	//int number;
	
	//sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	
	//memset(&addr, '\0', sizeof(addr));
	
	//addr.sin_family = AF_INET;
	
	//addr.sin_port = htons(8080);
	
	//addr.sin_addr.s_addr = inet_addr("127.0.5.1");
	
	//sendto(sockfd, buffer, 1024, 0, (struct sockaddr*)&addr, sizeof(addr));
	
	//addr_size = sizeof(addr);
			  
	//while(1){
			  
		//recvfrom(sockfd, &number, sizeof(number),0,(struct sockaddr*)&addr, &addr_size);
		
		//printf("Data recieved: %d\n", number);
		
		//display_alive(2);
			  
	//}
	
	pthread_create(&thread_id1, NULL, Thread1,NULL);
	
	printf("thread 1 is created \n");
	
	pthread_detach(thread_id1);
	
	display_alive(0);
	
        return 0;
                
}
