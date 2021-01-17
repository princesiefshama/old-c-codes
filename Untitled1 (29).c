#include <stdio.h>
#include <stdlib.h>

int x = 0;

struct node
{
    int data;
    struct node* next;

};


struct node* head = 0;

void lastElement (void)
{

    struct node* temp = head;
    int z=1;
    int i=0,j;
    int *a[100];

    while (z)
    {
        a[i]=temp;
        for (j=0;j<i;j++)
        {
            if (a[j]==temp->next)
            {

                z=0;
                break;
            }
        }
        i++;
        if (z==0 )
        {
            continue;
        }

        temp=temp->next;


    }
    printf("\n\nlast address = %d     last element = %d    number of elements = %d ",temp,temp->data,i);
    temp=temp->next;
    printf("\n\nrepeating start element = address %d    value %d ",temp,temp->data);

}

void rotatelink (int n)
{
    x = rand()%(n+1);
    printf("\n\n%d repeating number",x);
    struct node* temp = head;
    struct node* mytemp = head;
    for (int i =0;temp->next!=0;i++)
    {
        temp= temp->next;
        if (i<x)
        {
            mytemp= mytemp->next;
        }

    }
    printf("\n\n%d last real element",temp->data);
    printf("\n%d start repeating element",mytemp->data);
    temp->next=mytemp;


}


void createNode (int val)
{

    struct node* newnode = (struct node*)malloc (sizeof(struct node));
    newnode ->data=val;
    newnode ->next=0;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        struct node* temp = head;
        while (temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;


    }

}

void displayElemenet (int n)
{
    struct node* temp = head;
    for (int i =0;i<n;i++)
    {
        printf("\nelement number %d = %d",i+1,temp->data);
        temp=temp->next;

    }
}




int main()
{
    int y,z;
    printf("enter number of elements = ");
    scanf("%d",&y);
    if ((y<=100)&&(y>0))
    {


    int i;
    for (i=0;i<y;i++)
    {

        createNode(i+1);
    }
    displayElemenet(y);

    rotatelink(y);

    lastElement();
    }
    else
    {
        printf("out of range");
    }

}

