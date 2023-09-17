#include <iostream>

void power(int* address, int exponent) {
    if (exponent == 0) {
        *address = 1; 
    }
    else if (exponent > 0) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= *address;
        }
        *address = result;
    }
    else {
        *address = 0;
    }
}
int main() {
    //������ 1
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "����������� ������:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;    
    int* ptr = arr;  
    for (int i = 0; i < length - 1; i += 2) {
        // ������ ������� ��������
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 1);
        *(ptr + i + 1) = temp;
    }
    std::cout << "�������� ������:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    //������ 2
    int number = 2;
    int exponent = 3;
    std::cout << "����������� �������� ����������: " << number << std::endl;
    power(&number, exponent);
    std::cout << "�������� ���������� ����� ���������� � �������: " << number << std::endl;
     return 0;
    }

