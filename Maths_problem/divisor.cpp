#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


std::vector <int> divisor(int n){

    vector<int> result;
   
   /*
        for(int i = 1; i<=n; i++){
            if(n % i == 0){
                result.push_back(i);
            
            }
        }
   */

     for(int i = 1 ; i <= sqrt(n); i++){
        if(n % i == 0){
            result.push_back(i);
            if(i != n/i){
                result.push_back(n/i);
            }
        }
     }
   
    
    return result;
     
}


int main(){

    int n = 36;
    vector<int> final_divisor = divisor(n);
    
    for(int digit : final_divisor){
        cout<<digit<<" ";
    }

    return 0;

}