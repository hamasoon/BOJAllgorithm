#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> t;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ret = 0;  cin >> N;
    for (int i = 0; i < N; i++)
    {
        int Time; cin >> Time;
        t.push_back(Time);
    }

    sort(t.begin(), t.end());
    
    for (int i = 0; i < N; i++)
        ret += t[i] * (N - i);
    
    cout << ret;
}