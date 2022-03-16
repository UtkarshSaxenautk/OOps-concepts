#include <iostream>
using namespace std;


template <typename T>
class Algebra
{
   private:
   T x ;
   T y ;
   public:
   Algebra()
   {
       x = 0 ;
       y = 0 ;
   }
   void Enter_data()
   {
       T a , b ;
       cout << "Enter the number 1 : " ;
       cin >> a ;
       cout << "Enter the number 2 : " ;
       cin >> b ;
       x = a ;
       y = b ;
   }
   T sum()
   {
       T temp = x + y ;
       return temp ;
   }
   T subtraction()
   {
       T temp = x - y ;
       return temp ;
   }
   T divison();
   T multiplication();
   void display(); 


};

template <typename T>
T Algebra<T> :: divison()
{
  T temp = x / y ;
  return temp ;
}

template <typename T>
T Algebra<T> :: multiplication()
{
    T temp = this->x * this->y ;
    return temp ;
}
template <typename T>
void Algebra<T> :: display()
{
    cout << "Addition : " << this->sum() << "\n" ;
    cout << "Subtraction : " << this->subtraction() << "\n" ;
    cout << "Division : " << this->divison() << "\n" ;
    cout << "Multiplication : " << this->multiplication() << "\n" ;

}



int main()
{
   Algebra<int> A ;
   A.Enter_data();
   A.display();
   Algebra<double> A1 ;
   A1.Enter_data();
   A1.display();
}