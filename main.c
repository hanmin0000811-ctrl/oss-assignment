#include <stdio.h>

int main() {
    int choice;
    int money = 0;

    printf("=== C언어 자판기 ===\n");
    printf("1. 콜라 (1000원)\n");
    printf("2. 사이다 (1000원)\n");
    printf("3. 물 (500원)\n");
    printf("====================\n\n");
    
    printf("투입할 금액을 입력하세요(원): ");
    scanf("%d", &money);

    printf("원하는 음료의 번호를 선택하세요: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (money >= 1000) {
            printf("콜라가 나왔습니다. 잔돈 %d원을 반환합니다.\n", money - 1000);
        } else {
            printf("금액이 부족합니다.\n");
        }
    } else if (choice == 2) {
        if (money >= 1000) {
            printf("사이다가 나왔습니다. 잔돈 %d원을 반환합니다.\n", money - 1000);
        } else {
            printf("금액이 부족합니다.\n");
        }
    } else if (choice == 3) {
        if (money >= 500) {
            printf("물이 나왔습니다. 잔돈 %d원을 반환합니다.\n", money - 500);
        } else {
            printf("금액이 부족합니다.\n");
        }
    } else {
        printf("잘못된 번호를 선택하셨습니다.\n");
    }

    return 0;
}