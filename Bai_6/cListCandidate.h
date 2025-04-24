#ifndef CLISTCANDIDATE_H
#define CLISTCANDIDATE_H

#include "cCandidate.h"
#include <vector>
using namespace std;

class cListCandidate {
private:
    vector<cCandidate> ds;

public:
    cListCandidate();
    ~cListCandidate();

    void Nhap(int n);
    void XuatTren15() const;
    cCandidate TimCaoNhat() const;
    void SapXepGiam();
    void XuatAll() const;
};

#endif // CLISTCANDIDATE_H
