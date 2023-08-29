#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
}dob;
struct student{
    char name[50];
    int roll_no;
    int marks;
    struct date dob;
};

void EnterDetails(struct student details[]){
    printf("Enter Name: ");
    scanf("%s",details[0].name);
    printf("Enter Roll Number: ");
    scanf("%d",&details[0].roll_no);
    printf("Enter dob (ddmmyyyy): ");
    scanf("%d %d %d",&dob.dd,&dob.mm,&dob.yyyy);
    printf("Enter Marks: ");
    scanf("%d",&details[0].marks);   

}
void DisplayDetails(struct student details[]){
    printf("Name: %s\n",details[0].name);
    printf("Roll Number: %d\n",details[0].roll_no);
    printf("DOB: %d/%d/%d\n",dob.dd,dob.mm,dob.yyyy);
    printf("Marks: %d\n",details[0].marks);
}
void Exit(struct student details[]){
    printf("Exiting the program !!!");
}
int main() {
        struct student details[1]; 
        int choice;
        for(int i=0;i<3;i++)
        {
            
            printf("Student Database Management System\n1. Add Student\n2. Display Students\n3. Exit:\n");
            printf("Enter your choice :\n");
            scanf("%d",&choice);

            switch (choice)
        {
        case 1:
            /* code */
            printf("Enter details of the student: ");
            EnterDetails(details);
            break;
        case 2:
            printf("Student details: ");
            DisplayDetails(details);
            break;
        case 3:
            Exit(details);
            break;
        default:
            break;
        }
        }
        
    return 0;
}