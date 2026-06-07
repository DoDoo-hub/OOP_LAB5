#ifndef CNHANVIEN_H
#define CNHANVIEN_H
#include <string>
#include <iostream>
using namespace std;

class CNhanVien
{
    protected:
        string MaNV; //Mã nhân viên
        string HoTen;
        int Tuoi;
        string SDT; //Số điện thoại
        string email;
        double LuongCoBan; //Lương cơ bản

    public:
        CNhanVien();
        virtual ~CNhanVien();

        virtual void Nhap();
        virtual double TinhLuong()=0; //Phương thức thuần ảo để tính lương
        virtual void Xuat(); 

};

#endif // CNHANVIEN_H
