#include<iostream>
using namespace std;
int main(){
int n,c=0;
cout<<"enter the value ";
cin>>n;
while(n!=0){
n /=10;
c++;
}
cout<<c;
}
