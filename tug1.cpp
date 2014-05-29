#include<stdio.h>
struct node
{
       int data;
       int add;
       struct node *next;
}*front,*rear;
int flag,c;
int fun(int item)
{
     struct node *temp,*temp2,*r,*p,*q;
      int k,i;
     r=(struct node*)malloc(sizeof(struct node));
     temp=(struct node*)malloc(sizeof(struct node));
     r->next=NULL;
     temp->data=item;
     temp->add=0;
     temp->next=NULL;
     c++;
     //rear->next=r;
     //printf("hi");
  //   scanf("%d",&k);
     if(front==NULL)
     {
                    front=temp;
                    rear=front;
                 //   rear->next=r;
            //        c++;
                //    temp2=(struct node *)malloc(sizeof(struct node));
                  //  temp->
     }
     else if(front->data>temp->data)
     {
          temp->next=front;
          front=temp;
          //c++;
     }
     else if(front->data==temp->data)
     {
          flag=1;
          return 1;
     }
     else
     {
           p=front;
         while(p->next!=NULL&&p->next->data<temp->data)
         {
                                             p=p->next;
         }
         if(p->next&&(p->next->data==temp->data))
         {
                                      flag=1;
                                      return 1;
         }
         if(p->next==NULL)
         {
                       temp->next=p->next;
                       p->next=temp;
                       rear=temp;
                       //c++;
                       //r=rear;
          }
          else
          {
               temp->next=p->next;
                       p->next=temp;
                       //c++;
          }

     }
      p=front;
      //printf("hi");
  // scanf("%d",&k);
  while(p!=NULL)
  {
                if(p->data!=temp->data&&p->add==0)
                {
                                                 temp2=(struct
node*)malloc(sizeof(struct node));

temp2->data=p->data+item;

temp2->next=NULL;

temp2->add=1;
                                                                        q=p;

while(q->next!=NULL&&q->next->data<temp2->data)
                                                                        {

q=q->next;
                                                                        }

if(q->next==NULL)
                                                                        {

temp2->next=q->next;

q->next=temp2;

rear=temp2;
                                                                        }
                                                                        else
if(q->data==temp2->data)
                                                                        {

flag=1;

return 1;
                                                                        }
                                                                        else
                                                                        {

temp2->next=q->next;

q->next=temp2;

}
                }
                p=p->next;
  }



      /*for(i=1;i<=c;i++)
      {
                       if(p->data!=item)
                       {
                         temp2=(struct node*)malloc(sizeof(struct node));

temp2->data=p->data+item;

temp2->next=NULL;
                                                                        q=p;

while(q->next!=NULL&&q->next->data<temp2->data)
                                                                        {

q=q->next;
                                                                        }

if(q->next==NULL)
                                                                        {

temp2->next=q->next;

q->next=temp2;

rear=temp2;
                                                                        }
                                                                        else
                                                                        {

temp2->next=q->next;

q->next=temp2;

}

//rear->next=temp2;

//rear=rear->next;

//free(temp2);
                         }
                         p=p->next;
      }*/
      //printf("hiii");
    //scanf("%d",&k);
      p=front;
      while(p!=NULL)
      {
                   p->add=0;
                 p=p->next;
                   // p=p->next;
                   //scanf("%d",&k);
      }
      p=front;
      while(p!=NULL)
      {
                   if(p->next&&(p->data==p->next->data))
                   flag=1;
                 //  printf("%d ",p->data);
                   p=p->next;

                   // p=p->next;
                   //scanf("%d",&k);
      }
}
/*void fun(int item)
{
     struct noode *temp,*temp2,*r;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->data=item;
     temp->next=NULL;
     r=rear;
     if(front==NULL)
     {
                    front=temp;
                    rear=front;
                //    temp2=(struct node *)malloc(sizeof(struct node));
                  //  temp->
     }
     else
     {
                    p=front;
                    r=rear;
                    if(temp->data<front->data)
                    {
                           temp->next=front;
                           front=temp;
                             temp2=(struct node*)malloc(sizeof(struct
node));
                           temp2->data=p->data+item;
                           temp2->next=NULL;
                           rear->next=temp2;
                           rear=rear->next;
                           free(temp2);
                    }
                    else if(temp->data==front->data)
                    {
                         flag=1;
                    }
                          // p=front;

                                         temp2=(struct
node*)malloc(sizeof(struct node));

temp2->data=p->data+item;

temp2->next=NULL;

rear->next=temp2;

rear=rear->next;

free(temp2);

                           while(p->next!=r&&p->next->data<temp->data)
                           {
                              temp2=(struct node*)malloc(sizeof(struct
node));
                               temp2->data=p->data+item;
                           temp2->next=NULL;
                           rear->next=temp2;
                           rear=rear->next;
                           p=p->next;
                           free(temp2);
                           }
                           if(p->next==r)
                           {
                                         if(p->next->data<temp->data)
                                         {

temp->next=r->next;

r->next=temp;

temp2=(struct node*)malloc(sizeof(struct node));

temp2->data=r->data+item;

temp2->next=NULL;

rear->next=temp2;

rear=rear->next;

free(p);
                                          }
                                          else if(p->next->data==temp->data)
                                          {
                                               flag=1;
                                          }
                                          else
                                          {

temp->next=p->next;

p->next=temp;

temp2=(struct node*)malloc(sizeof(struct node));

temp2->data=r->data+item;

temp2->next=NULL;

rear->next=temp2;

rear=rear->next;
                                          }
                           }
                           else
                           {

                           temp->next=p->next;
                           p->next=temp;
                           temp2=(struct node*)malloc(sizeof(struct node));

temp2->data=p->data+item;

temp2->next=NULL;

rear->next=temp2;

rear=rear->next;

                           while(p->next!=r)
                           {
                                          temp2=(struct
node*)malloc(sizeof(struct node));

temp2->data=p->data+item;

temp2->next=NULL;

rear->next=temp2;

rear=rear->next;

p=p->next;
                           }

             }
} */
int main()
{
     int i,n,k,t,y;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                front=NULL;
                flag=0;
                c=0;
                rear=NULL;
                for(i=1;i<=n;i++)
                {
                                scanf("%d",&y);
                                 if(flag!=1)
                                 fun(y);
                 }
                 if(flag==1)
                 printf("YES\n");
                 else
                 printf("NO\n");
      }
      return 0;
}
