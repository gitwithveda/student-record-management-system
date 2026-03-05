#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {

    FILE *f;
    struct Student s;
    int choice;

    while(1){

        printf("\n1 Add Student");
        printf("\n2 Display Students");
        printf("\n3 Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice==1){

            f=fopen("students.txt","a");

            printf("Enter ID: ");
            scanf("%d",&s.id);

            printf("Enter Name: ");
            scanf("%s",s.name);

            printf("Enter Marks: ");
            scanf("%f",&s.marks);

            fprintf(f,"%d %s %f\n",s.id,s.name,s.marks);

            fclose(f);
        }

        else if(choice==2){

            f=fopen("students.txt","r");

            while(fscanf(f,"%d %s %f",&s.id,s.name,&s.marks)!=EOF){
                printf("\nID: %d Name: %s Marks: %.2f",s.id,s.name,s.marks);
            }

            fclose(f);
        }

        else{
            exit(0);
        }
    }
}