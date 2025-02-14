#include<stdio.h>
#include<string.h>
struct contDetails{
    char name[50];
    int number;
    char email[50];
};

int main(){
    int members;
    printf("Write the total number of contact details you want to add: ");
    scanf("%d", &members);
    struct contDetails contacts[members];
    
    int i;
    for(i = 0; i < members; i++){
        printf("Write name of Member %d ", i + 1);
        getchar();
        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
        printf("Write number of Member %d ", i + 1);
        scanf("%d", &contacts[i].number);
        printf("Write an email of Member %d ", i + 1);
        getchar();
        fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
    }

    for(i = 0; i < members; i++){
        printf("\nName: %sNumber: +880%d\nEmail:%s", contacts[i].name, contacts[i].number, contacts[i].email);
    }


    return 0;
}