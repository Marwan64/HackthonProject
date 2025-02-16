#include "Header.h"




int main(void) {
	srand(time(NULL));
    int choice = 0;
        do {
            display_menu();
            get_choice();

        } while (choice < 1 || choice > 2);
    

    int display_menu() {
        printf("1. Playing Mental Math");
        printf("2. Exist");
    }
    int get_choice() {
        int choice = 0;
        scanf("%d", &choice);
    }
	//Once main game is finished with all mehtods use main just for a play game method
	playGame();
    return 0;
}


