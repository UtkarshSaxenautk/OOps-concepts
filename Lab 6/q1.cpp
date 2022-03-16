#include <iostream>
using namespace std ;


class Complex
{
   private:
   int real ;
   int imaginary ;
   public:
   Complex()
   {
       real = 0 ;
       imaginary = 0 ;
   }
   void Enterdata()
   {
       cout << "Enter real part : " ;
       int r ;
       cin >> r ;
       real = r ;
       cout << "Enter imaginary part : " ;
       int i ;
       cin >> i ;
       imaginary = i ;
   }
   void Print()
   {
       cout << "Complex Number  = " << real  << " + " << imaginary  << "i" << endl;
   }

   Complex Addition(Complex c)
   {
       Complex temp ;
       temp.real = this->real + c.real ;
       temp.imaginary = this->imaginary + c.imaginary  ;
       return temp ;
   }
   Complex Subtraction(Complex c)
   {
       Complex temp ;
       temp.real = this->real - c.real ;
       temp.imaginary = this->imaginary - c.imaginary ;
       return temp ;
   }
};


int main()
{
    Complex c1 , c2 , c3 , c4 ;
    c1.Enterdata();
    c1.Print();
    c2.Enterdata();
    c2.Print();
    c3 = c1.Addition(c2) ;
    c3.Print();
    c4 = c1.Subtraction(c2) ;
    c4.Print();
}

