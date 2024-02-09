#include <string>
#include <iostream>
#include <vector>
using namespace std;




int findFirst(string pattern, string text){
    int m = pattern.length(); 
    int n = text.length();
    for (int i = 0; i < n-m; i++){
        int j = 0;
        while(j < m && text[i+j] == pattern[j]){
            j++;
        }
        if (j == m){return i;}
    }
    cout << "No Match Found!"<< endl;
    return -1;
}

vector<int> findAll(string pattern, string text){
    int m = pattern.length(); 
    int n = text.length();
    vector<int> indicies;
    for (int i = 0; i < n-m; i++){
        int j = 0;
        while(j < m && text[i+j] == pattern[j]){
            j++;
        }
        if (j == m){indicies.push_back(i);}
    }
    if (indicies.size() >0){return indicies;}
    else {
        cout << "No Matches Found!"<< endl;
        indicies.push_back(-1);
        return indicies;

    }
}




int main(){
    cout << "hello world" << endl;
    cout << findFirst("wor", "hello world");
    vector<int> indexes = findAll("w", "hewwo, worwd");
    for (int i = 0; i <indexes.size(); i ++){
        cout << (indexes[i]) << endl;
    }
    return 0;
}


