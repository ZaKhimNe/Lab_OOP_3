#include "cDaThuc.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

cDaThuc::cDaThuc(int degree)
    : n(degree), coeff(degree + 1, 0.0) {
}

cDaThuc::~cDaThuc() {}

int cDaThuc::getBac() const {
    return n;
}

void cDaThuc::Nhap() {
    cout << "Nhap bac n cua da thuc: ";
    cin >> n;
    coeff.assign(n + 1, 0.0);
    for (int i = n; i >= 0; --i) {
        cout << "  He so a[" << i << "] (x^" << i << "): ";
        cin >> coeff[i];
    }
}

void cDaThuc::Xuat() const {
    bool first = true;
    for (int i = n; i >= 0; --i) {
        double a = coeff[i];
        if (fabs(a) < 1e-9) continue;
  
        if (!first) {
            cout << (a >= 0 ? " + " : " - ");
            a = fabs(a);
        }
        else if (a < 0) {
            cout << "-";
            a = fabs(a);
        }
   
        if (i == 0 || fabs(a - 1.0) > 1e-9)
            cout << a;
     
        if (i >= 1) {
            cout << "x";
            if (i > 1)
                cout << "^" << i;
        }
        first = false;
    }
    if (first) 
        cout << 0;
    cout << endl;
}

double cDaThuc::TinhGiaTri(double x) const {
    double result = 0;
    for (int i = n; i >= 0; --i) {
        result = result * x + coeff[i];
    }
    return result;
}

cDaThuc cDaThuc::operator+(const cDaThuc& other) const {
    int m = max(n, other.n);
    cDaThuc sum(m);
    for (int i = 0; i <= m; ++i) {
        double a = (i <= n ? coeff[i] : 0.0);
        double b = (i <= other.n ? other.coeff[i] : 0.0);
        sum.coeff[i] = a + b;
    }
    return sum;
}

cDaThuc cDaThuc::operator-(const cDaThuc& other) const {
    int m = max(n, other.n);
    cDaThuc diff(m);
    for (int i = 0; i <= m; ++i) {
        double a = (i <= n ? coeff[i] : 0.0);
        double b = (i <= other.n ? other.coeff[i] : 0.0);
        diff.coeff[i] = a - b;
    }
    return diff;
}
