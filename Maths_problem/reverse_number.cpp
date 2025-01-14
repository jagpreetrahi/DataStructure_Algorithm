#include<iostream>
using namespace std;


int reverseNumber(int number){

    int reverse_number = 0;
    while(number > 0){
        int last = number % 10;
        reverse_number = reverse_number * 10 + last;
        number /= 10;
    }

    return reverse_number;
}

int main(){

    int number = 77890;

    int result = reverseNumber(number);
    cout<<"The reverse number is "<<result<<endl;
}

