#include <iostream>
#include "cListCandidate.h"
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    cListCandidate list;
    list.Nhap(n);

    list.XuatTren15();

    auto top = list.TimCaoNhat();
    cout << "\n-- Thi sinh co tong diem cao nhat --\n";
    cout << left
        << setw(8) << "Ma"
        << setw(20) << "Ten"
        << setw(12) << "Ngay sinh"
        << setw(6) << "Toan"
        << setw(6) << "Van"
        << setw(6) << "Anh"
        << setw(8) << "Tong"
        << "\n";
    top.Xuat();

    list.SapXepGiam();
    list.XuatAll();

    return 0;
}
