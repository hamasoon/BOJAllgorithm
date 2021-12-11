#include <iostream>
using namespace std;

void solve(int a){
    cout << a << endl;
    if(a > 1)
        solve(a-1);
}

int main() 
{
	int a;
	cin >> a;
	solve(a);
}