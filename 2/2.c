#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
int front = -1;
int rear = -1;
int q[SIZE];
void insert();
void del();
void display();
void main()
{
    int choice;

    do
    
    {
        printf("\n================");
        
        printf("\nMenu\n");
        
        printf("================");

        printf("\n1.Insert");
        printf("\n2. Delete");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            display();
            break;
        case 2:
            del();
            display();
            break;
        case 3:
            display();

            break;
        case 4:
            printf("End of Program.	!!!!");
            exit(0);
        }
    } while (choice != 4);
}

void insert()
{
    int no;
    printf("\nEnter No.:");
    scanf("%d", &no);

    if (rear < SIZE - 1)
    {
        q[++rear] = no;
        if (front == -1)
            front = 0; // front=front+1;
    }
    else
    {
        printf("\nQueue overflow");
    }
}

void del()
{
    if (front == -1)
    {
        printf("\n Queue Underflow");
        return;
    }
    else

    {
        printf("\nDeleted Item: --> %d\n", q[front]);
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is empty.	");
        return;
    }
    for (i = front; i <= rear; i++)
        printf("\t%d", q[i]);
}
