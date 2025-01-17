#include <stdio.h>
struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};

float calculateRentalCost(struct Car car, int days) {
    return car.rentalRatePerDay * days;
}
int main() {
    struct Car car1, car2, car3;
    int rentalDays;
    getchar();
    printf("Input details for Car 1:\n");
    printf("Car ID: ");
    scanf("%d", &car1.carID);
    printf("Model: ");
    scanf("%s", car1.model);
    printf("Rental Rate per Day: ");
    scanf("%f", &car1.rentalRatePerDay);

    printf("\nInput details for Car 2:\n");
    printf("Car ID: ");
    scanf("%d", &car2.carID);
    printf("Model: ");
    scanf("%s", car2.model);
    printf("Rental Rate per Day: ");
    scanf("%f", &car2.rentalRatePerDay);

    printf("\nInput details for Car 3:\n");
    printf("Car ID: ");
    scanf("%d", &car3.carID);
    printf("Model: ");
    scanf("%s", car3.model);
    printf("Rental Rate per Day: ");
    scanf("%f", &car3.rentalRatePerDay);
   
    printf("\nEnter the number of rental days: ");
    scanf("%d", &rentalDays);

    printf("\nTotal Rental Cost for Car 1: %.2f\n", calculateRentalCost(car1, rentalDays));
    printf("Total Rental Cost for Car 2: %.2f\n", calculateRentalCost(car2, rentalDays));
    printf("Total Rental Cost for Car 3: %.2f\n", calculateRentalCost(car3, rentalDays));

    return 0;
}
