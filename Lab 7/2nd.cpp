#include <iostream>
#include <string>
using namespace std ;

class Form
{
   int number;
   string s ;
   public:
   Form()
   {
       number = 0 ;
       s = "" ;
   }
   void Set_data(int n , string str)
   {
       number = n ;
       s = str ;
   }
   void Info()
   {
       if(s.length() >= 10 || s.length() <= 2)
       {
           throw s ;
       }
       if(number >= 50 || number <= 10 )
       {
           throw number ;
       }
       else{
           cout << "Number : " << number << " and string : " << s << endl;
       }
   }
};


int main()
{
    Form f ;
    int n ;
    cout << "Enter the number: "  ;
    cin >> n ;
    string s ;
    cout << "enter the string: " ;
    cin >> s ;
    f.Set_data(n , s);

  try
  {
      f.Info();
  }
   
  catch(int num)
  {
      cout << "Exception : " << num << " is not valid " << "\n";
  }
  catch(string str)
  {
      cout << "Exception : " << str << " is not valid " << "\n" ;
  }
  

}