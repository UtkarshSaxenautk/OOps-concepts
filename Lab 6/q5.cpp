#include <iostream>
using namespace std ;

class AddDistance 
{
  private:
  int feet ;
  float inches ;
  public:
  AddDistance()
  {
    feet = 0 ; 
    inches = 0 ;
  }
  AddDistance(int f , float i)
  {
    feet = f ;
    inches = i ;
  }
  AddDistance operator + (AddDistance d)
  {
    AddDistance temp ;
    temp.feet = feet + d.feet ;
    temp.inches = inches + d.inches ;
    if(temp.inches > 12)
    {
      temp.inches -= 12 ;
      temp.feet++ ;
    }
    return temp ;
  }
  AddDistance operator - (AddDistance d);
  
  void show()
  {
    cout << feet << " feet and " << inches << " inches" << endl;
  }

};

AddDistance AddDistance :: operator - (AddDistance d)
{
    AddDistance temp ;
    temp.feet = feet - d.feet ;
    temp.inches = inches - d.inches ;
    if(temp.feet < 0)
    {
      temp.feet = 0 ;
    }
    if(temp.inches < 0)
    {
      temp.inches = 0 ;
    }
    return temp ;
}

int main()
{
  AddDistance D1(10 , 2.5);
  D1.show();
  AddDistance D2(15 , 11.9);
  D2.show(); 
  AddDistance D3 ;
  D3 = D1 + D2 ;
  cout << "Adding D1 and D2 : = " ;
  D3.show();
  AddDistance D4 ;
  D4 = D2 - D1 ;
  cout << "Subtracting D1 from D2 : = " ;
  D4.show();
  return 0 ;
}