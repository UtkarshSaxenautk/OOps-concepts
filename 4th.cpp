#include <iostream>
using namespace std ;

class Rectangle {
 int length , breadth ;
 public:
 // Defining Constructor in class 
 Rectangle()
 {
     length = 0 ;
     breadth = 0 ;
 }
 Rectangle(int l , int b)
 {
    length = l ;
    breadth = b ;
 }
 void Perimeter()
 {
   int p ;
   p = 2 * ( length + breadth) ;
   cout << "Perimeter of rectangle = " << p << endl;
 }

 void Area() ;

};
// Defining Function outside class
void Rectangle :: Area()
{
    int a ;
    a = length * breadth ;
    cout << "Area of rectangle : " << a << endl;
}


int main()
{
    Rectangle R1(4 ,5);
    R1.Perimeter();
    R1.Area();
    // Default value 
    cout << "Taking default values : " << endl;
    Rectangle R2 ;
    R2.Perimeter();
    R2.Area();
    return 0 ;
}