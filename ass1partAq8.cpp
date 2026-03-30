#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,f;
char op;
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"enter the op(+,-,*,/)";
cin>>op;
if (op=='+'){
c=a+b;
cout<<c;
}
else if (op=='-'){
d=a-b;
cout<<d;
}
else if(op=='*'){
e=a*b;
cout<<e;
}
else if(op=='/'){
f=a/b;
cout<<f;
}

}
