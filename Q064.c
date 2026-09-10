#include <stdio.h>

int main() {
    long long num;
    int frequency[10] = {0};
    printf("Enter an integer number:");
    scanf("%lld" , &num);
    if (num < 0){
        num = -num;
    }
    if (num == 0){
        frequency[0] = 1;
    }
    while (num > 0){
        int digit = num%10;
        frequency[digit]++;
        num = num/10;
    }
    int max_count = 0;
    int most_frequent_digit = 0;
    for (int i = 0; i <= 9; i++){
        if (frequency[i]>max_count){
            max_count = frequency[i];
            most_frequent_digit = i;
        }
    }
    printf("Output : %d \n" , most_frequent_digit);

    return 0;

}
