#ifndef CLISTNHANVIENVP_H
#define CLISTNHANVIENVP_H

#include "cNhanVienVP.h"
#include <vector>
using namespace std;

class cListNVVP {
private:
    vector<cNhanVienVP> ds;

public:
    cListNVVP();
    ~cListNVVP();

    void Nhap(int n);
    void XuatAll() const;
    cNhanVienVP TimLuongCaoNhat() const;
    double TongLuong() const;
    cNhanVienVP TimTuoiCaoNhat() const;
    void SapXepTheoLuongTang();
};

#endif // CLISTNHANVIENVP_H
