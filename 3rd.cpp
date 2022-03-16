#include <iostream>
#include <cmath>
using namespace std ;


 void getSquare(int number)
 { 
     cout << "Square of int value of : " << number << " = " << pow(number , 2.0) << endl;
 }
 
 void getSquare(double number)
 {
      cout << "Square of double value of : " << number << " = " << pow(number , 2.0) << endl;
 }

 void getSquare(float number)
 {
      cout << "Square of float value of : " << number << " = " << pow(number , 2.0) << endl;
 }

 int main()
 {
     cout << "Enter a integer : " ;
     int n1 ;
     cin >> n1 ;
     cout << "Enter a double : " ;
     double n2 ;
     cin >> n2 ;
     cout << "Enter a float : " ;
     float n3 ;
     cin >> n3 ;

     getSquare(n1);
     getSquare(n2);
     getSquare(n3);

     return 0 ;
 }