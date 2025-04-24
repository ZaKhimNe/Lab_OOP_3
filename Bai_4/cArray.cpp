#include "cArray.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

cArray::cArray() {
    srand((unsigned)time(nullptr));
}

cArray::~cArray() {}

void cArray::TaoNgauNhien(int n, int minVal, int maxVal) {
    data.clear();
    data.reserve(n);
    for (int i = 0; i < n; ++i) {
        int v = minVal + rand() % (maxVal - minVal + 1);
        data.push_back(v);
    }
}

void cArray::Xuat() const {
    for (int v : data)
        cout << v << " ";
    cout << "\n";
}

int cArray::DemX(int x) const {
    int cnt = 0;
    for (int v : data)
        if (v == x) ++cnt;
    return cnt;
}

bool cArray::KiemTraTangDan() const {
    for (size_t i = 1; i < data.size(); ++i)
        if (data[i] < data[i - 1])
            return false;
    return true;
}

int cArray::TimLeNhoNhat() const {
    int best = INT_MAX;
    for (int v : data)
        if (v % 2 != 0 && v < best)
            best = v;
    return best;
}

bool cArray::LaSoNguyenTo(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int cArray::TimSNTLonNhat() const {
    int best = -1;
    for (int v : data)
        if (LaSoNguyenTo(v) && v > best)
            best = v;
    return best;
}

void cArray::SapXepTangDan() {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - 1 - i; ++j)
            if (data[j] > data[j + 1])
                swap(data[j], data[j + 1]);
}

void cArray::SapXepGiamDan() {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - 1 - i; ++j)
            if (data[j] < data[j + 1])
                swap(data[j], data[j + 1]);
}
