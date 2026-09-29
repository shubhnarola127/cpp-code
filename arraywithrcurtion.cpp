#include<iostream>
using namespace std;
void  print(int *arr, int inx,int  n){
    if(inx==n)return;
    cout<<arr[inx]<<endl;
    print(arr, inx+1,n);
}
int main(){
    int n=5;
    int arr[5] = {1,2,3,4,5};
    print(arr, 0, n);
}