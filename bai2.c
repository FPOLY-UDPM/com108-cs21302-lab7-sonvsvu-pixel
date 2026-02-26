/******************************************************************************
 * Họ và tên: [NGuyen Truong Son]
 * MSSV:      [PS48636]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    // Tài khoản mẫu
    char correctUser[] = "sonheoc";
    char correctPass[] = "180307";

    printf("Nhap username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;  // xóa ký tự xuống dòng

    printf("Nhap password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;  // xóa ký tự xuống dòng

    if (strcmp(username, correctUser) == 0 && 
        strcmp(password, correctPass) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap khong thanh cong!\n");
    }

    return 0;
}