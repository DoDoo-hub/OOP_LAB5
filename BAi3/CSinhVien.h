#ifndef CSINHVIEN_H
#define CSINHVIEN_H
#include <string>
#include <iostream>
using namespace std;

class CSinhVien
{
    protected:
        string MSSV; //Mã số sinh viên
        string HoTen;
        string DiaChi;
        int TongTinChi; //Tổng số tín chỉ
        double DTB; //Điểm trung bình
    public:
        CSinhVien();
        virtual ~CSinhVien();

        virtual void Nhap();
        virtual void Xuat();
        virtual bool XetTotNghiep()=0; //Phương thức thuần ảo để xét tốt nghiệp

        double getDTB();
};

#endif //CSINHVIEN_H
