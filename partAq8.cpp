#include<iostream>
using namespace std;
int main(){
int a,rev=0,n;
cout<<"enter the no of a:";
cin>>a;
while(a != 0){
int c=a % 10;
c=rev*10+c;
a /= 10;
cout<<c<<endl;
}
}
