#include <stdio.h>
#include <string.h>
struct Gamer {
    int Number_of_favorite_games;
    char List_of_favorite_games[200][200];

};
int main() {
    struct Gamer gamer[3];
    for(int i = 0; i < 3; i++) {
        printf("Gamer[%d] - ", i+1);
        scanf("%d", &gamer[i].Number_of_favorite_games);
    }
    for(int i = 0; i < 3; i++) {
        printf("Enter Favorite Games for Gamer[%d]\n", i+1);
        for(int j = 0; j < gamer[i].Number_of_favorite_games; j++) {
            printf("Game[%d] - ", j+1);
            scanf("%s", &gamer[i].List_of_favorite_games);
            fflush(stdin);
        }
    }
    for(int i = 0; i < 3; i++) {
        printf("Gamer[%d]\n", i+1);
        for(int j = 0; j < gamer[i].Number_of_favorite_games; j++) {
            printf("Game[%d] - ", j+1);
            for(int k = 0; gamer[i].List_of_favorite_games[j][k] != '\0'; k++) {
                printf("%c", gamer[i].List_of_favorite_games[j][k]);
                fflush(stdin);
            }
            printf("\n");
        }
    }

    return 0;
}
