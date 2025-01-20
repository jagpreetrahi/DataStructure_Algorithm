#include<iostream>
#include<cmath>
using namespace std;

/*  Brute force*/

/*
     bool checkPrime(int n){

    int count = 0;
    for(int i = 0; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        return true;
    }
    return false;
}
*/


/*Optimal Solution*/

bool checkPrime(int n){

    int count = 0;

    for(int i = 1; i < sqrt(n); i++){

        if(n % i == 0){
            count++;
            if(i != n/i){
                count++;
            }
        }
    }
    if(count == 2){
        return true;
    }
    else{
        return false;
    }
}



int main(){

    int n = 1483;

    bool result = checkPrime(n);
    if(result){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}