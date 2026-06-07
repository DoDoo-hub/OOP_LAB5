#ifndef CQUANLYMUAHANG_H
#define CQUANLYMUAHANG_H
#include <vector>
#include "CKhachHangA.h"
#include "CKhachHangB.h"
#include "CKhachHangC.h"

class CQuanLyMuaHang
{
    private:
        int x, y ,z; //Số lượng khách hàng loại A, B, C
        vector<CKhachHang*> dsKhachHang; // Danh sách con trỏ đến các đối tượng khách hàng
        // Có thể chứa cả khách hàng loại A, B, C nhờ tính đa hình
        
    public:
        CQuanLyMuaHang();
        ~CQuanLyMuaHang();

        bool NhapDuLieuTuFile(const string &filename);
        bool XuatKetQuaRaFile(const string &filename);

};

#endif // CQUANLYMUAHANG_H
