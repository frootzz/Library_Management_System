#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int read(st** head)
{
    FILE* fp = fopen("Library_Records.txt", "r");

    if(fp == NULL)
    {
        printf("File Not Exists\n");
        return 0;
    }

    char buf[200];

    st* temp = *head;

    while(fgets(buf, sizeof(buf), fp) != NULL)
    {
        st* newnode = malloc(sizeof(st));

        // Try to extract book data from the line
        if(sscanf(buf, "%d | %s | %s | %d ",
                  &newnode->bookid,
                  newnode->bookname,
                  newnode->bookauthor,&newnode->bookqty) == 4)
        {
            newnode->next = NULL;

            if(*head == NULL)
            {
                *head = newnode;
                temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
        }
        else
        {
            // Header / separator / empty line
            free(newnode);
        }
    }

    fclose(fp);
}
