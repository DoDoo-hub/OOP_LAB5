#ifndef CGIAODICHCHUNGCU_H
#define CGIAODICHCHUNGCU_H
#include "CGiaoDich.h"

class CGiaoDichChungCu : public CGiaoDich
{
    private:
        string MaCan;
        int ViTriTang;
        
    public:
        CGiaoDichChungCu();
        ~CGiaoDichChungCu();

        double TinhThanhTien();
        void Nhap();
        void Xuat();

};

#endif // CGIAODICHCHUNGCU_H