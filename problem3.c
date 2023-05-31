#include <stdio.h>
#include <string.h>
struct MovieStar {
    char Name[40];
    float Rating;
    int TotalFans;
};
int main() {
    printf("MovieStar Rating\n");
    printf("Actors Include: Robert De Niro, Al Pacino, Marlon Brando, Joe Pesci, Ray Liotta");
    struct MovieStar arr[5];
    int n;
    arr[0].Name = "Robert De Niro";
    arr[1].Name = "Al Pacino";
    arr[2].Name = "Marlon Brando";
    arr[3].Name = "Joe Pesci";
    arr[4].Name = "Ray Liotta";

    printf("Enter Number of Users: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char temp[50];
        printf("Enter MovieStar Name: ");
        gets(temp);


    }



    return 0;
}
