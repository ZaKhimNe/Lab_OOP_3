#include "cDaGiac.h"
#include <iostream>
#include <cmath>

#ifndef PI
#define PI 3.14159265358979323846
#endif

cDaGiac::cDaGiac() : vertices() {}

cDaGiac::cDaGiac(const vector<cDiem>& pts)
    : vertices(pts) {
}

cDaGiac::~cDaGiac() {}

void cDaGiac::Nhap() {
    int n;
    cout << "Nhap so dinh da giac (>=3): ";
    cin >> n;
    if (n < 3) {
        cout << "Phai co it nhat 3 dinh!\n";
        return;
    }
    vertices.clear();
    vertices.reserve(n);
    for (int i = 0; i < n; ++i) {
        cDiem P;
        cout << "Nhap dinh " << i + 1 << ": ";
        P.Nhap();
        vertices.push_back(P);
    }
}

void cDaGiac::Xuat() const {
    cout << "Da giac co " << vertices.size() << " dinh:\n";
    for (size_t i = 0; i < vertices.size(); ++i) {
        cout << "  [" << i + 1 << "] ";
        vertices[i].Xuat();
        cout << "\n";
    }
}

bool cDaGiac::KiemTra() const {
    return vertices.size() >= 3;
}

double cDaGiac::TinhChuVi() const {
    double sum = 0;
    size_t n = vertices.size();
    for (size_t i = 0; i < n; ++i) {
        const cDiem& P = vertices[i];
        const cDiem& Q = vertices[(i + 1) % n];
        sum += P.KhoangCach(Q);
    }
    return sum;
}

double cDaGiac::TinhDienTich() const {
    double acc = 0;
    size_t n = vertices.size();
    for (size_t i = 0; i < n; ++i) {
        double x1 = vertices[i].getX();
        double y1 = vertices[i].getY();
        double x2 = vertices[(i + 1) % n].getX();
        double y2 = vertices[(i + 1) % n].getY();
        acc += x1 * y2 - x2 * y1;
    }
    return fabs(acc) * 0.5;
}

void cDaGiac::TinhTien(double dx, double dy) {
    for (auto& P : vertices)
        P.TinhTien(dx, dy);
}

void cDaGiac::Quay(double goc) {
    double rad = goc * PI / 180.0;
    for (auto& P : vertices)
        P.Quay(rad);
}

void cDaGiac::PhongTo(double tyLe) {
    for (auto& P : vertices)
        P.PhongTo(tyLe);
}

void cDaGiac::ThuNho(double tyLe) {
    if (tyLe > 0 && tyLe < 1.0)
        for (auto& P : vertices)
            P.PhongTo(tyLe);
}
