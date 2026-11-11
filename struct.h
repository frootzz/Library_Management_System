#ifndef STRUCT_H
#define STRUCT_H

typedef struct node{
	int bookid;
	char bookname[30];
	char bookauthor[30];
	int bookqty;
	struct node* next;
}st;
typedef struct user{
	int userid,bookid;
	char name[30];
	typedef struct Date {
  	  int day;
   	  int month;
    	  int year;
	}date;

}user;
int id;
#endif
