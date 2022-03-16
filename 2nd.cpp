#include <iostream>
using namespace std ;

// Making class
class Operations
{
    private:
    int a , b ;
    public:
    void getvalue(int x , int y)
    {
           a = x ;
           b = y ;
    }
    inline int Addition()
    {
        int sum = a + b ;
        return sum ;
    }
    inline int Subtraction()
    {
        int sub = a - b ;
        return sub ;
    }
    inline int Multiplication()
    {
        int mult = a * b ;
        return mult ;
    }
    inline int Division()
    {
        int div = a / b ;
        return div ;
    }
};


int main()
{
    int x , y ;
    cout << "Enter the first number : " ;
    cin >> x ;
    cout << "Enter the second nuber : " ;
    cin >> y ;
    // Making instance of class :
    Operations op;
    // Calling member functions 
    op.getvalue(x , y);
    cout << "Addition of " << x << " and " << y << " = " << op.Addition() << endl;
    cout << "Subtraction of " << x << " and " << y << " = " << op.Subtraction() << endl;
    cout << "Multiplication of " << x << " and " << y << " = " << op.Multiplication() << endl;
    cout << "Division of " << x << " and " << y << " = " << op.Division() << endl;
     
    return 0 ;
}