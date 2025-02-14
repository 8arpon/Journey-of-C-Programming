#include<stdio.h>
#include<string.h>
struct mobileContact{
    int number;
    char name[50];
    char email[50];
};

int main(){
    int totalContacts;
    printf("Write how many members do you want to add: ");
    scanf("%d", &totalContacts);
    
    struct mobileContact totalMembers[totalContacts];
    int i;
    for(i = 0; i < totalContacts; i++){
        printf("\nWrite the details of the user %d: ", i + 1);
        printf("\nName: ");
        getchar();
        fgets(totalMembers[i].name, sizeof(totalMembers[i].name), stdin);
        printf("Number: ");
        scanf("%d", &totalMembers[i].number);
        printf("e-mail: ");
        getchar();
        fgets(totalMembers[i].email, sizeof(totalMembers[i].email), stdin);
    }

    for(i = 0; i < totalContacts; i++){
        printf("\nDetails of Member %d", i + 1);
        printf("Name: %s", totalMembers[i].name);
        printf("Contact Number: %d", totalMembers[i].number);
        printf("E-Mail: %s", totalMembers[i].email);
    }



    return 0;
}