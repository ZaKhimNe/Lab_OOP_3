#ifndef CDAGIAC_H
#define CDAGIAC_H

#include "cDiem.h"
#include <vector>
#include <string>
using namespace std;

class cDaGiac {
private:
    vector<cDiem> vertices;

public:
    cDaGiac();
    cDaGiac(const vector<cDiem>& pts);
    ~cDaGiac();

    void Nhap();
    void Xuat() const;
    bool KiemTra() const;
    double TinhChuVi() const;
    double TinhDienTich() const;
    void TinhTien(double dx, double dy);
    void Quay(double goc);
    void PhongTo(double tyLe);
    void ThuNho(double tyLe);
};

#endif // CDAGIAC_H
