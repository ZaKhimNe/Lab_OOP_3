#include "cTamGiac.h"
#include <iostream>
#include <cmath>

using namespace std;

#ifndef PI
#define PI 3.14159265358979323846
#endif

cTamGiac::cTamGiac() : A(), B(), C() {}

cTamGiac::cTamGiac(const cDiem& a, const cDiem& b, const cDiem& c)
    : A(a), B(b), C(c) {
}

cTamGiac::~cTamGiac() {}

void cTamGiac::Nhap() {
    cout << "Nhap dinh A: "; A.Nhap();
    cout << "Nhap dinh B: "; B.Nhap();
    cout << "Nhap dinh C: "; C.Nhap();
}

void cTamGiac::Xuat() {
    cout << "Tam giac A"; A.Xuat();
    cout << "  B";        B.Xuat();
    cout << "  C";        C.Xuat();
    cout << endl;
}


bool cTamGiac::KiemTra() {
    double a = A.KhoangCach(B);
    double b = B.KhoangCach(C);
    double c = C.KhoangCach(A);
    return (a + b > c) && (b + c > a) && (c + a > b);
}

string cTamGiac::LoaiTamGiac() {
    if (!KiemTra())
        return "Khong phai tam giac";

    double a = A.KhoangCach(B),
        b = B.KhoangCach(C),
        c = C.KhoangCach(A);

    if (fabs(a - b) < 1e-6 && fabs(b - c) < 1e-6)
        return "Tam giac deu";

    double a2 = a * a, b2 = b * b, c2 = c * c;
    if (fabs(a2 + b2 - c2) < 1e-6 ||
        fabs(b2 + c2 - a2) < 1e-6 ||
        fabs(c2 + a2 - b2) < 1e-6)
        return "Tam giac vuong";

    if (fabs(a - b) < 1e-6 ||
        fabs(b - c) < 1e-6 ||
        fabs(c - a) < 1e-6)
        return "Tam giac can";

    return "Tam giac thuong";
}

double cTamGiac::TinhChuVi() {
    return A.KhoangCach(B)
        + B.KhoangCach(C)
        + C.KhoangCach(A);
}

double cTamGiac::TinhDienTich() {
    double a = A.KhoangCach(B),
        b = B.KhoangCach(C),
        c = C.KhoangCach(A);
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void cTamGiac::TinhTien(double dx, double dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void cTamGiac::Quay(double goc) {
    double rad = goc * PI / 180.0;
    A.Quay(rad);
    B.Quay(rad);
    C.Quay(rad);
}

void cTamGiac::PhongTo(double tyLe) {
    A.PhongTo(tyLe);
    B.PhongTo(tyLe);
    C.PhongTo(tyLe);
}

void cTamGiac::ThuNho(double tyLe) {
    // Nếu tyLe < 1 thì thu nhỏ, ngược lại
    // có thể dùng PhongTo(tyLe) để phóng to
    if (tyLe > 0)
        A.PhongTo(tyLe), B.PhongTo(tyLe), C.PhongTo(tyLe);
}
