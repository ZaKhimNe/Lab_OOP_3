#include "cDaGiac.h"
#include <iostream>
using namespace std;

int main() {
    cDaGiac D;
    cout << "=== NHAP DA GIAC ===\n";
    D.Nhap();

    if (!D.KiemTra()) {
        cout << "Da giac khong hop le.\n";
        return 0;
    }

    cout << "\n=== THONG TIN DA GIAC ===\n";
    D.Xuat();
    cout << "Chu vi: " << D.TinhChuVi() << "\n"
        << "Dien tich: " << D.TinhDienTich() << "\n";

    // Tịnh tiến
    D.TinhTien(2.0, 1.0);
    cout << "\nSau tinh tien (2,1):\n";
    D.Xuat();

    // Quay
    double angle;
    cout << "\nNhap goc quay (do): ";
    cin >> angle;
    D.Quay(angle);
    cout << "Sau quay " << angle << " do:\n";
    D.Xuat();

    // Thu nhỏ
    double scale;
    cout << "\nNhap he so thu nho (0<scale<1): ";
    cin >> scale;
    D.ThuNho(scale);
    cout << "Sau thu nho ti le " << scale << ":\n";
    D.Xuat();

    return 0;
}
