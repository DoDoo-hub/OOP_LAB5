#ifndef CSINHVIENCAODANG_H
#define CSINHVIENCAODANG_H
#include "CSinhVien.h"

class CSinhVienCaoDang: public CSinhVien
{
    private:
        double DiemThiTotNghiep; //Điểm thi tốt nghiệp

    public:
        CSinhVienCaoDang();
        ~CSinhVienCaoDang();

        void Nhap();
        void Xuat();
        bool XetTotNghiep();
};

#endif //CSINHVIENCAODANG_H
