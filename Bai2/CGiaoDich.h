#ifndef CGIAODICH_H
#define CGIAODICH_H
#include <iostream>
#include <string>
using namespace std;

struct Date{  
    int ngay, thang, nam;
};

class CGiaoDich 
{
    protected:
        string MaGiaoDich;
        Date NgayGiaoDich;
        double DonGia;
        double DienTich;
        double ThanhTien;

    public:
        CGiaoDich();
        virtual ~CGiaoDich();

        virtual double TinhThanhTien()=0;
        virtual void Nhap();
        virtual void Xuat();
        Date getNgayGiaoDich();
        double getThanhTien();
        

};

#endif // CGIAODICH_H