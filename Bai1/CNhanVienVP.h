#ifndef CNHANVIENVP_H
#define CNHANVIENVP_H
#include "CNhanVien.h"

class CNhanVienVP : public CNhanVien
{
    private:
        int SoNgayLamViec;
    public:
        CNhanVienVP(string ten="empty", Date ngaysinh={1,1,2000}, double luong=0, int songaylam=0);
        virtual ~CNhanVienVP();

        double TinhLuong();
        void Nhap();
        void Xuat();

};

#endif // CNHANVIENVP_H
