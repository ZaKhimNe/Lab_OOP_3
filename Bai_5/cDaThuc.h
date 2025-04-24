#ifndef CDATHUC_H
#define CDATHUC_H

#include <vector>
using namespace std;

class cDaThuc {
private:
    int n;                      
    vector<double> coeff;       

public:
    cDaThuc(int degree = 0);
    ~cDaThuc();

    void Nhap();               
    void Xuat() const;          

    double TinhGiaTri(double x) const;

    cDaThuc operator+(const cDaThuc& other) const;
    cDaThuc operator-(const cDaThuc& other) const;

    int getBac() const;
};

#endif // CDATHUC_H
