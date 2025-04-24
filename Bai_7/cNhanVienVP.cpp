#include "cNhanVienVP.h"
#include <iostream>
#include <iomanip>
#include <sstream>

cNhanVienVP::cNhanVienVP()
  : id(""), name(""), dob("01/01/1970"), salary(0) {}

cNhanVienVP::cNhanVienVP(const string& _id,
                         const string& _name,
                         const string& _dob,
                         double _salary)
  : id(_id), name(_name), dob(_dob), salary(_salary) {}

cNhanVienVP::~cNhanVienVP() {}

int cNhanVienVP::getBirthYear() const {
    // dob dạng "dd/mm/yyyy"
    int y = 1970;
    if (dob.size() >= 10) {
        y = stoi(dob.substr(6,4));
    }
    return y;
}

int cNhanVienVP::getAge() const {
    // ước tính tuổi = năm hiện tại (2025) - năm sinh
    return 2025 - getBirthYear();
}

string cNhanVienVP::getId()    const { return id; }
string cNhanVienVP::getName()  const { return name; }
string cNhanVienVP::getDob()   const { return dob; }
double cNhanVienVP::getSalary()const { return salary; }

void cNhanVienVP::setId(const string& _id)       { id = _id; }
void cNhanVienVP::setName(const string& _name)   { name = _name; }
void cNhanVienVP::setDob(const string& _dob)     { dob = _dob; }
void cNhanVienVP::setSalary(double _salary)      { salary = _salary; }

void cNhanVienVP::Nhap() {
    cout << "  Ma NV: "; 
    getline(cin, id);
    cout << "  Ho ten: ";
    getline(cin, name);
    cout << "  Ngay sinh (dd/mm/yyyy): ";
    getline(cin, dob);
    cout << "  Luong: ";
    cin >> salary;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void cNhanVienVP::Xuat() const {
    cout << left
         << setw(8)  << id
         << setw(20) << name
         << setw(12) << dob
         << setw(8)  << fixed << setprecision(2) << salary
         << setw(6)  << getAge()
         << "\n";
}
