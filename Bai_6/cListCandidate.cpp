#include "cListCandidate.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

cListCandidate::cListCandidate() {}
cListCandidate::~cListCandidate() {}

void cListCandidate::Nhap(int n) {
    ds.clear();
    ds.reserve(n);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; ++i) {
        cout << "\n--- Thi sinh " << i + 1 << " ---\n";
        cCandidate c;
        c.Nhap();
        ds.push_back(c);
    }
}

void cListCandidate::XuatTren15() const {
    cout << "\n-- Thi sinh co tong diem > 15 --\n";
    cout << left
        << setw(8) << "Ma"
        << setw(20) << "Ten"
        << setw(12) << "Ngay sinh"
        << setw(6) << "Toan"
        << setw(6) << "Van"
        << setw(6) << "Anh"
        << setw(8) << "Tong"
        << "\n";
    for (auto& c : ds) {
        if (c.TongDiem() > 15.0)
            c.Xuat();
    }
}

cCandidate cListCandidate::TimCaoNhat() const {
    if (ds.empty()) return cCandidate();
    return *max_element(ds.begin(), ds.end(),
        [](const cCandidate& a, const cCandidate& b) {
            return a.TongDiem() < b.TongDiem();
        });
}

void cListCandidate::SapXepGiam() {
    sort(ds.begin(), ds.end(),
        [](const cCandidate& a, const cCandidate& b) {
            return a.TongDiem() > b.TongDiem();
        });
}

void cListCandidate::XuatAll() const {
    cout << "\n-- Danh sach thi sinh --\n";
    cout << left
        << setw(8) << "Ma"
        << setw(20) << "Ten"
        << setw(12) << "Ngay sinh"
        << setw(6) << "Toan"
        << setw(6) << "Van"
        << setw(6) << "Anh"
        << setw(8) << "Tong"
        << "\n";
    for (auto& c : ds) {
        c.Xuat();
    }
}
