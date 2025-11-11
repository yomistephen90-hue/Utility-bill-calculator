#include <stdio.h>

int main(){
    int units;
    float bill, service_charge = 1000, total, vat;

    printf("Enter the number of unit used: ");
    scanf("%d", &units);

    if(units<=100){
       bill = (units * 10);     //10 per unit 
    }

    else if(units<=200){
        bill = (100 * 10) + (units - 100) * 15;     //15 per unit for next 100
    }

    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20; //20 per unit after 200
    }

    vat = 0.75;
    total= bill + service_charge + vat;

    printf("Service Charge Is: %.2f\n", service_charge);
    printf("vat: %.2f\n", vat);
    printf("Your bill is: %.2f\n", bill);
    printf("..........................\n");
    printf("the total bill is: %.2f", total);

    return 0;
    }
