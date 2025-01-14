#include<iostream>
using namespace std;


int callByValue(int n ){

   cout<<"Address of the variable is "<<&n<<endl;

   n *= n;
   return n;

}

int refereneValue(int *n){

    cout << "Address of the variable is "<<n<<endl;

    *n *= *n;
    return *n;
}



int main(){

    int n1  = 8;
    cout << "address of n1 in main(): " << &n1 << "\n"
    cout <<"Address inside the function "<<callByValue(n1) << "\n"
    
    cout << "No change in n1: " << n1 << "\n";
}