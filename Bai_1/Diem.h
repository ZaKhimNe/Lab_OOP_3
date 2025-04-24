#ifndef CDIEM_H
#define CDIEM_H

#include <iostream>
#include <cmath>
using namespace std;

class cDiem {
private:
    double x, y;

public:
    cDiem();
    cDiem(double x, double y);
    ~cDiem();

    void Nhap();
    void Xuat() const;

    double KhoangCach(const cDiem& other) const;

    void TinhTien(double dx, double dy);
    void Quay(double rad);
    void PhongTo(double tyLe);
};

#endif // CDIEM_H
