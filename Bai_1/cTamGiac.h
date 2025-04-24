#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "Diem.h"
#include <string>
using namespace std;

class cTamGiac {
private:
    cDiem A, B, C;

public:
    cTamGiac();
    cTamGiac(const cDiem& a, const cDiem& b, const cDiem& c);
    ~cTamGiac();

    void Nhap();
    void Xuat();
    bool KiemTra();
    string LoaiTamGiac();
    double TinhChuVi();
    double TinhDienTich();
    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double tyLe);
    void ThuNho(double tyLe);
};

#endif
