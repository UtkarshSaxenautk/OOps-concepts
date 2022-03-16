#include <iostream> 
using namespace std;

class Rectangle
{
    private:
   int length ;
   int breadth ;
   public:
   Rectangle()
   {
       length  = 0 ;
       breadth = 0 ;
   }
   Rectangle(int l , int b)
   {
      length = l ;
      breadth = b ;
   }

   int Area()
   {
       return length * breadth ;
   }


};

int main()
{
    Rectangle R1(4 ,5);
    cout << "Area : " << R1.Area() << endl;
    Rectangle R2(5 ,8);
    cout << "Area : " << R2.Area() << endl;



}