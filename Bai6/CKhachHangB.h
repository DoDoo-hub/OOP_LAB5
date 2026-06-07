#ifndef CKHACHHANGB_H
#define CKHACHHANGB_H
#include "CKhachHang.h"

//Loại B: Khách hàng thân thiết
class CKhachHangB : public CKhachHang
{
    private:
        int SoNamThanThiet;
    public:
        CKhachHangB();
        void NhapTuFile(ifstream& ifs);
        double TinhTienPhaiTra();
};

#endif // CKHACHHANGB_H
