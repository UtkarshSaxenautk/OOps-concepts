#include <iostream>
using namespace std ;


class Student 
{
    private:
    string name ;
    int roll_no ;
    string phone_no ;
    string address ;
    public:
    Student()
    {
        name = "XYZ";
        roll_no = 1 ;
        phone_no = "XXXXXXXXXXX" ;
        address = "ABC" ;
    }
    Student(string n , int r, string p , string ad)
    {
        name = n ;
        roll_no = r ;
        phone_no = p ;
        address = ad ;
    }

    void enter_data(string n , int r, string p , string ad)
    {
       name = n ;
        roll_no = r ;
        phone_no = p ;
        address = ad ;
    }

    void Print()
    {
        cout << "Name : " << name  << endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "Phone number : " << phone_no << endl;
        cout << "Address : " << address << endl;
    }
};

int main()
{
    Student S1 ;
    S1.enter_data("Samar" , 20 , "7686875868" , "Hn.20 , Near City Bank");
    S1.Print();
    Student S2("Jack" , 5 , "7986879762" , "Hn.100 , Near River Bank");
    S2.Print();
}
