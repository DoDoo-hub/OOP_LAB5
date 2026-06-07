#ifndef CQUANLYNHANVIEN_H
#define CQUANLYNHANVIEN_H
#include <vector>
#include "CLapTrinhVien.h"
#include "CKiemChungVien.h"

class CQuanLyNhanVien
{
    private:
        int N;
        vector<CNhanVien*> dsNhanVien; //danh sách con trỏ đến các nhân viên,
        // có thể chứa cả lập trình viên,  kiểm chứng viên nhờ tính đa hình
    public:
        CQuanLyNhanVien();
        ~CQuanLyNhanVien();

        void Nhap();
        void Xuat();

        double TinhLuongTrungBinh(); //Trả về mức lương trung bình của các NV trong công ty
        void XuatDSLuongThapHonTrungBinh(); //Xuất danh sách các NV có lương thấp hơn 
        // mức lương trung bình của các NV trong công ty 

        CNhanVien* TimNVMaxLuong(); //Trả về con trỏ đến NV có lương cao nhất trong công ty
        CNhanVien* TimNVMinLuong(); //Trả về con trỏ đến NV có lương thấp nhất trong công ty

        //Trả về con trỏ đến lập trình viên có lương cao nhất trong công ty
        // hoặc nullptr nếu không có lập trình viên nào
        CNhanVien* TimLTVMaxLuong(); 
        
        //Trả về con trỏ đến kiểm chứng viên có lương thấp nhất trong công ty
        // hoặc nullptr nếu không có kiểm chứng viên nào
        CNhanVien* TimKCVMinLuong(); 
        
};

#endif // CQUANLYNHANVIEN_H
