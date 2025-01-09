#include <stdio.h>
#include <string.h>

struct sv {
    int ID;
    char name[20];
    int age;
    char phoneNumber[10];
};

struct addStudent {
    int addID;
    char addName[20];
    int addAge;
    char addPhoneNumber[10];
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

    int position;
    printf("\nNhap vi tri muon them sinh vien (1 den %d): ", size + 1);
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    struct addStudent newStudent;
    printf("Nhap ID sinh vien moi: ");
    scanf("%d", &newStudent.addID);
    printf("Nhap ho va ten sinh vien moi: ");
    scanf("%s", newStudent.addName);
    printf("Nhap tuoi sinh vien moi: ");
    scanf("%d", &newStudent.addAge);
    printf("Nhap sdt sinh vien moi: ");
    scanf("%s", newStudent.addPhoneNumber);

    for (int i = size; i >= position; i--) {
        student[i] = student[i - 1];
    }

    student[position - 1].ID = newStudent.addID;
    strcpy(student[position - 1].name, newStudent.addName);
    student[position - 1].age = newStudent.addAge;
    strcpy(student[position - 1].phoneNumber, newStudent.addPhoneNumber);

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
