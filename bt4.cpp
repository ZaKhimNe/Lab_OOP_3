#include <iostream>
#include <climits>
#include "cArray.h"
using namespace std;

int main() {
    cArray arr;
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    arr.TaoNgauNhien(n, 0, 100);
    cout << "\nMang ngau nhien:\n"; arr.Xuat();

    int x;
    cout << "\nNhap gia tri x can dem: ";
    cin >> x;
    cout << "So lan x xuat hien: " << arr.DemX(x) << "\n";

    cout << "Mang tang dan: "
        << (arr.KiemTraTangDan() ? "Co\n" : "Khong\n");

    int leMin = arr.TimLeNhoNhat();
    if (leMin == INT_MAX)
        cout << "Khong co so le trong mang.\n";
    else
        cout << "Phan tu le nho nhat: " << leMin << "\n";

    int sntMax = arr.TimSNTLonNhat();
    if (sntMax < 0)
        cout << "Khong co so nguyen to trong mang.\n";
    else
        cout << "So nguyen to lon nhat: " << sntMax << "\n";

    arr.SapXepTangDan();
    cout << "\nMang sau sap xep tang dan:\n"; arr.Xuat();

    arr.SapXepGiamDan();
    cout << "\nMang sau sap xep giam dan:\n"; arr.Xuat();

    return 0;
}
