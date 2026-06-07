#include "CQuanLyMuaHang.h"
#include <iomanip>

CQuanLyMuaHang::CQuanLyMuaHang(): x(0), y(0), z(0){}

CQuanLyMuaHang::~CQuanLyMuaHang()
{
    for(CKhachHang* kh : dsKhachHang){
        delete kh; 
    }
    dsKhachHang.clear();
}

bool CQuanLyMuaHang::NhapDuLieuTuFile(const string &filename){
    ifstream ifs(filename);
    if(!ifs.is_open()) return false;

    ifs>>x >> y >> z;

    // Nhập x khách hàng loại A
    for(int i=0;i<x;i++){
        CKhachHang* kh= new CKhachHangA();
        kh->NhapTuFile(ifs);
        dsKhachHang.push_back(kh);
    }

    // Nhập y khách hàng loại B
    for(int i=0;i<y;i++){
        CKhachHang* kh= new CKhachHangB();
        kh->NhapTuFile(ifs);
        dsKhachHang.push_back(kh);
    }

    // Nhập z khách hàng loại C
    for(int i=0;i<z;i++){
            CKhachHang* kh= new CKhachHangC();
            kh->NhapTuFile(ifs);
            dsKhachHang.push_back(kh);
    }

    ifs.close();
    return true;
}

bool CQuanLyMuaHang::XuatKetQuaRaFile(const string &filename){
    ofstream ofs(filename);
    if(!ofs.is_open()) return false;

    ofs<< x <<" "<< y <<" "<< z <<endl;

    double TongTienThuDuoc=0.0;

    ofs<<fixed<<setprecision(0); // Định dạng số tiền không có phần thập phân
    for(CKhachHang* kh : dsKhachHang){
        double TienPhaiTra= kh->TinhTienPhaiTra();
        ofs<< kh->GetHoTen()<<"\n";
        ofs<< TienPhaiTra <<"\n";
        TongTienThuDuoc += TienPhaiTra;
    }

    //Xuất tổng số tiền công ty thu được
    ofs<<TongTienThuDuoc;

    ofs.close();
    return true;
}
