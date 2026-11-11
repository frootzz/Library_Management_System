#include<stdio.h>
#include<stdlib.h>
#include"struct.h"

int add(st** head){
	st* newnode=(st*)malloc(sizeof(st));
	printf("Enter the Book id,name,Author:");
	newnode->bookqty=1;
	scanf("%d%s%s",&newnode->bookid,newnode->bookname,newnode->bookauthor);
	newnode->next=NULL;
	if(*head==NULL){
		*head=newnode;
	}
	else{
		st* temp=*head;
		while(temp!=NULL){
			if(temp->bookid==newnode->bookid){
				(temp->bookqty)++;		
				free(newnode);
				return 0;
			}
			temp=temp->next;
		}
		 temp=*head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
