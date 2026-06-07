#ifndef _CQUANLYGIAODICH_H
#define _CQUANLYGIAODICH_H
#include "CGiaoDichDat.h"
#include "CGiaoDichNhaPho.h"
#include "CGiaoDichChungCu.h"
#include <vector>

class CQuanLyGiaoDich {
    private:
        int N; //số lượng giao dịch
        vector<CGiaoDich*> dsGiaoDich; //danh sách con trỏ đến các giao dịch,
        // có thể chứa cả GD đất, nhà phố và chung cư nhờ tính đa hình
    
    public:
        CQuanLyGiaoDich();
        ~CQuanLyGiaoDich();

        void Nhap();
        void Xuat();
        void TinhTongSoLuongTungLoai(); //Tính và xuất tổng số lượng cho từng loại GD
        double TinhTrungBinhThanhTienChungCu(); //Trả về trung bình thành tiền của GD Căn hộ chung cư, 0 nếu không có GD chung cư nào
        CGiaoDich* TimNhaPhoGiaCaoNhat(); //Trả về con trỏ đến GD nhà phố có giá cao nhất, hoặc nullptr nếu không có GD nhà phố nào
        void XuatDSGiaoDichThang12Nam2024(); 
};      


#endif // _CQUANLYGIAODICH_H