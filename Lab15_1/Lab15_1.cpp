#include <stdio.h>
#include <locale>

int main() {
    setlocale(LC_ALL, "Ukr");
    int nums[2];

    printf("Введiть два числа: ");
    for (int i = 0; i < 2; i++) {
        scanf_s("%d", &nums[i]);
    }

    if (nums[0] > nums[1]) {
        printf("Перше число бiльше: %d\n", nums[0]);
    }
    else {
        printf("Обидва числа: %d %d\n", nums[0], nums[1]);
    }

    return 0;
}
