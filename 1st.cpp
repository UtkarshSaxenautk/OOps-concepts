#include <iostream>
#include <string>
using namespace std ;

class student 
{
    // Data Members are private 
    private:
    string Name ;
    int rollno ;
    int marks ;
    public:
    // Member functions are public so that can be accessed
    void putdata(string s ,int a , int b)
    {
       Name = s ;
       rollno = a ;
       marks = b ;
    }
    void getdata()
    {
        cout << "Name : " << Name << endl;
        cout << "Rollno : " << rollno << endl;
        cout << "Marks : " << marks << endl;
    }
};


int main()
{
    // Making Instance of class as object 
   
    cout << "Enter name : " ;
   string name ;
   cin >> name ;
   cout << "Enter rollno : " ;
   int rollno ;
   cin >> rollno ;
   cout << "Enter marks : ";
   int marks ;
   cin >> marks;
   student s ;
   // Calling function of class 
  
   s.putdata(name , rollno , marks);
   s.getdata();
   return 0 ;
}