#include <iostream>
using namespace std;

void pattern7(int n){
    
   

    // stars
    for(int i = 0; i<n; i++){

        // spaces
        for(int j = 0; j<n-i-1; j++){
            cout<<"  ";
        }
       for(int j = 0; j < 2*i +1; j++){
          cout <<"* ";
       }
       cout<<endl;
    }
}

int main(){

    int n = 5;
    pattern7(n);

    return 0;
}