#include <iostream>

using namespace std;


int main(){

    pair<int , int> p[3];
    p[0] = {3,6};
    p[1] = {4, 7};
    p[2] = {4, 6};
    


    swap(p[0], p[2]);

    cout << p[0].first << " "<< p[0].second <<endl;


    return 0;
}