#include <iostream>
using namespace std ;

template <typename T>

class student
{
    private:
    T marks ;
    public:
    void setmarks(T x)
    {
        cout << "Enter the marks = " ;
        marks = x ;
    }
    T getmarks()
    {
        return marks ;
    }
};

int main()
{
    student <double>S1  ;
    student <int>S2;
    S1.setmarks(97.6);
    cout << "Marks : " << S1.getmarks() << endl;
    S2.setmarks(95);
    cout << "Marks : " << S2.getmarks() << endl;
    return 0 ;
}