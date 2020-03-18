/****************************/
/* Vending Machine - DEM2B  */
/****************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

// global variables
    int pepsi = 10; int coke = 10; int hundred_plus = 10; int ribena = 10; int mineral_water = 10; int fanta = 10;
    float pepsi_price = 1.5; float coke_price = 1.5; float hundred_plus_price = 1.5; float ribena_price = 1.2; float mineral_water_price = 1.0; float fanta_price = 1.5;
    int total_product; char price_total; char payment_method;
    float total_price; float wallet_balance = 20.00;

int main()
{
    printf("Wallet balance : RM%.2f\n", wallet_balance);
    // Display products
    printf("\t\t\tAvailable product in stock: \n");
    printf("\t(a) Pepsi (RM1.50): %d \t\t(b) Coke (RM1.50): %d \t\t(c) 100 PLUS (RM1.50): %d \t\n", pepsi, coke, hundred_plus);
    printf("\t(d) Ribena (RM1.20): %d \t(e) Mineral Water (RM1.00): %d \t(f) Fanta (RM1.50): %d \t\n", ribena, mineral_water, fanta);
    printf("\n-----------------------------------------------------\n");
    printf("Which one do you like to buy? (Enter up to 3 products or enter 'x' to proceed to payment)");

    // Add to cart and summation system
    int product_total = 1;
    int i = 3;
    printf("\nEnter product code: \n");
        do{
            scanf("%c",&price_total);
            if(price_total == 'a'){
                total_price += pepsi_price;
                if(i >= 2){
                    printf("\nEnter product code: \n");
                }
                else{
                    printf("");
                }
                i--;
            }
            else if(price_total == 'b'){
                total_price += coke_price;
                if(i >= 2){
                    printf("\nEnter product code: \n");
                }
                else{
                    printf("");
                }
                i--;
            }
            else if(price_total == 'c'){
                total_price += hundred_plus_price;
                if(i >= 2){
                    printf("\nEnter product code: \n");
                }
                else{
                    printf("");
                }
                i--;
            }
            else if(price_total == 'd'){
                total_price += ribena_price;
                if(i >= 2){
                    printf("\nEnter product code: \n");
                }
                else{
                    printf("");
                }
                i--;
            }
            else if(price_total == 'e'){
                total_price += mineral_water_price;
                if(i >= 2){
                    printf("\nEnter product code: \n");
                }
                else{
                    printf("");
                }
                i--;
            }
            else if(price_total == 'f'){
                total_price += fanta_price;
                if(i >= 2){
                    printf("\nEnter product code: \n");
                }
                else{
                    printf("");
                }
                i--;
            }
            else if(price_total == 'x'){
                i = 0;
            }

        }
        while (i > 0);



    printf("\n-----------------------------------------------------\nTotal price: %.2f\n\n", total_price);

    printf("Choose your method of payment : (a) E-Wallet or (b) Cash (Only RM1, RM5 and RM10 are accepted)\n");
    scanf("%c",&payment_method);
    switch(payment_method){
    case 'a':
        printf("Press enter to authorize the payment..\n");
        wallet_balance -= total_price;
        printf("Payment completed!\n")

    }
}
// Displaying product availability - product is air tin
product_selection(){

}

payment_system(){


}
credit_system(){
    printf("placeholder\n");
}
