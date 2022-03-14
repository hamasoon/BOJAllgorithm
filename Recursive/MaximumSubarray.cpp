#include <iostream>
#include <vector>
#define MAX 2147483647

using namespace std;

vector<int> v(1001);

int determineMax(int a, int b, int c) 
{
	if (a > b) {
		if (a > c) return a;
		else return c;
	}
	else { //a<b
		if (b > c) return b;
		else return c;
	}
}

int solve_cross(int left, int right)
{
    if(left == right) return v[left];

    int left_sum = -MAX;
    int right_sum = -MAX;
    int sum = 0;

    int mid = (left + right)/2;

    for(int i = mid; i >= left; i--)
    {
        sum += v[i];
        if(sum > left_sum) left_sum = sum;
    }

    sum = 0;

    for(int i = mid + 1; i <= right; i++)
    {
        sum += v[i];
        if(sum > right_sum) right_sum = sum;
    }

    return left_sum + right_sum;
}

int solve(int left, int right)
{
    if(left == right) return v[left];

    int mid = (left + right)/2;

    int left_sum = solve(left, mid);
    int right_sum = solve(mid+1, right);
    int cross_sum = solve_cross(left, right);

    return determineMax(left_sum, right_sum, cross_sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ret = 0;  cin >> N;
    for (int i = 0; i < N; i++)
    {
        int M; cin >> M;
        for (int j = 0; j < M; j++)
        {
            cin >> v[j];
        }
        
        int ret = solve(0, M-1);

        cout << ret << "\n";
    }
}