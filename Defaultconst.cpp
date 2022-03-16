#include <iostream>
using namespace std ;

class Name
{
    private:
    string s ;
    public:
    Name()
    {
        cout << "Default constructor is called." << endl;
        s = "Default" ;
    }
    void details()
    {
        cout << "Name = " << s << endl;
    }
};

int main()
{
    Name N1;
    N1.details();
    return 0 ;
}