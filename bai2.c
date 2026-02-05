/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

#include <stdio.h>
void checkYear(int year, int *flag) {
    *flag = 0; 
    if (year % 400 == 0) {
        *flag = 1;
    }
    if (year % 4 == 0 && year % 100 != 0) {
        *flag = 1;
    }
}
int main() {
    int nam;
    int ketQua = 0;
    printf("Nhap vao nam: ");
    scanf("%d", &nam);
    checkYear(nam, &ketQua);
    if (ketQua == 1) {
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d KHONG phai nam nhuan\n", nam);
    }
    return 0;
}