#include <iostream>
using namespace std ;

class Employee
{
  private:
  string name ;
  string empid ;
  string designation ;
  int basic_pay ;
  int DA ;
  int HRA ;
  int MA ;
  int phoneallowance ;
  public:
  Employee()
  {
      name = "xyx" ;
      empid = "A0" ;
      designation = "None" ;
      basic_pay = 0 ;
      DA = 0 ;
      HRA = 0 ;
      MA = 0 ;
      phoneallowance = 0 ;
  }
  void setvalue(string n , string id , string d , int b)
  {
      name = n ;
      empid = id ;
      designation = d ;
      basic_pay = b ;
      DA = (130 * basic_pay) / 100 ;
      HRA = (20 * basic_pay) / 100 ;
      MA = (5 * basic_pay) / 100 ;
      phoneallowance = 500 ;
   
  }

  string getname()
  {
      return name ;
  }
  string getid()
  {
      return empid ;
  }
  void Display_basic_detail(string key)
  {
      if(key == this->name)
      {
          cout << "Name : " << name << "  ----" << "\n" ;
          cout << "Designation : " << designation << "\n" ;
         
      }
      else 
      {
          cout << "Enter the correct name !!!!!! " << endl;
      }
  }

  void Display_Name()
  {
      cout << "Name of Employee : "  << name << endl;
      
  }

  void All_Info(string n , string i)
  {
      if(this->name == n && this->empid == i)
      {
          cout << "Name : " << name << "  ----" << "\n" ;
          cout << "Designation : " << designation << "\n" ;
          cout << "Total pay : " << basic_pay + DA + HRA + MA + phoneallowance << endl;
          cout << "Consisted of :  " << endl;
          cout << "Basic Pay : " << basic_pay << "\n" ;
          cout << "HRA  : " << HRA << endl;
          cout << "DA : " << DA << endl;
          cout << "MA : " << MA << endl;
          cout << "Phone_Allowance : " << phoneallowance << endl;
      }
      else
      {
          cout << "Enter the name and id !!!! " << endl;
      }
  } 

};


/*void Enter_Details(Employee *E[] , int size)
{
    
    for(int i =0 ; i < size ; i++)
    {
        
        string name ;
        cout << "Enter Name : " ;
        cin >> name ;
        string id ;
        cout << "Enter Id : "  ;
        cin >> id ;
        string des ;
        cout << "Enter the designation : " ;
        cin >> des ;
        int basic_pay ;
        cout << "Enter the basic pay " ;
        cin >> basic_pay ;
        E[i].setvalue(name , id , des , basic_pay);
    }
}*/


int main()
{
    cout << "Enter the number of employee : " ;
    int no_of_employee ;
    cin >> no_of_employee ;
    Employee *E1 ;
    
    E1 = new Employee[no_of_employee];
   // Enter_Details(&E1 , no_of_employee);
     for(int i =0 ; i < no_of_employee ; i++)
    {
        
        string name ;
        cout << "Enter Name : " ;
        cin >> name ;
        string id ;
        cout << "Enter Id : "  ;
        cin >> id ;
        string des ;
        cout << "Enter the designation : " ;
        cin >> des ;
        int basic_pay ;
        cout << "Enter the basic pay " ;
        cin >> basic_pay ;
        E1[i].setvalue(name , id , des , basic_pay);
    }
    cout << "Choose one of following : " << endl;
    cout << "1. View Basic details of all : "  << endl;
    cout << "2. View Basic detail of particular employee : " << endl;
    cout << "3. View All_Information of particular employee : " << endl;
    cout << "4. Exit" << endl;
    
    while(true)
    {
        cout << "Enter choice : " << endl;
     int choice ; 
    cin >> choice ;
    
    switch (choice)
    {
    case 1:
    {
        for(int i = 0 ; i < no_of_employee ; i++)
        {
            E1[i].Display_Name();
        }
    }break;
    case 2:
    {
       string k ;
       cout << "Enter the name of employee : "  ;
       cin >> k ;
       int c = 0 ;
       for(int i = 0 ; i < no_of_employee ; i++)
       {
           if(E1[i].getname() == k)
           {
               E1[i].Display_basic_detail(k);
               c++ ;
           }
           
       }
       if(c == 0)
       {
           cout << "Enter valid Key Name" << endl;
       }
    }break ;
    case 3:
    {
      string key ;
      string id ;
      cout << "Enter Employee name : " ;
      cin >> key ;
      cout << "Enter Employee Id : " ;
      cin >> id ;
      int count = 0 ;
      for(int i = 0 ; i < no_of_employee ; i++)
       {
           if(E1[i].getname() == key && E1[i].getid() == id)
           {
                E1[i].All_Info(key , id);
               count++ ;
           }
           
       }
       if(count == 0)
       {
           cout << "Enter valid Key Name or valid key id " << endl;
       }
    }break ;
    case 4:
    {
    exit(4); 
    }break ;
    default:
    {
    } break;
    }
    }
}