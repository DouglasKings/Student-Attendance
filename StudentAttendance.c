#include <stdio.h>

void studentAttendance(double Attendance); 

int main(){
    double classesHeld, classesAttended, Attendance;

    printf("Enter the number of classes held: ");
    scanf("%lf", &classesHeld);
    printf("Enter the number of classes attended: ");
    scanf("%lf", &classesAttended);

    Attendance = (classesAttended / classesHeld) * 100; 
    studentAttendance(Attendance); 

    printf("The number of classes held: %.2lf \n", classesHeld);
    printf("The number of classes attended: %.2lf \n", classesAttended);
    printf("The percentage of class attended: %.2lf%% \n", Attendance); 

    return 0;
}

void studentAttendance(double Attendance){ 
    if(Attendance < 75){ 
        printf("The student is not allowed to sit in an exam. \n");
    } else {
        printf("The student is allowed to sit in an exam. \n");
    }
}