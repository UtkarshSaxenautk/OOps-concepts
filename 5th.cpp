#include <iostream>
#include <string>
// Single Inheritence
using namespace std ;
class School 
{
    protected:
    string school_name ;
    int number_of_classes ;
    public:
    School()
    {
        school_name = "St.Xavier's" ;
        number_of_classes = 25 ;
    }
    void schoolbasic()
    {
        cout << "School Name : " << school_name << endl;
        cout << "Number of classes : " << number_of_classes << endl;
    }
};


class Home
{
    protected:
    string address ;
    int house_number ;
    public:
    Home()
    {
       address = "Near City Bank" ;
       house_number = 100 ;
    }
    void basichomeinfo()
    {
        cout << "Address : " << address << endl;
        cout << "House Number : " << house_number << endl; 
    }
};

class Student : protected School , protected Home
{
     protected:
     string student_name ;
     int roll_number ;
     public:
     Student()
     {
         student_name = "ABC" ;
         roll_number = 10 ;
     }

     void Interdata(string s , int n , string sn , int rn , string ad , int hn)
     {
           school_name  = s ;
           number_of_classes = n ;
           student_name = sn ;
           roll_number = rn ;
           address = ad ;
           house_number = hn ;
     }
     void AllInfo()
     {
         cout << student_name << " withh roll number: " << roll_number << " study in " << school_name << " with " << number_of_classes << " rooms"<<
         " and his address : " << address << " with house number : " << house_number << endl;
     }

};


int main()
{
    Student s ;
    s.AllInfo();
    s.Interdata("St.Francis" , 40 , "UWN" , 39 , "Near Town Hall" , 103);
    s.AllInfo();
}


