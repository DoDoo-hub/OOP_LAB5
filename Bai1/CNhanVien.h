#ifndef CNHANVIEN_H
#define CNHANVIEN_H
#include <string>
#include <iostream>
using namespace std;

//Định nghĩa cấu trúc ngày tháng năm và nạp chồng toán tử so sánh< để so sánh tuổi NV
struct Date{  
    int ngay, thang, nam;
    bool operator<(const Date& other) const{
        if(nam!=other.nam) return nam<other.nam;
        if(thang!=other.thang) return thang<other.thang;
        return ngay<other.ngay;
    }
};

class CNhanVien
{
    protected:
        string HoTen;
        Date NgaySinh;
        double Luong;

    public:
        CNhanVien(string ten="empty", Date ngaysinh={1,1,2000}, double luong=0);
        virtual ~CNhanVien();

        virtual double TinhLuong()=0;
        double getLuong();
        Date getNgaySinh();
        virtual void Nhap();
        virtual void Xuat();

};

#endif // CNHANVIEN_H
