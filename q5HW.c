#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
int record;
char name[50];
struct node *next;
};


struct node *searchDelete (struct node *head , char *key ){
struct node *temp ,*ptr ;


temp=head;

while (temp->next!= NULL){
int value=strcmp(key,temp->name);
if (value==0){
    
printf("befor update the next name is :\n %s\n", temp->next->name);
ptr=temp->next;
temp->next=ptr->next;
free(ptr);
printf("After update the next name is :\n %s\n", temp->next->name);

}


    temp=temp->next;
}



    return head;
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

char skey [20];
printf (" please enter the name to delet the next node :\n ");
scanf("%s",skey);
searchDelete(head , skey);


    return 0;
}