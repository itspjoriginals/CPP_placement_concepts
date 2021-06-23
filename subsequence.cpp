#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of element in array : "<<endl;
    cin>>n;
    int subSequence =  pow (2, n );
    cout<<"No. of SubSequence is : "<<subSequence;
    return 0;
}