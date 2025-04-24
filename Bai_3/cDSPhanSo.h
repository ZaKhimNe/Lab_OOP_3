#ifndef CDSPHANSO_H
#define CDSPHANSO_H

#include "cPhanSo.h"
#include <vector>
using namespace std;

class cDSPhanSo {
private:
    vector<cPhanSo> ds;

public:
    cDSPhanSo();
    ~cDSPhanSo();

    void Nhap();
    void Xuat() const;

    cPhanSo TinhTong() const;
    cPhanSo TimLonNhat() const;
    cPhanSo TimNhoNhat() const;
    cPhanSo TimCoTuSNTLN() const;

    void SapXepTangDan();
    void SapXepGiamDan();
};

#endif // CDSPHANSO_H
