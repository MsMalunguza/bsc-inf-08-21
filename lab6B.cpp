#include <iostream>

using namespace std;
int main(){
    int rows, columns;

    cout << "Enter the number of rows: \n";
    cin >> rows;
    while(true){
        if( rows > 3){
            cout << "The number has exceeded 3 please enter another number:\n";
            cin >> rows;
        }
        break;
    }

      cout << "Enter the number of columns: \n";
    cin >> columns;
    while(true){
        if( rows > 3){
            cout << "The number has exceeded 3 please enter another number:\n";
            cin >> columns;
        }
        break;
    }


    double** number= new double *[rows];
    for (int i = 0; i < rows; i++){
        number[i] = new double[columns];
    }


    // entering values inside the array
    for(int i =0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << "Enter the value for row "<< i+1 << " column " << j+1<<":";
            cin >> number[i][j];
        }
    }

    //printing out the array
    cout << "The values of the array are shown as follows: \n";
     for(int i =0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<< number[i][j] << " ";
        }
        cout << endl;
    }

    //deleting the dynamically allocated memory
    for(int i = 0; i < rows; i++){
        delete[] number[i];
    }
        delete[]number;



        return 0;
}