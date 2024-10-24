// Stack using linked list
#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

struct stack

{

int data;

struct stack "next;
};

struct stack "top = NULL;

void push(int);

void display();

void pop();

int peek();

main()

{

int option, val, next;

clrscr():

do

printf("\n\n***** MAIN MENUE ******);

printf("\n1. Insert an element");

printf("\n2.Delete an element");

printf("\n3. Peek");

printf("\n4. Display the queue");

printf("\n5.Exit");

printf("\n**************************");

printf("\n\n Enter your option:");

scanf("%d",&option);

switch(option)

{

case 1:

printf("enter your number to be pushed onto stack"); 
scanf("%d",&val):

push(val);

break;

case 2:

pop();

break;

case 3:

val = peek();

printf("\n The value stored at the top is: %d", val);

break;

case 4:
display();

break;

}

while(option!=5);

getch();

return 0;

}

void push(int val)

{

struct stack *ptr, ptr = (struct stack*)malloc(sizeof (struct stack *)); ptr -> data =val; {

if (top==NULL)

top = ptr;

top->next=NULL;

}

else

{

ptr->next = top:

top=ptr;

}

void display()

{

ptr = top;

if(top==NULL)

}

struct stack *ptr; printf("\n Stack is empty"); else { while(ptr != NULL) { printf("\n%d",ptr->data); ptr = ptr->next;

void pop()

{

struct stack "ptr;

ptr =top;

if (top==NULL)

printf("\n Stack Underflow");
else

// Stack using linked list
#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

struct stack

{

int data;

struct stack "next

struct stack "top = NULL;

void push(int):

void display();

void pop():

int peek();

main()

(

int option, val,next;

clrscr():

do

printf("\n\n***** MAIN MENUE ******);

printf("\n1. Insert an element");

printf("\n2.Delete an element");

printf("\n3. Peek");

printf("\n4. Display the queue");

printf("\n5.Exit");

printf("\n*");

printf("\n\n Enter your option:");

scanf("%d",&option);

switch(option)

{

case 1:

mpleme

aph.

printf("enter your number to be pushed onto stack"); scanf("%d",&val):

push(val);

break;

case 2:

pop();

break;

case 3:

val = peek();

printf("\n The value stored at the top is: %d", val);

break;

case 4:
display();

break;

}

while(option!=5);

getch();

return 0;

}

void push(int val)

{

struct stack * ptr; 
ptr = (struct stack*)malloc(sizeof (struct stack *)); 
ptr -> data =val; 

if (top==NULL)
{

top = ptr;

top->next=NULL;

}

else

{

ptr->next = top;

top=ptr;

}
}
void display()

{
struct stack *ptr; 
ptr = top;
if(top == NULL)
printf("\n Stack is empty"); 
else 
{ 
while(ptr != NULL) 
{ 
printf("\n%d",ptr->data); 
ptr = ptr->next;
}
}
}

void pop()

{

struct stack * ptr;

ptr =top;

if (top==NULL)

printf("\n Stack Underflow");
else

{

top=top->next;

printf("\n The value being deleted is: %d ",ptr->data); 
free(ptr);

}

}

int peek()

{

return top->data;

}
