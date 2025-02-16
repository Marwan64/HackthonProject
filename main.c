#include "Header.h"

srand(time(NULL));


int main(void) {
	
	//Once main game is finished with all mehtods use main just for a play game method
    do {
        display_menu();
        int choice = get_choice();

    } 
    while (choice < 1 || choice > 2);

    return 0;
}


