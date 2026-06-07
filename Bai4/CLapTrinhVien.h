#ifndef CLAPTRINHVIEN_H
#define CLAPTRINHVIEN_H
#include "CNhanVien.h"


class CLapTrinhVien : public CNhanVien
{
    private:
        int SoGioOvertime; //Số giờ overtime
    public:
        CLapTrinhVien();
        ~CLapTrinhVien();

        void Nhap();
        double TinhLuong();
        void Xuat();
        
};

#endif // CLAPTRINHVIEN_H

