#include<bits/stdc++.h>
using namespace std;
void Max_Heap(int arr[],int n,int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<n&&arr[l]>arr[largest])largest=i;
    if(r<n&&arr[r]>arr[largest])largest=i;
    if(i!=largest){
        swap(arr[i],arr[largest]);
        Max_Heap(arr,n,largest);
    }
}
void Heap_Sort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        Max_Heap(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        Max_Heap(arr,i,0);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[107];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Heap_Sort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
