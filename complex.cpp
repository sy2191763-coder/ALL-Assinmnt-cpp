#include<iostream>
using namespace std;

class complex {
public:
    int real;
    int img;

    void input() {
        cin >> real >> img;
    }

    void add(complex x, complex y) {
        real = x.real + y.real;
        img = x.img + y.img;
    }

    void diff(complex x, complex y) {
        real = x.real - y.real;
        img = x.img - y.img;
    }

    void display() {
        if (img >= 0)
            cout << real << "+" << img << "i";
        else
            cout << real << img << "i";
    }
};

int main() {
    complex a, b, sum, diff;

    cout << "Enter the first complex number (real img): ";
    a.input();

    cout << "Enter the second complex number (real img): ";
    b.input();

    sum.add(a, b);
    diff.diff(a, b);

    cout << "\nSum = ";
    sum.display();

    cout << "\nDifference = ";
    diff.display();

    return 0;
}


