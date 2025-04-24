#include "cCandidate.h"
#include <iomanip>

cCandidate::cCandidate()
    : id(""), name(""), dob(""), math(0), literature(0), english(0) {
}

cCandidate::~cCandidate() {}

void cCandidate::Nhap() {
    cout << "Ma thi sinh: ";
    getline(cin, id);
    cout << "Ten thi sinh: ";
    getline(cin, name);
    cout << "Ngay sinh (dd/mm/yyyy): ";
    getline(cin, dob);
    cout << "Diem Toan: ";      cin >> math;
    cout << "Diem Van: ";       cin >> literature;
    cout << "Diem Anh: ";       cin >> english;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void cCandidate::Xuat() const {
    cout << left
        << setw(8) << id
        << setw(20) << name
        << setw(12) << dob
        << setw(6) << math
        << setw(6) << literature
        << setw(6) << english
        << setw(8) << TongDiem()
        << "\n";
}

double cCandidate::TongDiem() const {
    return math + literature + english;
}
