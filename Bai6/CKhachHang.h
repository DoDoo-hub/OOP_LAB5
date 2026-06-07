#ifndef CKHACHHANG_H
#define CKHACHHANG_H
#include <string>
#include <fstream> 
using namespace std;

class CKhachHang
{
    protected:
        string HoTen;
        int SoLuong;
        double DonGia;

    public:
        CKhachHang();
        virtual ~CKhachHang();

        virtual void NhapTuFile(ifstream& ifs);
        virtual double TinhTienPhaiTra()=0; // Phương thức thuần ảo để tính tiền khách hàng phải trả
        string GetHoTen() const;
};

#endif // CKHACHHANG_H

