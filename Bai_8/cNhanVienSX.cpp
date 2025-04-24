#include "cNhanVienSX.h"
#include <iostream>
#include <iomanip>

cNhanVienSX::cNhanVienSX()
    : id(""), name(""), dob("01/01/1970"), soLuong(0), donGia(0.0) {
}

cNhanVienSX::cNhanVienSX(const string& _id,
    const string& _name,
    const string& _dob,
    int _soLuong,
    double _donGia)
    : id(_id), name(_name), dob(_dob),
    soLuong(_soLuong), donGia(_donGia) {
}

cNhanVienSX::~cNhanVienSX() {}

int cNhanVienSX::getBirthYear() const {
    if (dob.size() >= 10)
        return stoi(dob.substr(6, 4));
    return 1970;
}

int cNhanVienSX::getAge() const {
    return 2025 - getBirthYear();
}

string cNhanVienSX::getId()       const { return id; }
string cNhanVienSX::getName()     const { return name; }
string cNhanVienSX::getDob()      const { return dob; }
int    cNhanVienSX::getSoLuong()  const { return soLuong; }
double cNhanVienSX::getDonGia()   const { return donGia; }
double cNhanVienSX::getLuong()    const { return soLuong * donGia; }

void cNhanVienSX::setId(const string& _id) { id = _id; }
void cNhanVienSX::setName(const string& _name) { name = _name; }
void cNhanVienSX::setDob(const string& _dob) { dob = _dob; }
void cNhanVienSX::setSoLuong(int sl) { soLuong = sl; }
void cNhanVienSX::setDonGia(double dg) { donGia = dg; }

void cNhanVienSX::Nhap() {
    cout << "  Ma NV: ";
    getline(cin, id);
    cout << "  Ho ten: ";
    getline(cin, name);
    cout << "  Ngay sinh (dd/mm/yyyy): ";
    getline(cin, dob);
    cout << "  So luong san pham: ";
    cin >> soLuong;
    cout << "  Don gia 1 san pham: ";
    cin >> donGia;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void cNhanVienSX::Xuat() const {
    cout << left
        << setw(8) << id
        << setw(20) << name
        << setw(12) << dob
        << right
        << setw(8) << soLuong
        << setw(12) << fixed << setprecision(2) << donGia
        << setw(12) << fixed << setprecision(2) << getLuong()
        << setw(6) << getAge()
        << "\n";
}
