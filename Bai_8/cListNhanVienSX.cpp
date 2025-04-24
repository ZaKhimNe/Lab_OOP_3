#include "cListNhanVienSX.h"
#include <iostream>
#include <algorithm>
#include <iomanip>

cListNVSX::cListNVSX() {}
cListNVSX::~cListNVSX() {}

void cListNVSX::Nhap(int n) {
    ds.clear();
    ds.reserve(n);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; ++i) {
        cout << "\n-- Nhap NV SX thu " << i + 1 << " --\n";
        cNhanVienSX nv;
        nv.Nhap();
        ds.push_back(nv);
    }
}

void cListNVSX::XuatAll() const {
    cout << left
        << setw(8) << "MaNV"
        << setw(20) << "Ho Ten"
        << setw(12) << "DOB"
        << right
        << setw(8) << "SoLuong"
        << setw(12) << "DonGia"
        << setw(12) << "Luong"
        << setw(6) << "Tuoi"
        << "\n";
    for (auto& nv : ds)
        nv.Xuat();
}

cNhanVienSX cListNVSX::TimLuongThapNhat() const {
    if (ds.empty()) return cNhanVienSX();
    return *min_element(ds.begin(), ds.end(),
        [](auto& a, auto& b) {
            return a.getLuong() < b.getLuong();
        });
}

double cListNVSX::TongLuong() const {
    double sum = 0;
    for (auto& nv : ds)
        sum += nv.getLuong();
    return sum;
}

cNhanVienSX cListNVSX::TimTuoiCaoNhat() const {
    if (ds.empty()) return cNhanVienSX();
    return *max_element(ds.begin(), ds.end(),
        [](auto& a, auto& b) {
            return a.getAge() < b.getAge();
        });
}

void cListNVSX::SapXepTheoLuongTang() {
    sort(ds.begin(), ds.end(),
        [](auto& a, auto& b) {
            return a.getLuong() < b.getLuong();
        });
}
