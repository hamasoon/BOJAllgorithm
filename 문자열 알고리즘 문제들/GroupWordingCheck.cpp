#include <iostream>
#include <string>

using namespace std;

int main() {
    int i, N; cin >> N;
    int ret = 0;
    while(N--){
        string str; cin >> str;
        bool check[26] = {false};
        
        for(i=0; i<str.size(); i++){
            if(str[i-1] != str[i] && check[str[i]-'a']) break;
            check[str[i]-'a'] = true;
        }
        if(i == str.size()) ret++;
    }
    cout << ret;
}