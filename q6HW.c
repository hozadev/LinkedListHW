#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {   
int record;
char name[50];
struct node *next;
};


void longest(struct node *head){

struct node *temp =head;

int len=strlen(temp->name);
char lname[50];
strcpy(lname,temp->name);

while (temp->next!= NULL){
temp= temp->next;
if (strlen(temp->name)>len){
len = strlen(temp->name);
strcpy(lname,temp->name);
}

}
printf("the longest name is %s with the length of %d charecter",lname,len);




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
 
    add_student(head,100,"abdullah"); 
    add_student(head,80,"mustafa"); 
    add_student(head,50,"ayse"); 
    add_student(head,90,"hakan"); 
    add_student(head,90,"ege"); 

longest(head);
    return 0;
}