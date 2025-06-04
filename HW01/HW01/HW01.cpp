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

void upSort(int arr[]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void downSort(int arr[]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5];
    int check = 0;

    std::cout << "5개의 숫자를 입력하세요 : ";
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
    }
    std::cout << "1 : 오름차순, 2 : 내림차순";
    std::cin >> check;

    int sum = total(arr);
    double avg = average(sum);

    std::cout << "합계 : " << sum << "\n평균 : " << avg;

    if (check == 1) {
        upSort(arr);
        std::cout << "\n오름차순 : ";
        for (int i = 0; i < 5; ++i) {
            std::cout << arr[i] << " ";
        }
    }
    else {
        downSort(arr);
        std::cout << "\n내림차순 : ";
        for (int i = 0; i < 5; ++i) {
            std::cout << arr[i] << " ";
        }
    }


    return 0;
}