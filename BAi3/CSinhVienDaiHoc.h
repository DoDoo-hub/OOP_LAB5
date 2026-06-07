#ifndef CSINHVIENDAIHOC_H
#define CSINHVIENDAIHOC_H
#include "CSinhVien.h"

class CSinhVienDaiHoc: public CSinhVien
{
    private:
        string TenLoanVan; //Tên luận văn
        double DiemLoanVan; //Điểm luận văn

    public:
        CSinhVienDaiHoc();
        ~CSinhVienDaiHoc();

        void Nhap();
        void Xuat();
        bool XetTotNghiep();
};

#endif
