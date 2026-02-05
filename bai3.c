
/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

void swap(int *a, int *b) {
    int HoanVi;
    HoanVi = *a;
    *a = *b;
    *b = HoanVi;
}
int main() {
    int a, b;
    printf("Nhap vao gia tri a: ");
    scanf("%d", &a);
    printf("Nhap vao gia tri b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Sau khi hoan vi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

