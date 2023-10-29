#include<stdio.h> 
#include<stdlib.h> 
#include <time.h> 
 
typedef struct { 
    int data; 
    struct node *next; 
}node; 
 
//this function to add a node at the end    
node *addAtE(node *head,int data){    
node *temp = malloc(sizeof(node)); 
 
temp->data=data; 
temp->next=NULL; 
 
if (head == NULL){ 
     head =temp; 
}else { 
    node *last =head; 
    while (last->next !=NULL){ 
        last=last-> next; 
    } 
    last->next= temp; 
    return head; 
}} 
 
// the sorting function with no extra itirations 
void sorting (node *head){   
node * temps =head->next; 
node * ptr =temps->next; 
int swap; 
while (temps !=NULL){ 
    ptr=temps->next; 
 
    while (ptr !=NULL){ 
        if (temps->data < ptr->data) { 
        swap=temps->data; 
        temps->data=ptr->data; 
        ptr-> data= swap; 
        } 
 
    ptr = ptr->next; 
    } 
    printf("the new order is :%d \n", temps->data); 
    temps=temps->next; 
}} 
 
 
int main(){ 
node *head= malloc(sizeof(node)); 
head->next=NULL; 
 
srand(time(NULL)); 
 
for (int i=0; i<100; i++){ 
int randx = rand() %100+1; 
addAtE(head, randx); 
printf("the data of the node number %d is :%d\n",i+1 , randx); 
 
} 
sorting(head); 
    return 0;}