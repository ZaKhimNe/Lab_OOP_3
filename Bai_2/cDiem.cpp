#include "cDiem.h"

cDiem::cDiem() : x(0), y(0) {}

cDiem::cDiem(double xVal, double yVal)
    : x(xVal), y(yVal) {
}

cDiem::~cDiem() {}

void cDiem::Nhap() {
    cout << "  Nhap x: "; cin >> x;
    cout << "  Nhap y: "; cin >> y;
}

void cDiem::Xuat() const {
    cout << "(" << x << ", " << y << ")";
}

double cDiem::KhoangCach(const cDiem& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

void cDiem::TinhTien(double dx, double dy) {
    x += dx;
    y += dy;
}

void cDiem::Quay(double rad) {
    double nx = x * cos(rad) - y * sin(rad);
    double ny = x * sin(rad) + y * cos(rad);
    x = nx;
    y = ny;
}

void cDiem::PhongTo(double tyLe) {
    x *= tyLe;
    y *= tyLe;
}

double cDiem::getX() const {
    return x;
}

double cDiem::getY() const {
    return y;
}
