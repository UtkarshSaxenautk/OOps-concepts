#include <iostream>
using namespace std ;

class Name
{
    private:
    string s ;
    public:

    Name()
    {
        s = "Default name" ;
        cout << "Default constructor called. " << endl;
    }
    
    Name(string n)
    {
       s = n ;
       cout << "Parameterized constructor called." << endl;
    }
    void details()
    {
        cout << "Name = " << s << endl;
    }
};

int main()
{
    Name N1("Utkarsh");
    N1.details();
    Name N2 ;
    N2.details();
    return 0 ;
}