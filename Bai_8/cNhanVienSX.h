#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H

#include <string>
using namespace std;

class cNhanVienSX {
private:
    string id;
    string name;
    string dob;       // "dd/mm/yyyy"
    int    soLuong;   // số sản phẩm đã gia công
    double donGia;    // đơn giá một sản phẩm

    int getBirthYear() const;

public:
    cNhanVienSX();
    cNhanVienSX(const string& id,
        const string& name,
        const string& dob,
        int soLuong,
        double donGia);
    ~cNhanVienSX();

    // getters
    string getId()    const;
    string getName()  const;
    string getDob()   const;
    int    getSoLuong() const;
    double getDonGia()  const;
    double getLuong()   const;   // soLuong * donGia
    int    getAge()     const;   // ước tính

    // setters
    void setId(const string& id);
    void setName(const string& name);
    void setDob(const string& dob);
    void setSoLuong(int sl);
    void setDonGia(double dg);

    // nhập / xuất
    void Nhap();
    void Xuat() const;
};

#endif // CNHANVIENSX_H
