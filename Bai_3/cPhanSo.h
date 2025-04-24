#ifndef CPHANSO_H
#define CPHANSO_H

#include <iostream>
using namespace std;

class cPhanSo {
private:
    int tu, mau;
    void RutGon();

public:
    cPhanSo();
    cPhanSo(int tu, int mau);
    ~cPhanSo();

    void Nhap();
    void Xuat() const;

    int getTu() const;
    int getMau() const;

    static int UCLN(int a, int b);
    static bool LaSoNguyenTo(int n);

    cPhanSo operator+(const cPhanSo& other) const;
    bool operator>(const cPhanSo& other) const;
    bool operator<(const cPhanSo& other) const;
    bool operator==(const cPhanSo& other) const;
};

#endif // CPHANSO_H
