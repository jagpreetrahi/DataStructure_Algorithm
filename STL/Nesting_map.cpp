#include <iostream>
#include <vector>
#include <map>
using namespace std;

// The problem is to store the student name as first and last name , also their makrs of subjects;

int main(){
    map< pair<string , string> , vector<int> > m;
    //no of students
    int N;
    cin >> N;

    for(int i = 0; i<N; i++){
        string first_name , last_name;
        int count_of_subject;
        cin >> first_name >> last_name >> count_of_subject;

        for(int j = 0; j < count_of_subject; j++){
            int x ;
            cin >>x;
            m[{first_name , last_name}].push_back(x);
        }
    }

    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list_of_marks = pr.second;
        cout <<full_name.first << " " <<full_name.second <<endl;
        cout << list_of_marks.size()<<endl;
        for(auto &element : list_of_marks){
            cout << element << " ";
        }
        cout << endl;
    }
}

