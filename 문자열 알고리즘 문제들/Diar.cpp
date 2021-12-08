#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string a; cin >> a;
    int ret = 0;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] > 'V') ret += 10;
        else if(a[i] > 'S') ret += 9;
        else if(a[i] > 'O') ret += 8;
        else ret += (a[i]-'A')/3 + 3;
    }
    
    cout<<ret;
}