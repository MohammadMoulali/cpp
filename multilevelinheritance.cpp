// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class a 
{
    protected:
    int id;
    char name[50];
    public:
    void get()
    {
        cout<<"enter your id &name"<<endl;
        cin>>id>>name;
        
    }
    void display()
    {
        cout<<"the id and name are"<<id<<"\t"<<name<<endl;
    }
};
class b:public a
{
    protected:
    int marks[5];
    public:
    void data()
    {
    cout<<"enter the five subject marks"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    cout<<"marks are";
    for(int i=0;i<5;i++)
    {
        cout<<marks[i];
    }
    }
    
};
class c:public b
{
    protected:
    int totalmarks=0;
    public:
    void tot()
    {
        for(int i=0;i<5;i++)
        {
            totalmarks=totalmarks+marks[i];
            
        }
        cout<<"the total marks are"<<totalmarks;
        
    }
};
int main()
{
    c m;
    m.get();
    m.display();
    m.data();
    m.tot();
   return 0; 
}
