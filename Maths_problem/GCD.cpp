/* Brute Force*/

#include<iostream>
using namespace std;

/*Brute Force*/

  int checkGCDByBruteForce(int a , int b){
        // int gcd = 1;
        for(int i = 1; i < min(a , b); i--){
        if(a % i == 0 && b % i == 0){
            gcd = i
        }
        }
        return gcd; 
    }
/*Brute Force*/

/*Better Approach*/

/* */
  int checkGCDByBruteForce(int a , int b){
        
        for(int i = min(a , b); i >=1 ; i--){
        if(a % i == 0 && b % i == 0){
            return i
        }
        }
        return 1; // non positive number;
    }
/* Better Approach*/

/*Euclidean Algorithm  ---> Optimal Approach*/

int checkGCD(int a , int b){
    while(a > 0 && b > 0){

        // if a is greater than b
        if(a > b){

            a = a%b;
        }

        else{
            b = b % a;
        }
    }

    if( a == 0){
        return b ;
    }
    return a ;
}

/* Optimal Approach*/





int main(){

    int a  = 20 ;
    int b = 15;

    int result = checkGCD(a , b);
    cout<<"The GCD number is "<<result<<endl;
    
}