#include <iostream>
#include <string>
using namespace std ;

class Maths
{
    protected:
    string branch ;
    int code ;
    public:
    Maths()
    {
        branch = "Algebra" ;
        code = 0 ;
    }
    void Basic_Maths_Info()
    {
        cout << "Branch : " << branch << endl;
        cout << "Code : " << code << endl;
    }
};

class Algebra : protected Maths
{
   protected:
   string Application ;
   int no_of_topics ;
    public:
   Algebra()
   {
       Application = "Basic Operations" ;
       no_of_topics = 10 ;
   }
   void Basic_Algebra_Info()
   {
       cout << "Application : " << Application << endl;
       cout << " No_of_Topics : " << no_of_topics << endl;
       Basic_Maths_Info();
   }
};

class Trignometry : protected Maths
{
  protected:
  string Basic_Topic ;
  int value ;
  public:
  Trignometry()
  {
      Basic_Topic = "Height and Distance" ;
      value = 70 ;
  }
  void Basic_Trignometry_Info()
  {
      cout << "Basic Topic : " << Basic_Topic << endl;
      cout << "Value : " << value << endl;
      Basic_Maths_Info();
  }
};

class Add_Sub : protected Algebra
{
    protected:
    string add ;
    string sub ;
    public:
    Add_Sub()
    {
      add = "a + b" ;
      sub = "a - b" ;
    }
    void Add()
    {
        cout << "ADD : " << add << endl;

    }
    void Sub()
    {
        cout << "SUB : " << sub << endl; 
    }
    void allInfo()
    {
        Basic_Maths_Info();
        Basic_Algebra_Info();
        Add();
        Sub();
    }
};

class Mult_Div : protected Algebra
{
    protected:
    string mult ;
    string div ;
    public:
    Mult_Div()
    {
      mult = "a * b" ;
      div = "a / b" ;
    }
    void Mult()
    {
        cout << "MULT : " << mult << endl;
    }
    void Sub()
    {
        cout << "DIV : " << div << endl; 
    }
    
};

int main()
{
    Add_Sub A ;
    A.allInfo();
    Mult_Div M ;
    M.Mult();
    M.Sub();
    Trignometry T ;
    T.Basic_Trignometry_Info();
}



