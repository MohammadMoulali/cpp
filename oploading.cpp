#include<iostream>
using namespace std;
class s
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"enter two values"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
        
    }
    friend void operator-(s &m);/*we also use friend  keyword in operator overloading when parameters are pass by reference*/
};
void operator-(s &m)
{
   m.x=-m.x;
    m.y=-m.y;
}
int main()
{
    s m;
    m.getdata();
    m.display();
    -m;
    m.display();
    return 0;
    
}
