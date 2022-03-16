#include <iostream>
using namespace std;

class Parent
{
  public:
  virtual void show()
  {
      cout << "Hello World" << endl;
  }
  virtual void info()
  {
      cout << "This is c++" << endl;
  }
};

class Child : public Parent
{
  public:
  void show()
  {
      cout << "Hello Universe" << endl;
  }
  void info()
  {
      cout << "This is c++ object oriented " << endl;
  }
};

int main()
{
   Parent *p ;
   Parent pt ;
   cout << "When pointing to parent : " << endl;
   p = &pt ;
   p->info();
   p->show();
   Child ch ;
   cout << "when Ponting to child : " << endl;   
   p = &ch ;
   p->info();
   p->show();
}
