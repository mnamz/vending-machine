/****************************/
/* Vending Machine - DEM2B  */
/****************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    display_product();
    select_product();
    calculate_total();
    payment_system();
    credit_system();
}
// Displaying product availability - product is air tin
display_product(){
    int pepsi = 10; int coke = 10; int hundred_plus = 10; int ribena = 10; int mineral_water = 10; int fanta = 10;
    float pepsi_price = 1.5; float coke_price = 1.5; float hundred_plus_price = 1.5; float ribena_price = 1.2; float mineral_water_price = 1.0; float fanta_price = 1.5;
    int total_product; char price_total;
    float total_price;

    printf("\t\t\tAvailable product in stock: \n");
    printf("\t(a) Pepsi (RM1.50): %d \t\t(b) Coke (RM1.50): %d \t\t(c) 100 PLUS (RM1.50): %d \t\n", pepsi, coke, hundred_plus);
    printf("\t(d) Ribena (RM1.20): %d \t(e) Mineral Water (RM1.00): %d \t(f) Fanta (RM1.50): %d \t\n", ribena, mineral_water, fanta);
    printf("______________________________________\n");
    printf("Which one do you like to buy? (Up to 3 product in single transaction)");

    int product_total = 1;
    int i = 3;
        printf("\nEnter product code: \n");
        do{
            scanf("%c",&price_total);
            if(price_total == 'a'){
                total_price += pepsi_price;
                printf("\nEnter product code: \n");
                i--;
            }
            else if(price_total == 'b'){
                total_price += coke_price;
                printf("\nEnter product code: \n");
                i--;
            }
            else if(price_total == 'c'){
                total_price += hundred_plus_price;
            printf("\nEnter product code: \n");

                i--;
            }
            else if(price_total == 'd'){
                total_price += ribena_price;
            printf("\nEnter product code: \n");
                i--;
            }
            else if(price_total == 'e'){
                total_price += mineral_water_price;
            printf("\nEnter product code: \n");
                i--;
            }
            else if(price_total == 'f'){
                total_price += fanta_price;
            printf("\nEnter product code: \n");
                i--;
            }
        }
        while (i > 0);



    printf("Total price: %f", total_price);

}
select_product(){
    printf("placeholder\n");
}
calculate_total(){
    printf("placeholder\n");
}
payment_system(){
    printf("placeholder\n");
}
credit_system(){
    printf("placeholder\n");
}
