#include <iostream>
#include <string>
using namespace std ;

class Rental_Store
{
   public:
   string car_name ;
   int basic_charge ;
   string car_id ;
   Rental_Store()
   {
       car_name = "" ;
       basic_charge = 0 ;
       car_id = "";
   }
   /*Rental_Store(string car ,  int c , string id)
   {
       car_name = car ;
       basic_charge =  c ;
       car_id = id ;
   }*/
   void Set_value(string car ,  int c , string id )
   {
       car_name = car ;
       basic_charge = c ;
       car_id = id ;
   }
   void Display_Cars()
   {
       cout << "Car : " << car_name << " and basic charge : " << basic_charge << "\n\n";
   }
  

};


class Customer 
{
   private:
   string customer_name ;
   string customer_id ;
   int no_of_days ;
   int damage_provided ;
   Rental_Store R ;
  public:
   Customer()
   {
       customer_name = "!!!" ;
       customer_id = "1" ;
       no_of_days = 0 ;
       damage_provided = 0 ;
       R.basic_charge = 0 ;
       R.car_id = "";
       R.car_name = "";
   }
   void Set_values(string n , string id , int nod , int d , const Rental_Store s )
   {
       customer_name = n;
       customer_id = id ;
       no_of_days = nod ;
       damage_provided = d ;
       R = s ;
       /*R.basic_charge =  s.basic_charge ;
       R.car_id = s.car_id ;
       R.car_name = s.car_name ;*/

   }
    void Invoice()
   {
      cout << "Name of customer : " << customer_name << "\n\n" ;
      cout << "Id of customer : " << customer_id << "\n\n" ;
       double tax = (R.basic_charge * 25) / 100 ;
       double service_charge = (R.basic_charge * 10) / 100 ;
       double damage_charge = (damage_provided * R.basic_charge) / 100 + 500 ;
       if(damage_provided == 0)
       {
           damage_charge = 0 ;
       }
       double total ; 
       if(no_of_days == 1)
       {
           total = R.basic_charge + tax + service_charge + damage_charge ;
       }
       else
       {
           total = ((R.basic_charge + tax + service_charge - 200) * no_of_days) + damage_charge ;
       }
       cout << "Car choosen : " << R.car_name << "\n" ;
       cout << "Car Id : " << R.car_id << "\n" ;
       cout << "\n\n" ;
       cout << "Basic charge of " << R.car_name << " is : " << R.basic_charge << "\n" ; 
       cout << "tax : " << tax << "                 " ;
       cout << "Service_charge : " << service_charge << "\n" ;
       cout << "Damage charge :  " << damage_charge << "\n" ;
       cout << "No of Days Car Rented : "  << no_of_days << "\n" ;

       cout << "\n\nTotal Charge : " << total << "\n" ;
   }

 

};


int main()
{
   
    cout << "No of cars : "  ;
    int no_of_cars ;
    cin >> no_of_cars ;
    Rental_Store *R ;
    R = new Rental_Store[no_of_cars];
    cout << "Enter details of cars : " << "\n" ;
    cout << "\\\\\\----------------//////" <<"\n" ;
    for(int i = 0 ; i < no_of_cars ; i++)
    {
        cout << "Enter car name : " ;
        string car_name ;
        cin >> car_name ;
        cout << "Enter car id : " ;
        string car_id ;
        cin >> car_id ;
        cout << "Enter Basic Charge : " ;
        int ch ;
        cin >> ch ;
        R[i].Set_value(car_name , ch , car_id);
    }

    cout << "Following are available in Our Rental Shop : " << endl;
    for(int i = 0 ; i < no_of_cars ; i++)
    {
       cout << i <<  ":- " ;
       R[i].Display_Cars();
    }

    cout << "\n\n" ;

    Customer c1 ;
    string name_of_customer ;
    cout << "Enter Customer Name : " ;
    cin >> name_of_customer ;
    cout << "Enter the Customer Id : " ;
    string customer_id ;
    cin >> customer_id ;
    int nod ;
    cout << "Enetr the number of days car to be rented or rented : " ;
    cin >> nod ;
    cout << "Enter Percent of damage given to car : " ;
    int dam ;
    cin >> dam ;
    cout << "Enter the option from above list of cars : " ;
    int op ;
    cin >> op ;
    c1.Set_values(name_of_customer , customer_id , nod , dam , R[op]);

   cout << "----------------------------Bill---------------------------" << "\n\n" ; 

    c1.Invoice();
  
return 0 ;
    
}