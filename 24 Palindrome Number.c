#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    scanf("%d", &n);
    original = n;

    for(int i = n; i > 0; i = i / 10){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(original == reverse)
        printf("Yes");
    else
        printf("No");

    return 0;
}
