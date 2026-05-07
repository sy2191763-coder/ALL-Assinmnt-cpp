#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter the array";
    cin>> n;

     int *a = (int*) malloc(n * sizeof(int));
    int *b = (int*) malloc(n * sizeof(int));
    int *c = (int*) malloc(n * sizeof(int));
     cout << "first array element : " << endl;
    for(i = 0; i < n; i++) cin >> a[i];


    cout << " second array element: " << endl;
    for(i = 0; i < n; i++) cin >> b[i];{


    cout << "sum of first and second array: " << endl;
    for(i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
        cout << c[i] << " ";
    }
    free(a);
    free(b);
    free(c);

    return 0;
}

}



