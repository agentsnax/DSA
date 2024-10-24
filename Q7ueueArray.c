#include<stdio.h>
#include<conio.h>
#define MAX 10 
int queue[MAX];

int front = -1,rear = -1;

void insert(void);
int delete_element(void);
int peek(void);

void display(void); 
main()
{
	int option, val; 
	clrscr();
	do
	{

printf("\n\n***** MAIN MENUE *****");

printf("\n1.Insert an element");

printf("\n2.Delete an element");

printf("\n3. Peek");

printf("\n4.Display the queue");

printf("\n5.Exit ");

printf("\n**************************");

printf("\n\n Enter your option :");

scanf("%d",&option);

switch(option)

{

	case 1:
		insert();
		break;

	case 2:
		val = delete_element();
		printf("\n the number that was deleted is:%d", val);
		break;

	case 3:
		val = peek();
		printf("\n the first element in the queue: %d", val);
		break;
	case 4:
		display();
		break;
}

}

while(option!=5);

getch();

return 0;

}

void insert()
{
	int num;
	if (rear == MAX-1)
	{

printf("\n overflow");

return;

}
else if
	(front == -1 && rear == -1)
	front = rear = 0 ;
	else
	rear++;
	printf("\n Enter the number to be inserted in queue:");
	scanf("%d", &num);

	queue[rear]=num;

}

int delete_element()

{

int val;

if(front==-1 || front>rear)

{ 

printf("\n Underflow"); 
return -1;
}
else

{

val = queue[front];

front++;

return val;

}

}

int peek()

{

return queue[front];

}

void display()

{

int i;

printf("\n");

if (front == -1)

printf("empty");

for(i=front;i<=rear;i++)

printf("%d \t", queue[i]);

}