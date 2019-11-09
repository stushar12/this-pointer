#include<iostream>
using namespace std;
class A
{
public:
  int a;
  A()
  {
    a=0;
  }
  A(int a)
  {
    this->a=a;
  }
  A& compare(A &b)
  {
    if(a>b.a)
    return *this;
    else
    return b;
  }
  void show()
  {
  cout<<"Greater is "<<this->a;
  }
};
int main()
{
  A obj(10),obj1(20),obj2;
  obj2=obj.compare(obj1);
  obj2.show();
}
