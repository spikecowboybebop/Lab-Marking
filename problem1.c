#include <stdio.h>
struct Shape {
    double length;
    double width;
};
int findArea(struct Shape R) {
    double area = R.length * R.width;
    return area;
}
int findPerimeter(struct Shape R) {
    double perimeter = 2 * (R.length + R.width);
    return perimeter;
}
int main () {
    struct Shape R;

    printf("Enter length: ");
    scanf("%lf", &R.length);
    printf("Enter width: ");
    scanf("%lf", &R.width);

    printf("The area is %d\n", findArea(R));
    printf("The perimeter is %d", findPerimeter(R));
    return 0;
}
