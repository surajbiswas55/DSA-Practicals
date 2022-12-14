#include<iostream>
#include"P_16_b.cpp"
using namespace std;
int main()
{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 16~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
 stacks<int> s1,s2;
 char ch;
 int n;
 do
 {
  cout<<"Enter the element in the stack for reversing:\n";
  cin>>n;
  s1.push(n);
  cout<<"Want to enter more: ";
  cin>>ch;
 }while(ch=='y');
  while(s1.empty()!=-1)
  s2.push(s1.pop());
   s2.display();
}



                                  P_16_b



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
      //int stack[size];
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
                  cout<<"\nThe reversed data in the stack is:\n";
                  while(top!=NULL)
                  {
                                  cout<<top->data<<"\n^"<<endl;
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