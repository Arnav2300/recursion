#include<iostream>
using namespace std;

float solve(int arr[], int size){
    if(size==1)return (float)arr[size-1];
    else{
        return ((float)(solve(arr,size-1)*(size-1)+arr[size-1])/size);
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)cin>>arr[i];
    cout<<solve(arr,size);
    return 0;
}