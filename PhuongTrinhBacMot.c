/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/
#include <stdio.h>
void giaiPT(float a, float b, float *x, int *KiemTra) {
    if (a != 0) {
        *x = -b / a;
        *KiemTra = 1; 
    } else {
        if (b == 0) {
            *KiemTra = 2; 
        } else {
            *KiemTra = 0; 
        }
    }
}
int main() {
    float a, b, nghiem;
    int trangThai;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    giaiPT(a, b, &nghiem, &trangThai);
    if (trangThai == 1) {
        printf("Phuong trinh co nghiem x = %.2f\n", nghiem);
    } else if (trangThai == 2) {
        printf("Phuong trinh co VO SO nghiem\n");
    } else {
        printf("Phuong trinh VO NGHIEM\n");
    }
    return 0 ;
}