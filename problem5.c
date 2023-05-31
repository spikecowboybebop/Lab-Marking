#include <stdio.h>
#include <string.h>
struct BarcelonaPlayer {
    char name[20];
    int age;
    char Position[20];
    double Salary;
    char country[20];
    double Rating;
};/*
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
}*/
void highestPaidPlayer(struct BarcelonaPlayer *pl, int size) {

}
int main() {
    struct BarcelonaPlayer listOfPlayers[4];

    for(int i = 0; i < 4; i++) {
        printf("[%d] Player\n", i+1);

        //printf("Player name - ");
        //gets(listOfPlayers[i].name);

        //printf("Player Position - ");
        //gets(listOfPlayers[i].Position);

        //printf("Player Country - ");
        //gets(listOfPlayers[i].country);

        //printf("Player age - ");
        //scanf("%d", &listOfPlayers[i].age);

        printf("Player's Salary - ");
        scanf("%lf", &listOfPlayers[i].Salary);

        //printf("Player's Rating - ");
        //scanf("%lf", &listOfPlayers[i].Rating);

        getc(stdin);
    }
    fflush(stdin);

    //findPlayers(listOfPlayers, 4);

    highestPaidPlayer(listOfPlayers, 4);

    return 0;
}
