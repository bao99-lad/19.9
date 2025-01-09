#include <stdio.h>

struct sv {
    int ID;
    char name[20];
    int age;
    char phoneNumber[10];
};

int main() {
    int size = 5;
    struct sv student[50];

    for (int i = 0; i < size; i++) {
        student[i].ID = i + 1;
        printf("Nhap ho va ten sinh vien thu %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Nhap tuoi sinh vien thu %d: ", i + 1);
        scanf("%d", &student[i].age);
        printf("Nhap sdt sinh vien thu %d: ", i + 1);
        scanf("%s", student[i].phoneNumber);
    }
    
    printf("\nNhap thong tin sinh vien moi:\n");
    student[size].ID = size + 1;
    printf("Nhap ho va ten: ");
    scanf("%s", student[size].name);
    printf("Nhap tuoi: ");
    scanf("%d", &student[size].age);
    printf("Nhap sdt: ");
    scanf("%s", student[size].phoneNumber);
    size++;
    
    printf("\nDanh sach sinh vien sau khi cap nhat\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d\n", student[i].ID);
        printf("Ten: %s\n", student[i].name);
        printf("Tuoi: %d\n", student[i].age);
        printf("SDT: %s\n", student[i].phoneNumber);
    }

    return 0;
}