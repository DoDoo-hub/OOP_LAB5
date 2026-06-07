#ifndef CGIAODICHDAT_H
#define CGIAODICHDAT_H
#include "CGiaoDich.h"
class CGiaoDichDat : public CGiaoDich
{
    private:
        char LoaiDat; //'A', 'B', 'C'

    public:
        CGiaoDichDat();
        ~CGiaoDichDat();

        double TinhThanhTien();
        void Nhap();
        void Xuat();
};

#endif // CGIAODICHDAT_H