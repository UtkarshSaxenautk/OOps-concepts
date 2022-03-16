#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std ;



class Product {
    public:
    int pi ;
    string np ;
    double pv ;
    double dpv ;
    bool discount10 ;
    bool discount40 ;
    bool buyonegetfree ;
    int quantity ;
    Product(){
        pi = 0 ;
        np = "" ;
        pv = 0 ;
        if(discount10 == true)
        {
            dpv = pv - (pv / 10) ;
        }
        if(discount40 == true)
        {
            dpv = pv - (pv*4) / 10 ;
        }
        if(buyonegetfree == true)
        {
            dpv = pv ;
        }
    }

};


class Store {
   public:
   int n ;
   Product *p ;
   Store(){
       p = new Product[n] ;
   }
   Store(int no , Product pr[])
   {
       n = no ;
       p = pr ;
   }
   void Display_Product()
    {
        cout << "*******************Available Products******************" << "\n\n" ;
        cout << "  |Product ID|  " << "  |Product Name|  " << "  |Product Value|  " << "\n" ; 
        for(int i =0 ; i < n ; i++)
        {
            
            cout << i + 1 << " : " << p[i].pi << "                 " << p[i].np << "                " << p[i].pv << "                " << "\n" ;
        }
    }
};


class Customer : public Store {
   private:
   string cn ;
   string ci ;
   int *quan ;
   
   double tax ; 
   public:
   Customer() {
       cn = "" ;
       ci = "" ;
       quan = new int[n];
       
       tax =0 ;
   }
   Customer(int no)
   {
       n = no ;
   }
   
   void Enterdata(string na ,string cusid , int arr[] )
   {
       cn = na ;
       ci = cusid ;
       quan = arr ;
   }

   void Display()

   {
       cout << "********************** Invoice **********************" << "\n" ;
       cout << "|Product Id|" << "    " << "|Product Name|" << "    " << "|Product Value|" << "    " << "|Discounted Value|" << "   " << "|Quantity|" << "   " << "|Total value|" <<"    " << "|Tax|" << "\n" ;
       int total_payable = 0 ;
       
       int total_tax =0 ;
       for(int i = 0 ; i < n ; i++)
       { 
           double total  ;
         if(p[i].discount10 == true)
        {
            p[i].dpv = p[i].pv - (p[i].pv / 10) ;
            total = quan[i] * p[i].dpv ;
        }
        if(p[i].discount40 == true)
        {
            p[i].dpv = p[i].pv - (p[i].pv*4) / 10 ;
             total = quan[i] * p[i].dpv ;
        }
        if(p[i].buyonegetfree == true)
        {
            p[i].dpv = p[i].pv ;
            if(n % 2 == 0)
            {
                total = (quan[i] * p[i].dpv) / 2 ; 
            }
        }
           double tax = (total * 0.08) ;
           total_payable += total ;
           total_tax += tax ;
           cout << i + 1 << " : " << p[i].pi << "            " << p[i].np << "                " << p[i].pv << "             " << p[i].dpv << "              " << quan[i] << "         " << total << "          " << tax <<"\n" ;
       }
       cout << "\nTotal amount = " << total_payable << "  ########   " << "Total Tax = " << total_tax << "\n" ;

       cout << "Total Payable Amount :   " << total_payable + total_tax << "\n" ;

       cout << "\n**********************Thank you for Shopping ******************************" << "\n" ;

   }
};



int main()
{
    Product *p ;
    int n ;
    cout << "Enter the number of products in store : " ;
    cin >> n ;
    p = new Product[n] ;
     for(int i =0 ; i < n ; i++)
      {
         cout << "Enter the id of product : " << "\n" ;
          cin >> p[i].pi ;
          cout << "Enter the name of product : " << "\n" ;
          cin >> p[i].np ;
          cout << "Enter the Origial value of product :" << "\n" ;
          cin >> p[i].pv ;
          cout << "Enter whether to apply 10% : " << "\n" ;
          cin >> p[i].discount10 ;
          cout << "Enter whether to apply 40% : " << "\n" ;
          cin >> p[i].discount40 ;
          cout << "Enter whether to apply buy one get one free : " << "\n" ;
          cin >> p[i].buyonegetfree ;
         // p[i].CreateProduct(id[i] , name[i] , cost[i] , ten[i] , forty[i] , one[i]);
        
      }

      Customer c1 ;
     // Store s1(n , p);
      c1.n = n ;
      c1.p = p ;
      c1.Display_Product();

      cout << "\nEnter Customer Name : " ;
    string na ;
    cin >> na ;
    cout << "Enter Customer Id  : " ;
    string idc ;
    cin >> idc ;
    int q[n] ;
    cout << "\nEnter the quantity of given product to be brough by customer " <<"\n" ;
    for(int i =0 ; i < n ; i++)
    {
        cout << "Product " << i + 1 << " : " ;
        cin >> q[i] ;
    }
    c1.Enterdata(na , idc , q);
    c1.Display();

}



