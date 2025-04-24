#ifndef CARRAY_H
#define CARRAY_H

#include <vector>
using namespace std;

class cArray {
private:
    vector<int> data;

public:
    cArray();
    ~cArray();

    void TaoNgauNhien(int n, int minVal = 0, int maxVal = 100);

    void Xuat() const;

    int DemX(int x) const;

    bool KiemTraTangDan() const;

    int TimLeNhoNhat() const;


    int TimSNTLonNhat() const;


    void SapXepTangDan();
    void SapXepGiamDan();

    static bool LaSoNguyenTo(int n);
};

#endif // CARRAY_H
