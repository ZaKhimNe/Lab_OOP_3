#include "cTamGiac.h"
#include <iostream>
using namespace std;

int main() {
    cTamGiac T;
    cout << "=== NHAP TAM GIAC ===\n";
    T.Nhap();

    if (!T.KiemTra()) {
        cout << "Day khong phai la tam giac hop le.\n";
        return 0;
    }

    cout << "\n=== THONG TIN BAN DA NHAP ===\n";
    T.Xuat();
    cout << "Loai: " << T.LoaiTamGiac() << "\n"
        << "Chu vi: " << T.TinhChuVi() << "\n"
        << "Dien tich: " << T.TinhDienTich() << "\n";

    // Ví dụ tịnh tiến cố định
    T.TinhTien(1.0, 2.0);
    cout << "\nSau tinh tien (1,2): "; T.Xuat();

    // Nhập góc quay
    double goc;
    cout << "\nNhap goc muon quay (do): ";
    cin >> goc;
    T.Quay(goc);
    cout << "Sau quay " << goc << " do: ";
    T.Xuat();

    // Nhập hệ số thu nhỏ
    double heSo;
    cout << "\nNhap he so thu nho (0 < heSo < 1): ";
    cin >> heSo;
    T.ThuNho(heSo);
    cout << "Sau thu nho ti le " << heSo << ": ";
    T.Xuat();

    return 0;
}
