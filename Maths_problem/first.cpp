#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

std::vector<int>   printDigit(int number){

    vector<int> vec;
    while(number > 0){
        int last = number%10;
        // vec.push_back(last);
        vec.insert(vec.begin() , last); 
        number /= 10;
    }
    // std::reverse(vec.begin() , vec.end());
    return vec;
}


int main(){

    int number = 7789;
     // initialize an empty vector array
    vector<int> digits = printDigit(number);

    cout<<"Digits of "<<number<< " are :";

    for(int digit : digits){
       cout<<digit<<" ";
    }
    
    return 0;

}