#include<iostream>
using namespace std;

bool checkPalindrome(int number){
    int originalNumber = number;
    int reverseNumber = 0;
    while(number > 0){
        int last = number % 10;
        reverseNumber = reverseNumber * 10 + last;
        
        number /= 10;
    }
     
    if(reverseNumber == originalNumber){
        return true;
    }
    else{
        return false;
    }
}

int main(){
     int number = 1213;

    bool result = checkPalindrome(number);
    
    if(result){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
}

