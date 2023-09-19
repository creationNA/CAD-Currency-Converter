#include <iostream>
#include <string>

//function prototypes
double CADtoX(double CADamt, double xchangerate);
double xtoCad(double foreign_amt, double xchangerate);

int main() {
  double CADamt,USDxchangerate = 0.74, EURxchangerate = 0.68, JPYxchangerate = 107.66, PHPxchangerate = 41.53, new_currency_amt, foreign_amt;
  std::string currency;
  int choice;
  
  
do{
  
  std::cout << "Welcome to CAD Currency Converter. Please select an option. (1,2,3)"<< std::endl;
  std::cout << "(1) CAD to Foreign Currency." <<std::endl;
  std::cout << "(2) Foreign Currency to CAD" <<std::endl;
  std::cout << "(3) Quit." <<std::endl;
  std::cin>>choice;
  
  switch (choice){
    case 1:
      std::cout<< "Enter CAD amt: ";
      std::cin >> CADamt;
      std::cout << "Enter type the currency you wish to convert to: (USD, EUR, JPY, PHP) ";
      std::cin >> currency;

      if (currency == "USD" || currency == "usd"){
        new_currency_amt = CADtoX(CADamt,USDxchangerate);
        std::cout << "$" << CADamt << "CAD" << " ---------> " << "$" << new_currency_amt << "USD" << std::endl << std::endl;
        
      } else if (currency == "EUR" ||currency == "eur"){
        new_currency_amt = CADtoX(CADamt, EURxchangerate);
        std::cout << "$" << CADamt << "CAD" << " ---------> " << "$" << new_currency_amt << "EUR" << std::endl << std::endl;
        
      } else if (currency == "JPY" || currency == "jpy"){
        new_currency_amt = CADtoX(CADamt, JPYxchangerate);
        std::cout << "$" << CADamt << "CAD" << " ---------> " << "$" << new_currency_amt << "JPY" << std::endl << std::endl;
        
      } else if (currency == "PHP" || currency == "php"){
        new_currency_amt = CADtoX(CADamt,PHPxchangerate);
        std::cout << "$" <<CADamt << "CAD" << " ----------> " << "$" << new_currency_amt << "PHP" << std::endl << std::endl;
        
      } else{
        std::cout << "Currency Rate not available. Please select a valid option." << std::endl <<std::endl;
      }
    break;

    case 2:
      std::cout << "Enter foreign currency amount: ";
      std::cin >> foreign_amt;
      std::cout << "Enter currency you are converting from: (USD, EUR, JPY, PHP) ";
      std::cin >> currency;

      if (currency == "USD" || currency == "usd"){
        CADamt = xtoCad(foreign_amt,USDxchangerate);
        std::cout << foreign_amt << "USD" << " ---------> " << "$" << CADamt << "CAD" << std::endl << std::endl;
        
      } else if (currency == "EUR" || currency =="eur"){
        CADamt = xtoCad(foreign_amt, EURxchangerate);
        std::cout << foreign_amt << "EUR" << " ---------> " << "$" << CADamt << "CAD" << std::endl << std::endl;
        
      } else if (currency == "JPY" || currency == "jpy"){
        CADamt = xtoCad(foreign_amt, JPYxchangerate);
        std::cout << foreign_amt << "JPY" << " ---------> " << "$" << CADamt << "CAD" <<std::endl <<std::endl;
        
      } else if (currency == "PHP" || currency == "php"){
        CADamt = xtoCad(foreign_amt, PHPxchangerate);
        std::cout << foreign_amt << "PHP" << " ---------> " << "$" <<CADamt << "CAD" <<std::endl << std::endl;
        }
      else{
        std::cout << "Currency Rate not available. Please select a valid option." << std::endl <<std::endl;
      }
    break;

    case 3:
      std::cout << "Have a nice day!" << std::endl;
      break;

    default:
      std::cout << "Please select a valid option." <<std::endl;
      break;
  }
    
}
while(choice != 3);
  
return 0;


  
}

//Function to convert CAD to chosen currency
double CADtoX(double CADamt, double xchangerate){
  return CADamt * xchangerate;
}

//Function to convert foreign currency to CAD
double xtoCad(double foreign_amt, double xchangerate){
  return foreign_amt / xchangerate;
}