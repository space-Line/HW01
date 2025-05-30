#include <iostream>

int total(int arr[]) {
    int total = 0;
    for (int i = 0; i < 5; i++) total += arr[i];

    return total;
}

double average(int sum) {
    double avg = sum / 5;

    return avg;
}

int main()
{
    int arr[5];

    std::cout << "5개의 숫자를 입력하세요 : ";
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
    }
    int sum = total(arr);
    double avg = average(sum);

    std::cout << "합계 : " << sum << "\n평균 : " << avg;
}