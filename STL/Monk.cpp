#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int , multiset<string> > marks_student;
    int N ;
    cin >> N;
    for(int i = 0; i<N; i++){
        int marks;
        string name;
        cin >> name >> marks;
        marks_student[-1 * marks].insert(name);
    }

    for( auto &data : marks_student){
         auto &students = data.second;
         auto &mark = data.first;

        for(auto &student : students){
            cout << student << " "<< -1 * mark<<endl ;
        }
    }
}