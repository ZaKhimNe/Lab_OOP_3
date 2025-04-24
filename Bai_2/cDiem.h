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

    // Nhập / xuất
    void Nhap();
    void Xuat() const;

    // Khoảng cách
    double KhoangCach(const cDiem& other) const;

    // Biến đổi hình học
    void TinhTien(double dx, double dy);
    void Quay(double rad);
    void PhongTo(double tyLe);

    // Getter toạ độ
    double getX() const;
    double getY() const;
};

#endif // CDIEM_H
