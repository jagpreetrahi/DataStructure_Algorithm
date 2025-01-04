#include <iostream>
using namespace std;

void pattern4(int n){
   int temp = 1;
   for(int i =0; i<n; i++){
        for(int j = 0; j<i+1; j++){

           cout<<temp;
           
            
        }
        
        
        cout<<endl;
   }
}

int main(){

    int n = 5;
    pattern4(n);

    return 0;
}