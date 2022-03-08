#include<iostream>

using namespace std;

int N;
int v[1000001] = {};
int sort[1000001] = {};

void merge(int l, int r)
{
    int mid = (l + r)/2;

    int i = l;
    int j = mid+1;
    int k = l;
    while(i <= mid && j <= r)
    {
        if(v[i] <= v[j])
            sort[k++] = v[i++];
        else
            sort[k++] = v[j++];
    }

    int tmp = i>mid ? j : i;

    while(k<=r) sort[k++] = v[tmp++];

    for (int i = l; i <= r; i++) v[i] = sort[i];
}

void mergeSort(int l, int r)
{
    int mid;
    if(l < r)
    {
        mid = (l+r)/2;
        mergeSort(l, mid);
        mergeSort(mid+1, r);
        merge(l, r);
    }
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d", &v[i]);
    
    mergeSort(0, N-1);

    for (int i = 0; i < N; i++) printf("%d\n", sort[i]);
}