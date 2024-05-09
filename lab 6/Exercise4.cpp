#include <iostream>
#include <limits>
using namespace std;

int main(){
    bool Valid_input = false;
    int input;
    cout <<"enter an integer value between 5 and 10"<<endl;
    
    while(!Valid_input){
      
      cin>>input;
        
        if (cin.fail()){
            cout<<"sorry you entered an invalid number, please try again\n";
            cin.clear();//clears invalid input error
            cin.ignore(numeric_limits<streamsize>::max(),'\n');// clears characters inside the buffer
        }
        
        else if (input<5 || input >10){
            cout<<"you have entered  "<<input<<". please enter a number between 5 and 10\n";
        } 
        
        else {
            Valid_input = true;
        }

   
    }

    cout<<"Your input value("<<input<<") has been accepted.\n";
        
    return 0;
}