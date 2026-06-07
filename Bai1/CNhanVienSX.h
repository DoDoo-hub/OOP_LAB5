#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H
#include "CNhanVien.h"


class CNhanVienSX : public CNhanVien
{
    private:
        double LuongCanBan;
        int SoSanPham;
    public:
        CNhanVienSX(string ten="empty", Date ngaysinh={1,1,2000}, double luong=0, double luongcb=0, int sosp=0);
        virtual ~CNhanVienSX();

        double TinhLuong();
        void Nhap();
        void Xuat();



};

#endif // CNHANVIENSX_H
