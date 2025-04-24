#include <iostream>
#include <iomanip>
#include "cListNhanVienSX.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong NV san xuat: ";
    cin >> n;

    cListNVSX list;
    list.Nhap(n);

    cout << "\n--- Danh sach NV SX ---\n";
    list.XuatAll();

    auto mn = list.TimLuongThapNhat();
    cout << "\nNV co luong thap nhat:\n";
    mn.Xuat();

    cout << "\nTong luong phai tra: "
        << fixed << setprecision(2)
        << list.TongLuong() << "\n";

    auto old = list.TimTuoiCaoNhat();
    cout << "\nNV co tuoi cao nhat:\n";
    old.Xuat();

    list.SapXepTheoLuongTang();
    cout << "\n--- DS sap xep theo luong tang dan ---\n";
    list.XuatAll();

    return 0;
}
