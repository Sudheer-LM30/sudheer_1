#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};

int choice=1;
struct node *temp,*head,*newnode,*nextnode,*prevnode;

void create(){
	head=NULL;	
	while(choice){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data :");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}	
	printf("wanna continue?");
	scanf("%d",&choice);
	}	
}

void insert_at_beg(){
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data :");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;

}

void insert_at_pos(){
	
	int i=1,pos;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter position :");
	scanf("%d",&pos);
	printf("enter data:");
	scanf("%d",&newnode->data);
	temp=head;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}	
	newnode->next=temp->next;
	temp->next=newnode;
	
}

void insert_at_end(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data :");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
}

void delete_at_beg(){
	if(head==NULL){
		printf("no nodes");
		return;
	}
	temp=head;
	head=head->next;
	free(temp);
}

void delete_at_pos(){
	int pos,i=1;
	temp=head;
	printf("enter position:");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}

void delete_at_end(){
	temp=head;
	while(temp->next!=NULL){
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=NULL;
	}
	else{
		prevnode->next=NULL;
	}
	free(temp);
}

void display(){
	
	temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

int main(){
	int options;
	while(1){
		printf("\n1.creating the list\n");
		printf("\n2.insert at the beginning\n");
		printf("\n3.insert at the position\n");
		printf("\n4.insert at the ending\n");
		printf("\n5.delete at the beginning\n");
		printf("\n6.delete at the position\n");
		printf("\n7.delete at the ending\n");				
		printf("\n8.display the list\n");
		scanf("%d",&options);
		switch(options){
			case 1:
				create();
				break;
			case 2:
				insert_at_beg();
				break;
			case 3:
				insert_at_pos();
				break;
			case 4:
				insert_at_end();
				break;
			case 5:
				delete_at_beg();
				break;
			case 6:
				delete_at_pos();
				break;
			case 7:
				delete_at_end();
				break;	
			case 8:
				display();
				break;
			default:
				printf("incorrect choice");
		}
	}
}
