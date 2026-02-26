/******************************************************************************
 * Họ và tên: [NGuyen Truong Son]
 * MSSV:      [PS48636]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    char str[5][100];
    char temp[100];

    // Nhập 5 chuỗi
    for (int i = 0; i < 5; i++) {
        printf("Nhap chuoi %d: ", i + 1);
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = 0;  // xóa ký tự xuống dòng
    }

    // Sắp xếp (Bubble Sort)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Xuất kết quả
    printf("\nChuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}