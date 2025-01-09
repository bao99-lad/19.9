#include <stdio.h>
#include <string.h>

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

    printf("\nDanh sach sinh vien ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d\n", student[i].ID);
        printf("Ten: %s\n", student[i].name);
        printf("Tuoi: %d\n", student[i].age);
        printf("SDT: %s\n\n", student[i].phoneNumber);
    }

    char deleteName[20];
    printf("\nNhap ten sinh vien can xoa: ");
    scanf("%s", deleteName);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(student[i].name, deleteName) == 0) {
            found = 1;
            for (int j = i; j < size - 1; j++) {
                student[j] = student[j + 1];
            }
            size--;
            break;
        }
    }

    if (found) {
        printf("\nSinh vien %s da duoc xoa.\n", deleteName);
    } else {
        printf("\nKhong tim thay sinh vien %s.\n", deleteName);
    }
    
    printf("\nDanh sach sinh vien sau khi cap nhat\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d\n", student[i].ID);
        printf("Ten: %s\n", student[i].name);
        printf("Tuoi: %d\n", student[i].age);
        printf("SDT: %s\n", student[i].phoneNumber);
    }

    return 0;
}
