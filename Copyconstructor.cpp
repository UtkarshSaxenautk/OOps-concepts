#include <iostream>
using namespace std ;

class point
{
    private:
    int x , y ;
    public:
    point(int x1 , int y1)
    {
        x = x1 ;
        y = y1 ;
    }
    point(const point &p1)
    {
        x = p1.x ;
        y = p1.y ;
    }
    int getX()
    {
        return x ;
    }
    int getY()
    {
        return y ;
    }
};

int main()
{
    cout << "Let x be : " ;
    int x ;
    cin >> x ;
    cout << "Let y be : " ;
    int y ;
    cin >> y ;
    point p1(x , y) ;
    point p2 = p1 ;
    cout << "p1.x = " << p1.getX() << " p1.y = " << p1.getY() << endl;
    cout << "P2.y = " << p2.getX() << " p2.y = " << p2.getY() << endl;
    return 0 ;
}