/*class Product {
    public:
    int pi ;
    string np ;
    double pv ;
    double dpv ;
    bool discount10 ;
    bool discount40 ;
    bool buyonegetfree ;
    int quantity ;
    Product() {
        pi = 0 ;
       // np = "" ;
        pv = 0 ;
        dpv = 0 ;
        discount10 = false ;
        discount40 = false ;
        buyonegetfree = false ;
        quantity = 0 ;
    }

    void CreateProduct(int id , string name_of_cus , double cost , bool dis10 , bool dis40 , bool one)
    {
        this->pi = id ;
        this->np = name_of_cus ;
        this->pv = cost ;
        this->discount10 = dis10 ;
        this->discount40 = dis40 ;
        this->buyonegetfree = one ;
        if(discount10 == true)
        {
            dpv =  (pv - (pv/10));
        }
        else if(discount40 = true)
        {
            dpv = pv - (pv * 4) / 10 ;
        }
        else if(buyonegetfree == true )
        {
            dpv = pv ;
        }
        else 
        {
            dpv = pv ;
        }
    }

};


class Store : public Product {
  public:
  int n ;
  Product *p ;
  
  Store()
  {
      n = 0 ;
      p = new Product[n];
  }
  Store(int no)
  {
      n = no ;
      p = new Product[n];
  }
  void CreateStore(int id[] , string name[] , double cost[] , bool ten[] , bool forty[] , bool one[])
  {
     
     
      for(int i =0 ; i < n ; i++)
      {
         cout << "Enter the id of product : " << "\n" ;
          int id ;
          cin >> id ;
          cout << "Enter the name of product : " << "\n" ;
          string name ;
          cin >> name ;
          cout << "Enter the Origial value of product :" << "\n" ;
          double cost ;
          cin >> cost ;
          cout << "Enter whether to apply 10% : " << "\n" ;
          bool ten ;
          cin >> ten ;
          cout << "Enter whether to apply 40% : " << "\n" ;
          bool forty ;
          cin >> forty ;
          cout << "Enter whether to apply buy one get one free : " << "\n" ;
          bool one ;
          cin >> one ;
         // p[i].CreateProduct(id[i] , name[i] , cost[i] , ten[i] , forty[i] , one[i]);
         p[i].pi = id[i] ;
         p[i].np = name[i] ;
         p[i].pv = cost[i] ;
         p[i].discount10 = ten[i] ;
         p[i].discount40 = forty[i] ;
         p[i].buyonegetfree = one[i] ;
      }

    }


    void Display_Product()
    {
        cout << "*******************Available Products******************" << "\n\n" ;
        cout << "  |Product ID|  " << "  |Product Name|  " << "  |Product Value|  " << "\n" ; 
        for(int i =0 ; i < n ; i++)
        {
            
            cout << i + 1 << " : " << p[i].pi << "                 " << p[i].np << "                " << p[i].pv << "                " << "\n" ;
        }
    }

   
};


class Customer : public Store {
   private:
   string cn ;
   string ci ;
   int *quan ;
   
   double tax ; 
   public:
   Customer() {
       cn = "" ;
       ci = "" ;
       quan = new int[n];
       
       tax =0 ;
   }
   Customer(int no)
   {
       n = no ;
   }
   
   void Enterdata(string na ,string cusid , int arr[] )
   {
       cn = na ;
       ci = cusid ;
       quan = arr ;
   }

   void Display()

   {
       cout << "********************** Invoice **********************" << "\n" ;
       cout << "|Product Id|" << "    " << "|Product Name|" << "    " << "|Product Value|" << "    " << "|Discounted Value|" << "   " << "|Quantity|" << "   " << "|Total value|" <<"    " << "|Tax|" << "\n" ;
       int total_payable = 0 ;
       int total_tax =0 ;
       for(int i = 0 ; i < n ; i++)
       {
           int total ;
           if(quan[i] > 1 && p[i].buyonegetfree == true)
           { 
              total = (quan[i] - 1) * p[i].dpv ; 
           }
           else
           {
               total = quan[i] * p[i].dpv ;
           }

           tax = (total * 5)/100 ;
           total_payable += total ;
           total_tax += tax ;
           cout << i + 1 << " : " << p[i].pi << "    " << p[i].np << "   " << p[i].pv << "   " << p[i].dpv << "   " << p[i].quantity << "   " << total << "   " << tax <<"\n" ;
       }
       cout << "\nTotal amount = " << total_payable << "  ########   " << "Total Tax = " << total_tax << "\n" ;

       cout << "Total Payable Amount :   " << total_payable + total_tax << "\n" ;

       cout << "\n**********************Thank you for Shopping ******************************" << "\n" ;

   }
};


int main()
{
    int n ;
    cout << "Enter Number of products available : " ;
    cin >> n ;
    Customer C(n);
    int id[n] ;
     string *name ;
     name = new string[n] ;
      double cost[n] ;
       bool ten[n] ; 
       bool forty[n] ;
        bool one[n] ;
     for(int i =0 ; i < n ; i++)
      {
          cout << "Enter the id of product : " << "\n" ;
          cin >> id[i] ;
          cout << "Enter the name of product : " << "\n" ;
          cin >> name[i] ;
          cout << "Enter the Origial value of product :" << "\n" ;
          cin >> cost[i] ;
          cout << "Enter whether to apply 10% : " << "\n" ;
          cin >> ten[i];
          cout << "Enter whether to apply 40% : " << "\n" ;
          cin >> forty[i] ;
          cout << "Enter whether to apply buy one get one free : " << "\n" ;
          cin >> one[i] ;
         // p[i].CreateProduct(id[i] , name[i] , cost[i] , ten[i] , forty[i] , one[i]);
      }
      
    C.CreateStore(id , name , cost , ten , forty , one);
    C.Display_Product();
    cout << "\nEnter Customer Name : " ;
    string na ;
    cin >> na ;
    cout << "Enter Customer Id  : " ;
    string idc ;
    cin >> idc ;
    int q[n] ;
    cout << "\nEnter the quantity of given product to be brough by customer " <<"\n" ;
    for(int i =0 ; i < n ; i++)
    {
        cout << "Product " << i + 1 << " : " ;
        cin >> q[i] ;
    }
    C.Enterdata(na , idc , q);
    C.Display();
    
    return 0 ;
}*/