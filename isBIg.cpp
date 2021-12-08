#include <cstdio>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    
	while(true){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a == 0 && b == 0)
			break;
		q.push(a);
		q.push(b);
	}

	while(!q.empty()){
		int a = q.front(); q.pop();
		int b = q.front(); q.pop();

		printf((a>b) ? "Yes\n" : "No\n");
	}
}