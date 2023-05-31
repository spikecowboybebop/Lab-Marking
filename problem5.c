#include <stdio.h>
#include <string.h>
struct BarcelonaPlayer {
    char name[20];
    //int age;
    //char Position[20];
    double Salary;
    char country[20];
    //double Rating;
};
void findPlayers(struct BarcelonaPlayer *pl, int size) {
    for(int i = 0; i < size; i++) {
        if (strcmp("Argentina", pl[i].country) && strcmp("argentina", pl[i].country)) {
            continue;
        }
        else {
            printf("%s ", pl[i].name);
        }
    }
    printf("is/are from Argentina\n");
}
void highestPaidPlayer(struct BarcelonaPlayer *pl, int size) {
    int max_i = 0;
    for(int i = 0; i <= (size-1); i++) {
        if(pl[i].Salary > pl[i+1].Salary) {
            continue;
        }
        else {
            max_i = i + 1;
        }
    }
    printf("The highest paid player is %s\n", pl[max_i].name);
}
int main() {
    struct BarcelonaPlayer listOfPlayers[4];

    for(int i = 0; i < 4; i++) {
        printf("[%d] Player\n", i+1);
        printf("Player[%d] name - ", i+1);
        gets(listOfPlayers[i].name);
        printf("Player[%d] Country - ", i+1);
        gets(listOfPlayers[i].country);
        printf("Enter his Salary - ");
        scanf("%lf", &listOfPlayers[i].Salary);
        fflush(stdin);
    }

    findPlayers(listOfPlayers, 4);

    highestPaidPlayer(listOfPlayers, 4);

    return 0;
}
