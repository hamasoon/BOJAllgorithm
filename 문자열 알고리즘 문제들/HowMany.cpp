#include <iostream>
#include <cstring>

using namespace std;
int temp = 0;

int main() {
    int ret[26] = {};
    string a; cin >> a;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for(int i=0; i < a.size(); i++){
        a[i] = toupper(a[i]);
        for(int j=0; j<26; j++){
            if(a[i] == alpha[j]) {ret[j]++; break;}
        }
    }
    
    int max = 0, r = 0, result = 0;
    for(int i=0; i<26; i++){
        if(max < ret[i]) {max = ret[i]; r = 0; result = i; continue;}
        if(max == ret[i]) r++;
    }
    
    if(r == 0)  cout << alpha[result];
    else cout << "?";
}