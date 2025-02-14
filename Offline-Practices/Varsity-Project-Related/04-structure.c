#include<stdio.h>
struct phoneBook{
    int number;
    char name[50];
    char email[50];
};

int main(){
    printf("Enter how many members info you want to add: ");
    int totalContacts;
    scanf("%d", &totalContacts);
    struct phoneBook members[totalContacts];
    int i;
    for(i = 0; i < totalContacts; i++){
        printf("\nEnter the details of Member %d\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(members[i].name, sizeof(members[i].name), stdin);
        printf("Email: ");
        fgets(members[i].email, sizeof(members[i].email), stdin);
        printf("Number: ");
        scanf("%d", &members[i].number);
    }
    for(i = 0; i < totalContacts; i++){
        printf("Details of Member %d: \n", i + 1);
        printf("Name: %s", members[i].name);
        printf("Email: %s", members[i].email);
    }
    return 0;
}