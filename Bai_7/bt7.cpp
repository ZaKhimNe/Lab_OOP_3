#include <iostream>
#include <iomanip>
#include "cListNhanVienVP.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong NV van phong: ";
    cin >> n;

    cListNVVP list;
    list.Nhap(n);

    cout << "\n--- Danh sach NV ---\n";
    list.XuatAll();

    auto topSalary = list.TimLuongCaoNhat();
    cout << "\nNV co luong cao nhat:\n";
    topSalary.Xuat();

    cout << "\nTong luong phai tra: "
        << fixed << setprecision(2)
        << list.TongLuong() << "\n";

    auto oldest = list.TimTuoiCaoNhat();
    cout << "\nNV co tuoi cao nhat:\n";
    oldest.Xuat();

    list.SapXepTheoLuongTang();
    cout << "\n--- Danh sach sap xep theo luong tang dan ---\n";
    list.XuatAll();

    return 0;
}
