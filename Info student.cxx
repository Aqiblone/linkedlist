#include<stdlib.h>

#include<string.h>

#include<stdio.h>

struct Student

{

int rollnumber;

char name[100];

char phone[100];

float percentage;

struct Student *next;

}* head;

void insert(int rollnumber, char* name, char* phone, float percentage)

{

struct Student * student = (struct Student *) malloc(sizeof(struct Student));

student->rollnumber = rollnumber;

strcpy(student->name, name);

strcpy(student->phone, phone);

student->percentage = percentage;

student->next = NULL;

if(head==NULL){

// if head is NULL

// set student as the new head

head = student;

}

else{

// if list is not empty

// insert student in beginning of head

student->next = head;

head = student;

}

}

void search(int rollnumber)

{

struct Student * temp = head;

while(temp!=NULL){

if(temp->rollnumber==rollnumber){

printf("Roll Number: %d\n", temp->rollnumber);

printf("Name: %s\n", temp->name);

printf("Phone: %s\n", temp->phone);

printf("Percentage: %0.4f\n", temp->percentage);

return;