#ifndef CLISTNHANVIENSX_H
#define CLISTNHANVIENSX_H

#include "cNhanVienSX.h"
#include <vector>
using namespace std;

class cListNVSX {
private:
    vector<cNhanVienSX> ds;

public:
    cListNVSX();
    ~cListNVSX();

    void Nhap(int n);
    void XuatAll() const;
    cNhanVienSX TimLuongThapNhat() const;
    double TongLuong() const;
    cNhanVienSX TimTuoiCaoNhat() const;
    void SapXepTheoLuongTang();
};

#endif // CLISTNHANVIENSX_H
