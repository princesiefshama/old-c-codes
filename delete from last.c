#include <stdio.h>
#include <stdlib.h>

//create node struction
struct node
{
    int data;
    struct node* next;

};
//create head
struct node* head = 0;

//create linked list
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

//function for insert new first element
void insertBegin (int val)
{
    struct node* newnode = (struct node*)malloc (sizeof(struct node));
    newnode ->data=val;
    newnode ->next=head;
    head = newnode;

}

//function for display all elements in linked list
void displayElemenet (int n)
{
    struct node* temp = head;
    for (int i =0;i<n;i++)
    {
        printf("\nelement number %d = %d",i+1,temp->data);
        temp=temp->next;

    }
}

//function for display only one certain element in linked list
void certainElement (int n)
{
    struct node* temp = head;
    int i;
    for ( i =1;i<n;i++)
    {

        temp=temp->next;

    }
    printf("\nelement number %d = %d",i,temp->data);
}

//function for insert new element in place as user choose
void insertElement (int n,int val)
{
    struct node* newnode = (struct node*)malloc (sizeof(struct node));
    newnode ->data=val;
    newnode ->next=0;
    struct node* temp = head;

    int i;
    for (i=0;i<(n-2);i++)
    {
        temp=temp->next;

    }
    newnode->next=temp->next;
    temp->next= newnode;



}
void deleteFirst (void)
{
    struct node* temp = head;
    head = head->next;
    free(temp);

}

void deleteElement(int n)
{
    struct node* temp = head;
    struct node* mytemp = head;

    if (n =1 )
    {
        deleteFirst();
    }
    else
    {


    for (int i = 1;i<n-1;i++)
    {
        temp = temp->next;

    }
    mytemp = temp->next;
    temp =mytemp->next;
    free(mytemp);
    }
}

void deleteFromLast(int n)
{
    struct node* temp = head;
    struct node* mytemp = head;
    struct node* temp1 = head;
    int i =0;
    while (temp->next!=0)
    {
        i++;
        temp = temp->next;
        if (i >n)
        {

            mytemp=mytemp->next;
            printf("  %d",mytemp->data);
        }

    }
    printf("\n\n%d",mytemp->data);
    temp1 = mytemp->next;
    mytemp->next =temp1->next;
    free(temp1);



}

int main()
{
    int x[100],y,z,k;
    printf("enter number of elements = ");
    scanf("%d",&y);
    int i;
    //enter value for each elements
    for (i=0;i<y;i++)
    {
        printf("enter value of element %d =",i+1);
        scanf("%d",&x[i]);
        createNode(x[i]);

    }

    #if 0
    //adding new element part
    printf("\nenter the new first value = ");
    scanf("%d",&z);

    insertBegin(z);

    displayElemenet(y+1);

    //certain element display part
    printf("\nenter the number of element you want to display = ");
    scanf("%d",&z);
    //test part
    if (z<=y+1)
    {
        certainElement(z);
    }
    else
    {
        printf("there is no element in place %d",z);
    }


    //inserting new element
    printf("\nenter the place you want to insert element in = ");
    scanf("%d",&z);

    //test part
    if (z<=y+1)
    {
        printf("\nenter the value = ");
        scanf("%d",&k);
        insertElement(z,k);
        displayElemenet(y+2);
    }
    else
    {
        printf("out of range ");
    }




    printf("enter element you want to delete");
    scanf("%d",&z);
    if (z<= y)
    {


    deleteElement(z);
    }
    else
    {
        printf("error in input out of range");
    }

    #endif // 0
    printf("enter the number of element to delete from last =");
    scanf("%d",&z);
    deleteFromLast(z);

    displayElemenet(y-1);
    return 0;

}
