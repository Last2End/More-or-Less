#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define print printf
#define input scanf
#define MAX 100
#define MIN 1
int main(void){

    int on_off = 1;
    int test = 1;
    int number_give;
    int secret_number;
    
    srand(time(NULL));
    secret_number = (rand() % (MAX - MIN + 1)) + MIN;

    while(on_off == 1){
        print("Guess the number ?\n");
        input("%d",&number_give);
        if(number_give == secret_number){
            if(test == 1){
                print("Well done, you found the mystery number in one shot !\n");
            }
            else{
		        print("Well done, you found the mystery number in %d moves !\n",test);
	        }
        on_off = 0;
	    }
        if(secret_number > number_give){
            print("It's more !\n");
        }
        if(secret_number < number_give){
            print("It's less !\n");
        }
        if(number_give != secret_number){
            test += 1;
        }
	}

	return 0;
}
