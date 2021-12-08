#include <cstdio>
#include <vector>
using namespace std;

int heap[1000] = {0};
int cnt = 0;

void add(int a){
	heap[cnt] = a; cnt++;
	if(cnt == 1) return;

	int loc = cnt-1;

	while(heap[(loc-1)/2] > a){
		int temp = heap[(loc-1)/2];
        heap[(loc-1)/2] = a;
        heap[loc] = temp;
        
		loc = (loc-1)/2;

		if(loc == 0) break;
	}
}

int pop(){
	int ret = heap[0];
	heap[0] = heap[cnt-1]; 
    heap[cnt-1] = 0; cnt--;
	int temp = heap[0], loc = 0;
    
    if(cnt == -1) return ret;
    
	while(loc < cnt){
        if(loc*2 + 1 >= cnt) break;
        
		int l = heap[loc*2 + 1];
        int r = 0;
        
        if(loc*2 + 2 > cnt-1) r = 9999999;
        else r = heap[loc*2 + 2];

		if(temp < l && temp < r) break;
		else if(l < r){swap(heap[loc*2 + 1], heap[loc]); loc = loc*2 + 1;}
		else {swap(heap[loc*2 + 2], heap[loc]); loc = loc*2 + 2;}
	}

	return ret;
}

int main(){
	int N; scanf("%d", &N);
   
	for (int i = 0; i < N; i++){
		int temp; scanf("%d", &temp);
		add(temp);
	}

    for (int i = 0; i < N; i++) printf("%d\n", pop());
}