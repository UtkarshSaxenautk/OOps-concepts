#include <iostream>
#include <string>
using namespace std ;

class record 
{
    private:
    string name ;
    int roll_no ;
    int   subject_marks[5] ;
    string subjectname[5] ;
    public:
    void setdetails( string student_name , string sub_name[] ,  int rollno  , int marks[]  )
    {
        name = student_name ;
        roll_no = rollno ;
        
        for(int i = 0 ; i < 5 ; i++ )
        {
            subjectname[i] = sub_name[i] ;
            subject_marks[i]  = marks[i] ;
        }
    }
    void printdetails()
    {
        cout << "Name of Student = " << name << endl;
        cout << "Roll no of Student = " << roll_no << endl;
         
        int total = 0 ;
        for(int i = 0 ; i < 5 ; i++ ){
          total += subject_marks[i] ;
          cout << subjectname[i] << " = " << subject_marks[i]  << endl;  
        }
        double percent = (total * 100 )/ 500 ;
        cout << "Total marks = " << total << endl;
        cout << "Percentage : = " << percent <<" %" << endl;
    }
};


int main()
{
    record class9th ;
    string stuname ;
    cout << "Here we taken name - " ;
    getline(cin ,stuname);
    int rollno  ;
    cout << "Roll number we taken - " ;
    cin >> rollno;
    cout << "No. of subjects - 5 " << endl;
    int subject_marks[5];
    string subjectname[5];
    for(int i = 0 ; i < 5 ; i++ )
    {
        cout << "Enter Subject Name : ";
        cin >> subjectname[i];
        cout << "Enter Marks : " ;
        cin >> subject_marks[i];
    }
    class9th.setdetails(stuname ,subjectname ,rollno  ,subject_marks);
    class9th.printdetails();
}