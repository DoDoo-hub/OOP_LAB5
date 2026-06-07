#include <iostream>
#include "CQuanLyMuaHang.h"
using namespace std;

int main(){
    CQuanLyMuaHang ql;

    if(!ql.NhapDuLieuTuFile("XYZ.INP")){
        cout<< "Loi: khong the mo hoac tim thay file XYZ.INP" <<endl;
        return 1;
    }

    if(!ql.XuatKetQuaRaFile("XYZ.OUT")){
        cout<< "Loi: khong the mo hoac tao file XYZ.OUT" <<endl;
        return 1;
    }

    return 0;
}