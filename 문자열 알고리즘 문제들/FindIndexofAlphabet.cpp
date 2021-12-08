#include <iostream>
#include <cstring>

using namespace std;
int temp = 0;

int main() {
    int ret[26] = {};
    fill_n(ret, 26, -1);
    string a; cin >> a;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    
    for(int i=0; i < a.size(); i++){
        for(int j=0; j<26; j++){
            if(a[i] == alpha[j] && ret[j] == -1) {ret[j]=i; break;}
        }
    }
    
    for(int j=0; j<26; j++){
        cout << ret[j] << " ";
    }
	
	