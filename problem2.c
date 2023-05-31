#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex C;
    C.real = n1.real + n2.real;
    C.imag = n1.imag + n2.imag;
    return C;

};
int main() {
    struct Complex n1, n2, result;
    printf("Enter for 1st Complex Number\n");
    printf("Enter real part: ");
    scanf("%f", &n1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &n1.imag);

    printf("Enter for 2nd Complex Number\n");
    printf("Enter real part: ");
    scanf("%f", &n2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &n2.imag);

    result = add(n1,n2);
    printf("The complex number is %.1f + %.1fi", result.real, result.imag);

    return 0;
}
