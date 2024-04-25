#include <iostream>
using namespace std;

int main(){
    string id[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    int arraySize = sizeof(id)/sizeof(id[0]);
    char target_letter ='B';

    for (int i = 0; i < arraySize; i++){
       if (id[i][0] == target_letter){
            cout << id[i] << endl;
       }

    }
    return 0;
}