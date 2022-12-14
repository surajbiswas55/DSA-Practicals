                                                           
#include<iostream>
#include"P_17_b.cpp"
#include"P_17_c.cpp"
using namespace std;
int main()
{
        cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 17~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
 stacks<int> s1;
 int s,n;
 queues q1;
 char ch;

 do
 {
  cout<<"Enter the element in the stack:\n";
  cin>>n;
  s1.push(n);
  //temp++;
  cout<<"Want to enter more: ";
  cin>>ch;
 }while(ch=='y');
 //attain(temp);
  while(s1.empty()!=-1)
  q1.insert(s1.pop());
 while(q1.empty()!=-1)   s1.push(q1.dlt());
   cout<<"The resulting reversed stack is:\n";
 s1.display();
 }
 
                                                  
                                                  
                                                  P_17_b
                                                        


#include<iostream>
#include<string.h>
using namespace std;
template<class t>
class stack
{
      public:
        t data;
        stack *prev;
};
template<class t>
class stacks
{
      //int stack;
      stack<t> *top;
      public:
             stacks()
             {
                  top=NULL;
             }

             void push(t n)
             {
                  stack<t> *temp;
                  /*if(top==(size-1))
                  {
                                   cout<<"overflow element not entered\n";
                                   return 1;
                  }*/
                  //else
                  //{
                      temp=new stack<t>;
                      temp->data=n;
                      temp->prev=top;
                      top=temp;
                      //return 0;
                  //}
             }

             t pop()
             {
                  t a;
                  if(top==NULL)
                  {
                             cout<<"underflow:\n";
                             return -1;
                  }
                  else
                  {
                      a=top->data;
                      top=top->prev;
                      return a;
                  }
             }

             void display()
             {
                  cout<<"";
                  while(top!=NULL)
                  {
                                  cout<<top->data<<"\n^\n"<<endl;
                                  top=top->prev;
                  }
             }

             int empty()
             {
                  if(top==NULL)
                  return -1;
                  else
                  return 1;
             }

};

                                              
                                              
                                                   P_17_c


#include<iostream>
using namespace std;
const int size=40;
int flag=0;
/*void attain(int n)
{
 size=n;
}*/
class queues
{
      static const int size=40;
      int front,rear;
      int queue;
      public:
             queues()
             {
                  front=rear=-1;
             }

             void insert(int n)
             {
              flag=0;
                  if(/*(rear-front)>(size-1))&&*/(rear==(size-1)))
                  {
                                   cout<<"overflow element can not be entered\n";
                                   flag=1;
           //return 1;
                  }
                  else if(rear<(size-1))
                  {
                      queue=n;
                      front=0;
                      //return 0;
                  }
                  else if((rear+front)>=size)
                  {
                      for(int i=front-1;i<rear;i++)
                      queue=queue;

                      queue=n;
                  }
             }

             int dlt()
             {
                  int a;
                  if((rear==-1)||(empty()==-1))
                  {
                             cout<<"underflow:\n";
                             return 0;
                  }
                  else
                  {
                      a=queue;
                      cout<<"In function delete:\nfront= "<<front<<endl;
                      return a;
                  }
             }

             void display()
             {
              cout<<"In function display:\nfront= "<<front<<endl<<"rear= "<<rear<<endl;
                  for(int i=front;i<=rear;i++)
                  cout<<queue<<" ";
                  cout<<endl;
             }

             int empty()
             {
                  if(front>rear)
                  return -1;
                  else
                  return 1;
             }

};