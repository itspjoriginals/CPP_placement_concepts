#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of element in array : "<<endl;
    cin>>n;
    int subArray = n*(n+1)/2;
    cout<<"No. of Subarray is : "<<subArray;
    return 0;
}