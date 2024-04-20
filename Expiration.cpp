#include <iostream>
#include <random>

int main() {
    //  random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    int beat;
    
    // specifying the range of intergers from 0 to 11
    std::uniform_int_distribution<> dis(0, 11);
    
    // Generate and print a random number
    int daysUntilExpiration  = dis(gen);
    
 if (daysUntilExpiration == 0)
     std :: cout << "Your subscription has expired";

     else if (daysUntilExpiration == 1)
    std :: cout << "Your subscription expires within a day!  \n" << " Renew now and save 20%"; 

 else if (daysUntilExpiration <= 5)
     std :: cout << "Your subscription expires in " << daysUntilExpiration << " days \n Renew now and save 10%";
    
else if (daysUntilExpiration <= 10)
    std::cout <<  "Your subscription will expire soon. Renew now!";
    
      else 
      std :: cout << "You have an active subscription";
    return 0;
}




