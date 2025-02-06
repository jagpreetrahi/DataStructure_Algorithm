#include <iostream>
#include <vector>
using namespace std;

int main(){
 
   vector <int> v = {1,2,4,5};
   vector <pair<int ,int > > v1;
   v1.push_back({2, 4});
   v1.push_back({2, 3});
   v1.push_back({2, 6});
   v1.push_back({2, 8});
   v1.push_back({2, 9});

   vector <pair<int , int>> :: iterator it;
   for(auto &value : v1){
     cout << value.first << " "<<value.second<<endl;
   }

   


   


    return 0;
}