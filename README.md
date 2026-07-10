# Mô Phỏng Tu Sĩ C++ (Cultivator Simulation)

Dự án này là một chương trình C++ được viết theo hướng hướng đối tượng (OOP), mô phỏng các tu sĩ thuộc các cảnh giới khác nhau (Trúc Cơ, Kết Đan, Nguyên Anh) cùng với các kỹ năng của họ (Kỹ năng thường - Normal Skill và Kỹ năng phép - Magic Skill). Chương trình tính toán sát thương mỗi giây (DPS) để xếp hạng các kỹ năng và tính toán thời gian hạ gục đối thủ có lượng máu cho trước.

## Cấu trúc thư mục

```
IT002_CK2_2526/
├── Code/                   # Thư mục chứa mã nguồn C++
│   ├── main.cpp            # Điểm bắt đầu của chương trình (chứa hàm main)
│   ├── Cultivator.h/.cpp   # Lớp cơ sở Tu Sĩ
│   ├── TrucCo.h/.cpp       # Cảnh giới Trúc Cơ (kế thừa Cultivator)
│   ├── KetDan.h/.cpp       # Cảnh giới Kết Đan (kế thừa Cultivator)
│   ├── NguyenAnh.h/.cpp    # Cảnh giới Nguyên Anh (kế thừa Cultivator)
│   ├── Skill.h/.cpp        # Lớp cơ sở Kỹ năng
│   ├── NormalSkill.h/.cpp  # Kỹ năng thường (kế thừa Skill)
│   └── MagicSkill.h/.cpp   # Kỹ năng phép (kế thừa Skill)
├── .gitignore              # Cấu hình bỏ qua các file không cần thiết khi git push
└── README.md               # Hướng dẫn chạy và thông tin dự án
```

## Yêu cầu hệ thống

Để biên dịch và chạy dự án này, máy tính của bạn cần cài đặt:
- Trình biên dịch C++ (ví dụ: **GCC/g++** thông qua MinGW trên Windows, hoặc Clang trên macOS/Linux).
- Hoặc sử dụng các IDE tích hợp sẵn trình biên dịch như **Visual Studio**, **CLion**, hoặc **Code::Blocks**.

---

## Hướng dẫn biên dịch và chạy bằng Terminal (Dòng lệnh)

### 1. Biên dịch dự án

Mở Terminal (Command Prompt hoặc PowerShell trên Windows) tại thư mục gốc của dự án (`IT002_CK2_2526`) và chạy lệnh sau để biên dịch toàn bộ các file `.cpp` trong thư mục `Code`:

**Trên Windows (sử dụng g++):**
```bash
g++ -o main.exe Code/*.cpp
```

**Trên Linux / macOS (sử dụng g++):**
```bash
g++ -std=c++11 -o main Code/*.cpp
```

### 2. Chạy chương trình

Sau khi biên dịch thành công, một file thực thi (`main.exe` hoặc `main`) sẽ được tạo ra ở thư mục gốc.

**Trên Windows:**
```bash
.\main.exe
```

**Trên Linux / macOS:**
```bash
./main
```

---

## Hướng dẫn sử dụng chương trình

Khi chạy chương trình, bạn sẽ tương tác thông qua dòng lệnh theo các bước sau:

1. **Chọn cảnh giới cho Tu sĩ**: Nhập `1` cho Trúc Cơ, `2` cho Kết Đan, hoặc `3` cho Nguyên Anh.
2. **Nhập tên Tu sĩ**: Nhập tên tu sĩ của bạn.
3. **Xem thông tin Tu sĩ**: Chương trình sẽ hiển thị các thuộc tính của tu sĩ cùng danh sách các kỹ năng ngẫu nhiên nhận được.
4. **Chọn kỹ năng để xem chi tiết**: Nhập chỉ số (Index) của kỹ năng trong danh sách để xem chi tiết thông số.
5. **Hiển thị bảng xếp hạng**: 
   - Top 2 kỹ năng có sát thương mỗi giây (DPS) mạnh nhất.
   - Kỹ năng mạnh nhất của Tu sĩ.
6. **Thời gian hạ gục**: Chương trình tự động tính toán thời gian tu sĩ cần để tiêu diệt một quái vật có lượng máu **4000 HP**.
