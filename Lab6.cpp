#include <iostream>
#include <string>
using namespace std;


int main(){

 int* pNumber= new int;
  string* pWord = new string;
  
   cout << "enter an integer \n";
   cin >> *pNumber;
   cout << "Enter a string \n";
   cin >> *pWord;
    

    cout << *pNumber << endl;
    cout << *pWord << endl;


    delete pNumber;
    delete pWord;


    return 0;
}
