#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){

    int k = to_string(n).length();
    int sum = 0; 
    int temp = n;
    while(n > 0){
        int power = 1;
        int ld = n % 10;
        for(int i = 0; i<k; i++){
             power *= ld;
           
        }
       
        sum += power;
        n /= 10;
    }
    

    if(sum == temp){
        return true;
    }

    return false;


}

int main(){

    int n = 153;
   
    bool result = checkArmstrong(n);
    if(result){
        cout<<"The number is armstrong";
    }
    else{
        cout<<"The number is not armstrong";
    }

}