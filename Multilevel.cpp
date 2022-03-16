#include <iostream>
#include <string>
using namespace std ;
// Multilevel Inheritence
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

class Student : protected School 
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

     void Interdata(string s , int n , string sn , int rn)
     {
           school_name  = s ;
           number_of_classes = n ;
           student_name = sn ;
           roll_number = rn ;
           
     }
     void AllInfo()
     {
         cout << student_name << " withh roll number: " << roll_number << " study in " << school_name << " with " << number_of_classes << " rooms"<<
         endl;
     }

};


class Marks : protected Student
{
    protected:
    int total_marks ;
    public:
    Marks()
    {
        total_marks = 75 ;
    }
    void EnterFullDetails(string s , int n , string sn , int rn , int m)
    {
          school_name  = s ;
           number_of_classes = n ;
           student_name = sn ;
           roll_number = rn ;
           total_marks = m ;
    }
    void Result()
    {
         AllInfo();
         cout << "Marks: " << total_marks << endl;

    }
};

int main()
{
   Marks M ;
   M.Result();
   M.EnterFullDetails("St.Francis" , 25 , "Near city town" , 39 , 98);
   M.Result();
}



