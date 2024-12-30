#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhập một chuỗi: ");
    fgets(str, sizeof(str), stdin); // Nhập chuỗi, bao gồm cả khoảng trắng

    str[strcspn(str, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng (nếu có)
    printf("Chuỗi vừa nhập: %s\n", str);
    printf("Độ dài chuỗi: %lu\n", strlen(str));

    return 0;
}
