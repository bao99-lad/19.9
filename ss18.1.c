#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;

    strcpy(sv.name, "Nguyễn Văn A");
    sv.age = 20;
    strcpy(sv.phoneNumber, "0987654321");
    
    printf("Thông tin sinh viên:\n");
    printf("Tên: %s\n", sv.name);
    printf("Tuổi: %d\n", sv.age);
    printf("Số điện thoại: %s\n", sv.phoneNumber);

    return 0;
}