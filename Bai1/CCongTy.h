#ifndef CCONGTY_H
#define CCONGTY_H
#include <vector>
#include "CNhanVienSX.h"
#include "CNhanVienVP.h"
#include <iostream>
using namespace std;

class CCongTy
{
    private:
        int N; //số lượng nhân viên
        vector<CNhanVien*> dsNhanVien; //danh sách con trỏ đến các NV,
        //có thể chứa cả NVSX và NVVP nhờ tính đa hình

    public:
        CCongTy();
        ~CCongTy();

        void Nhap();
        void Xuat();
        double TinhTongLuong();
        CNhanVien* TimNVSXLuongThapNhat();
        CNhanVien* TimNVVPTuoiCaoNhat();

};

#endif // CCONGTY_H
