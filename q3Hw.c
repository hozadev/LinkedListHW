#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
 
struct student { 
  int number; 
  char name[50]; 
  int age; 
  struct student *next; 
}; 
 
 
struct student *head = NULL; 
 
//function to create a new student node 
struct student *create_student(int number, char *name, int age) { 
  struct student *new_node = malloc(sizeof(struct student)); 
  new_node->number = number; 
  strcpy(new_node->name, name); 
  new_node->age = age; 
  new_node->next = NULL; 
  return new_node; 
} 
 
//function to insert a new node at the beginning 
void insert_student(struct student *new_node) { 
  new_node->next = head; 
  head = new_node; 
} 
 
//function to print the student information 
void print_student_list(struct student *head) { 
  struct student *current = head; 
  while (current != NULL) { 
    printf("Student number: %d\n", current->number); 
    printf("Student name: %s\n", current->name); 
    printf("Student age: %d\n", current->age); 
    printf("\n"); 
    current = current->next; 
  } 
} 
//function to count the number of students 
int count_student(struct student *head) { 
  int count = 0; 
  struct student *current = head; 
  while (current != NULL) { 
    count++; 
    current = current->next; 
  } 
  return count; 
} 
int main() { 
  // Create a linked list of student records 
  struct student *s1 = create_student(1, "Alice", 18); 
  struct student *s2 = create_student(2, "Bob", 19); 
  struct student *s3 = create_student(3, "Carol", 20); 
 
insert_student(s3); 
insert_student(s2); 
insert_student(s1); 
   
   
  // Print the student information to the screen 
  print_student_list(head); 
 
  // Count the number of nodes in the list 
  int student_count = count_student(head); 
 
  // Print the student count to the screen 
  printf("The number of students is: %d\n", student_count); 
 
  return 0; 
}