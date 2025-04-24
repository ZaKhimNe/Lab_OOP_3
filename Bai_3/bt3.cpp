#include "cDSPhanSo.h"
#include <iostream>
using namespace std;

int main() {
    cDSPhanSo list;
    list.Nhap();

    cout << "\n--- Danh sach phan so vua nhap ---\n";
    list.Xuat();

    cout << "\nTong cac phan so: ";
    list.TinhTong().Xuat();
    cout << "\nPhan so lon nhat: ";
    list.TimLonNhat().Xuat();
    cout << "\nPhan so nho nhat: ";
    list.TimNhoNhat().Xuat();
    cout << "\nPhan so co tu la nguyen to lon nhat: ";
    list.TimCoTuSNTLN().Xuat();

    list.SapXepTangDan();
    cout << "\n\nSau sap xep tang dan:\n";
    list.Xuat();

    list.SapXepGiamDan();
    cout << "\nSau sap xep giam dan:\n";
    list.Xuat();

    return 0;
}
