#ifndef CKIEMCHUNGVIEN_H
#define CKIEMCHUNGVIEN_H
#include "CNhanVien.h"


class CKiemChungVien : public CNhanVien
{
    private:
        int SoLoiPhatHien; //Số lỗi phát hiện được
    public:
        CKiemChungVien();
        ~CKiemChungVien();

        void Nhap();
        double TinhLuong();
        void Xuat();
    
};

#endif // CKIEMCHUNGVIEN_H
