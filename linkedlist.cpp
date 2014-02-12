#include<iostream.h>
class list
{
  private:
  struct node
  {
   int data;
   node *link;
  }*p;
  public:
    void insatbeg();
    void display();
    list();
};
void main()
{ 

  list l;
  l.insatbeg(&n);
  l.display();

}
 void list:: insatbeg()
 {  
  int n;
  cin>>n;
  int rem;
  while(n>0)
 {
     node *temp;      
     rem=n%10;
    
     temp=new node;
     temp->data=rem;
     temp->link=p;
     p=temp; 
     n=n/10;
 }
}
 void list::display()
 { node *temp=p;
 cout<<endl;
 while(temp!=NULL)
 {
   cout<<temp->data<<endl;
   temp=temp->link;
 }
 }
 list::list()
 {
 p=NULL;
 }

