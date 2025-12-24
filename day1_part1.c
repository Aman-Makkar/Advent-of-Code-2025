#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <string.h>

void secret_entrance(){
    FILE *fptr;
    fptr = fopen("Input.txt", "r");
    int starting_position = 50;
    int result = 0;
    char str[4168];
    char str2[4168];
    while(fscanf(fptr, "%s", str) == 1){
        strncpy(str2, &str[1], 10);
        if (str[0] == 'L'){
            starting_position = (starting_position - atoi(str2) + 100) % 100;
        }
        else{
            starting_position = (starting_position + atoi(str2) + 100) % 100;
        }

        if(starting_position == 0){
            result++;
        }
    }
    printf("%d", result);
}

int main(){

    secret_entrance();
    
    return 0;
}
