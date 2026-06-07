#ifndef CGIAODICHNHAPHO_H
#define CGIAODICHNHAPHO_H
#include "CGiaoDich.h"

class CGiaoDichNhaPho : public CGiaoDich
{
    private:
        string LoaiNha; // "cao cap", "thuong"
        string DiaChi;
    public:
        CGiaoDichNhaPho();
        ~CGiaoDichNhaPho();

        double TinhThanhTien();
        void Nhap();
        void Xuat();
};

#endif // CGIAODICHNHAPHO_H