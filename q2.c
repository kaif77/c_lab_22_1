#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
char first_name[20];
char last_name[20];
char full_name[41];
char user_data;
int count = 0;

    printf("Enter First Name: ");
    fgets(first_name, sizeof(first_name), stdin);  // read string
   
    printf("Enter Last Name: ");
    fgets(last_name, sizeof(last_name), stdin);  // read string

    first_name[strcspn(first_name, "\n")] = 0;
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    strcat(full_name, "\0");

// Search a character- index and number of characters.
    printf("Enter Search Character: ");
    scanf("%s", &user_data);
    for (int i = 0; i < strlen(full_name); i++)
    {
        if(full_name[i] == user_data){
            printf("%c is at index %d\n", full_name[i], i);
            count++;
        }
    }

    printf("Character count: %d\n", count);
    
    printf("Length of Full Name: %ld\n", strlen(full_name)-1);



    return 0;
}