#include <stdio.h>

void display_status(float temperature) {
    if (temperature < 15.0) {
        printf("Status: Cold\n");
    } else if (temperature < 25.0) {
        printf("Status: Normal\n");
    } else if (temperature < 35.0) {
        printf("Status: Warm\n");
    } else {
        printf("Status: Hot\n");
    }
}

int main(void) {
    float temperature;

    printf("====================================\n");
    printf("   SMART TEMPERATURE MONITOR\n");
    printf("====================================\n");

    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &temperature) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("\nTemperature: %.2f C\n", temperature);
    display_status(temperature);

    if (temperature >= 40.0) {
        printf("Warning: High temperature detected!\n");
    }

    return 0;
}
