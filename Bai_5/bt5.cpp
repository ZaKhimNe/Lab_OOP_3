#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {
    cout << "=== Nhap da thuc P ===\n";
    cDaThuc P;
    P.Nhap();
    cout << "\nP(x) = "; P.Xuat();

    cout << "\n=== Nhap da thuc Q ===\n";
    cDaThuc Q;
    Q.Nhap();
    cout << "\nQ(x) = "; Q.Xuat();


    double x;
    cout << "\nNhap gia tri x de tinh P(x) va Q(x): ";
    cin >> x;
    cout << "P(" << x << ") = " << P.TinhGiaTri(x) << endl;
    cout << "Q(" << x << ") = " << Q.TinhGiaTri(x) << endl;


    cDaThuc S = P + Q;
    cDaThuc D = P - Q;
    cout << "\nP(x) + Q(x) = "; S.Xuat();
    cout << "P(x) - Q(x) = "; D.Xuat();

    return 0;
}
