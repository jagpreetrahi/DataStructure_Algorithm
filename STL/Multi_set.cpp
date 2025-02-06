#include <iostream>
#include <set>

using namespace std;


int main(){

    int test;
    cin >> test;
    while(test--){
        // taking input
        int n , k;
        cin >> n >> k;
        multiset<long long> bags;
        //insert candies into bags
        for(int i = 0; i<n; i++){
            long long candy_count;
            cin >> candy_count;
            bags.insert(candy_count);
        }

        long long total_candies = 0;

        // finds the maximum candies 
        for(int i=0 ; i < k; i++){
            auto last_candy = (--bags.end());
            long long  candy_count  = *last_candy;
            total_candies += candy_count;
            bags.erase(last_candy);
            bags.insert(candy_count / 2);
        }

        cout << total_candies <<endl;
    }
}