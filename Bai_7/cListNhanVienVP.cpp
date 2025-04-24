#include "cListNhanVienVP.h"
#include <iostream>
#include <algorithm>
#include <iomanip>

cListNVVP::cListNVVP() {}
cListNVVP::~cListNVVP() {}

void cListNVVP::Nhap(int n) {
    ds.clear();
    ds.reserve(n);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; ++i) {
        cout << "\n-- Nhap nhan vien thu " << i + 1 << " --\n";
        cNhanVienVP nv;
        nv.Nhap();
        ds.push_back(nv);
    }
}

void cListNVVP::XuatAll() const {
    cout << left
        << setw(8) << "MaNV"
        << setw(20) << "Ho Ten"
        << setw(12) << "DOB"
        << setw(8) << "Luong"
        << setw(6) << "Tuoi"
        << "\n";
    for (auto& nv : ds)
        nv.Xuat();
}

cNhanVienVP cListNVVP::TimLuongCaoNhat() const {
    if (ds.empty()) return cNhanVienVP();
    return *max_element(ds.begin(), ds.end(),
        [](auto& a, auto& b) {
            return a.getSalary() < b.getSalary();
        });
}

double cListNVVP::TongLuong() const {
    double sum = 0;
    for (auto& nv : ds)
        sum += nv.getSalary();
    return sum;
}

cNhanVienVP cListNVVP::TimTuoiCaoNhat() const {
    if (ds.empty()) return cNhanVienVP();
    // Tu?i cao nh?t => getAge() l?n nh?t
    return *max_element(ds.begin(), ds.end(),
        [](auto& a, auto& b) {
            return a.getAge() < b.getAge();
        });
}

void cListNVVP::SapXepTheoLuongTang() {
    sort(ds.begin(), ds.end(),
        [](auto& a, auto& b) {
            return a.getSalary() < b.getSalary();
        });
}
