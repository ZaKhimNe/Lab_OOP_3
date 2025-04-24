#include "cPhanSo.h"
#include <cmath>
#include <iostream>
using namespace std;

cPhanSo::cPhanSo() : tu(0), mau(1) {}

cPhanSo::cPhanSo(int tu, int mau)
    : tu(tu), mau(mau) {
    if (mau == 0) {
        cout << "Mau so khong hop le! Dat ve 1.\n";
        this->mau = 1;
    }
    RutGon();
}

cPhanSo::~cPhanSo() {}

int cPhanSo::UCLN(int a, int b) {
    a = abs(a); b = abs(b);
    while (b) {
        int r = a % b;
        a = b; b = r;
    }
    return a;
}

void cPhanSo::RutGon() {
    int g = UCLN(tu, mau);
    if (g > 0) {
        tu /= g;
        mau /= g;
    }
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
}

bool cPhanSo::LaSoNguyenTo(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

void cPhanSo::Nhap() {
    cout << "  Nhap tu: ";  cin >> tu;
    cout << "  Nhap mau: "; cin >> mau;
    if (mau == 0) {
        cout << "  Mau phai khac 0! Gan ve 1.\n";
        mau = 1;
    }
    RutGon();
}

void cPhanSo::Xuat() const {
    cout << tu << "/" << mau;
}

int cPhanSo::getTu()  const { return tu; }
int cPhanSo::getMau() const { return mau; }

cPhanSo cPhanSo::operator+(const cPhanSo& other) const {
    int newTu = tu * other.mau + mau * other.tu;
    int newMau = mau * other.mau;
    return cPhanSo(newTu, newMau);
}

bool cPhanSo::operator>(const cPhanSo& other) const {
    return (long long)tu * other.mau > (long long)other.tu * mau;
}

bool cPhanSo::operator<(const cPhanSo& other) const {
    return (long long)tu * other.mau < (long long)other.tu * mau;
}

bool cPhanSo::operator==(const cPhanSo& other) const {
    return tu == other.tu && mau == other.mau;
}
