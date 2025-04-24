#include "cDSPhanSo.h"
#include <iostream>
#include <algorithm>
using namespace std;

cDSPhanSo::cDSPhanSo() {}
cDSPhanSo::~cDSPhanSo() {}

void cDSPhanSo::Nhap() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    ds.clear();
    ds.reserve(n);
    for (int i = 0; i < n; ++i) {
        cout << "Phan so " << i + 1 << ":\n";
        cPhanSo p;
        p.Nhap();
        ds.push_back(p);
    }
}

void cDSPhanSo::Xuat() const {
    for (size_t i = 0; i < ds.size(); ++i) {
        cout << "[" << i + 1 << "] ";
        ds[i].Xuat();
        cout << "\n";
    }
}

cPhanSo cDSPhanSo::TinhTong() const {
    cPhanSo sum(0, 1);
    for (auto& p : ds)
        sum = sum + p;
    return sum;
}

cPhanSo cDSPhanSo::TimLonNhat() const {
    if (ds.empty()) return cPhanSo(0, 1);
    return *max_element(ds.begin(), ds.end(),
        [](auto& a, auto& b) { return a < b; });
}

cPhanSo cDSPhanSo::TimNhoNhat() const {
    if (ds.empty()) return cPhanSo(0, 1);
    return *min_element(ds.begin(), ds.end(),
        [](auto& a, auto& b) { return a < b; });
}

cPhanSo cDSPhanSo::TimCoTuSNTLN() const {
    bool found = false;
    cPhanSo best(0, 1);
    for (auto& p : ds) {
        if (cPhanSo::LaSoNguyenTo(p.getTu())) {
            if (!found || p.getTu() > best.getTu()) {
                best = p;
                found = true;
            }
        }
    }
    if (!found)
        cout << "Khong co phan so nao co tu la so nguyen to.\n";
    return best;
}

void cDSPhanSo::SapXepTangDan() {
    sort(ds.begin(), ds.end(),
        [](auto& a, auto& b) { return a < b; });
}

void cDSPhanSo::SapXepGiamDan() {
    sort(ds.begin(), ds.end(),
        [](auto& a, auto& b) { return a > b; });
}
