#ifndef CCANDIDATE_H
#define CCANDIDATE_H

#include <string>
#include <iostream>
using namespace std;

class cCandidate {
private:
    string id;
    string name;
    string dob;       // "dd/mm/yyyy"
    double math;
    double literature;
    double english;

public:
    cCandidate();
    ~cCandidate();

    void Nhap();
    void Xuat() const;

    double TongDiem() const;
};

#endif // CCANDIDATE_H
