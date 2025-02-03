#include <iostream>
using namespace std;

void printPair(){

}


int main(){

    pair<int , string> p;
    // two ways to initialize the pairs
    // p = make_pair(2 , "avdf");   first way
    p = {3, "dsfj"};   // second way
    pair <int , string> &p1 = p;

    p1 = {4, "SFJ"};

    cout << p1.first << " " << p1.second<<endl;
    cout << p.first << " " << p.second<<endl;

    // array of pairs

    pair<int , int> p_array[1];
    p_array[0];
    
   
//    swap(p_array[0] , p_array[2]);
    // for(int i = 0; i<3 ; i++){
    //       cout<<p_array[i].first <<" "<< p_array[i].second <<endl;
    // }

    for(int i = 0; i< 1; i++){
        int x , y;
        cin >> x >> y;
        p_array[i]  = {x , y};
    }

    for(int i = 0; i< 1; i++){
        cout<<p_array[i].first <<" "<<p_array[i].second <<endl;
    }


}