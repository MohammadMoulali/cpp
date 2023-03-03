// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class a
{
    int x;
    public:
    void get();
    void display();
    void operator +(a m);

};
void a::get()
{
    cout<<"enter a value"<<endl;
    cin>>x;
}
void a::display()
{
    cout<<x<<endl;
}
void a::operator+(a m)
{
    x=x+m.x;
}

int main() {
    a s1,s2;
    s1.get();
    s2.get();
    cout<<"entered value in two objects is:"<<"\t";
    s1.display();
    s2.display();
    s1+s2;
    cout<<"after adittion"<<"\t";
    s1.display();

}
