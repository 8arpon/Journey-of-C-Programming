#include<stdio.h>
struct yourContacts{
    char name[100];
    char email[50];
    int number;
};

int main(){
    int numMember;
    printf("Write how many member's details you want to add: ");
    scanf("%d", &numMember);

    struct yourContacts contacts[numMember];
    int i;
    for(i = 0; i < numMember; i++){
        printf("Enter Name of Member %d: ", i + 1);
        getchar();
        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
        printf("Enter Email of of Member %d: ", i + 1);
        fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
        printf("Enter Number of Member %d: ", i + 1);
        scanf("%d", &contacts[i].number);
    }
    for(i = 0; i < numMember; i++){
        printf("\nName: %sEmail: %sMobile Number: %d\n", contacts[i].name, contacts[i].email, contacts[i].number);
    }

    return 0;
}