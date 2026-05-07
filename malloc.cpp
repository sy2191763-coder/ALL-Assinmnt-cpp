#include<iostream>
using namespace std;
int main(){
    int *a,n,i;
    cout<< "enter the size of array";
    cin>>n;
    a=(int*) malloc (n * sizeof (int));
    for (i=0;i<n;i=i+1){
        cout << "enter value :";
        cin>> *(a+i);
    }
    for (i=0;i<n;i=i+1){
        cout << *(a+1)<< "";
    }


}
