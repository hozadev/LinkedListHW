#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
int record;
char name[50];
struct node *next;
};

void searchByName (struct node *head, char *name){

struct node *current =head;

while (current!=NULL){
    int value=strcmp(current->name,name);
    
if (value==0){

    printf ("the record of the student is : %d", current->record);
}
current= current->next;
}
}

struct node *add_student(struct node *head,int record, char *name){ 
    struct node *ptr , *newname; 
    ptr=head; 
    newname=malloc(sizeof (struct node)); 
    newname->record=record; 
    strcpy(newname->name,name); 
    newname->next=NULL; 
    while(ptr->next!=NULL){ 
        ptr=ptr->next; 
    } 
    ptr->next=newname; 
    return head; 
}

int main(){


struct node *head=malloc(sizeof(struct node)); 
    head->next=NULL; 
 
    add_student(head,100,"mohammed"); 
    add_student(head,80,"mustafa"); 
    add_student(head,50,"ayse"); 
    add_student(head,90,"hakan"); 
char sname[40];

printf("please enter the student name to print the record :\n");
scanf("%s",sname);
searchByName(head,sname);


    return 0;
}