#include <iostream>
#include <string>
using namespace std;

int main() {
    const int N = 20; // Số lượng học sinh

    // Khai báo 3 mảng
    string names[N];
    string ids[N];
    string phones[N];

    // Gán mẫu dữ liệu cho 2 học sinh đầu tiên (Index 0 và 1)
    names[0] = "Nguyen Van A"; ids[0] = "23110001"; phones[0] = "0901234567";
    names[1] = "Tran Thi B";   ids[1] = "23110002"; phones[1] = "0912345678";

    // Vòng lặp tự động in toàn bộ danh sách (Từ 0 đến N-1)
    for (int i = 0; i < N; i++) {
        // Chỉ in nếu ô đó đã được gán dữ liệu
        if (!names[i].empty()) {
            cout << "Student " << (i + 1) << ": " 
                 << names[i] << " - " << ids[i] << " - " << phones[i] << endl;
        }
    }

    return 0;
}
//kiểm tra gits

