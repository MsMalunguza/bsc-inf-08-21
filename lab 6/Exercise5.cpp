#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    
    
     double Square(double side);
    double Rectangle(double width,double length);
    double Triangle(double base,double height);

    int selection;

     bool terminate = false;

      while (!terminate){
        cout <<"Please select the area of the shape to calculate \n" ;
        cout << "1. Square \n";
        cout << "2. Rectangle \n";
        cout << "3. Triangle  \n";
        cout << "4. Quit Program  \n";


        cin>>selection;
        
        switch(selection){
            case 1: {
                double base,height ;
                cout << "Enter the base and height of the triangle \n";
                cin>> base;
                cin>> height;
                double areaOfTriangle = Triangle(base,height);
                cout << fixed << setprecision(2);
                cout <<"The area of a Triangle  is: " << areaOfTriangle<< endl;
                break;
            }

                case 2 : {
                    double width ,length;
                    cout << "Enter the width and length of the rectangle \n";
                    cin >> width;
                    cin >> length;
                    double areaOfRectangle = Rectangle(width,length);
                    cout << fixed << setprecision(2);
                    cout << "The area of Rectangle is:" << areaOfRectangle<< endl;
                    break;

                
                }
                case 3 :{
                    double side;
                    cout <<"Enter the side of the square \n";
                    cin>> side;
                    double areaOfSquare = Square(side);
                    cout<< fixed<< setprecision(2);
                    cout<< "The area of Square is:" << areaOfSquare << endl;
                    break;

                }

            case 4 :{
                cout<< "Thank you \n";
                terminate = true;
                break;
            }

            default: 
            cout << "Your input was: " << selection << "  which is invalid\n";
            cout << "Please enter a valid input!!!";
        }




      } 
    
   



    return 0;
} double Triangle(double base,double height){
    return 0.5* base *height;

}
double Rectangle(double width, double length){
    return width * length ;
} double Square (double side){
    return side*side;
}