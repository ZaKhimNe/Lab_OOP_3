#ifndef CNHANVIENVP_H
#define CNHANVIENVP_H

#include <string>
using namespace std;

class cNhanVienVP {
private:
    string id;
    string name;
    string dob;      // ngày sinh “dd/mm/yyyy”
    double salary;

    int getBirthYear() const;  // helper để xác định tuổi

public:
    cNhanVienVP();
    cNhanVienVP(const string& id,
        const string& name,
        const string& dob,
        double salary);
    ~cNhanVienVP();

    // getters
    string getId() const;
    string getName() const;
    string getDob() const;
    double getSalary() const;
    int getAge() const;        // tuổi ước tính

    // setters
    void setId(const string& id);
    void setName(const string& name);
    void setDob(const string& dob);
    void setSalary(double salary);

    // nhập / xuất
    void Nhap();
    void Xuat() const;
};

#endif // CNHANVIENVP_H
