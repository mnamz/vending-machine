/****************************/
/* Vending Machine - DEM2B  */
/****************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

// Global variables
    // Drinks price
    float pepsi_price = 1.5, coke_price = 1.5, hundred_plus_price = 1.5,
    ribena_price = 1.2, mineral_water_price = 1.0, fanta_price = 1.5;
    
    //Payment system 
    int total_product; char price_total; int payment_method;
    float total_price, wallet_balance = 40.00;

    // Cash system
    int note_1 = 5, note_5 = 3, note_10 = 2, note_type,
    note_i, note_j, note_k;
    float note_i_total, note_j_total, note_k_total,
    balance_i, balance_j, balance_k,
    cash_balance_i, cash_balance_j, cash_balance_k, total_wallet;

// Core
int main(){

    printf(R"EOF(
                        ______  _____ ___  ___ _____ ______
                        |  _  \|  ___||  \/  |/ __  \| ___ \
                        | | | || |__  | .  . |`' / /'| |_/ /
                        | | | ||  __| | |\/| |  / /  | ___ \
                        | |/ / | |___ | |  | |./ /___| |_/ /
                        |___/  \____/ \_|  |_/\_____/\____/

 _   _                   _  _                  ___  ___              _      _
| | | |                 | |(_)                 |  \/  |             | |    (_)
| | | |  ___  _ __    __| | _  _ __    __ _    | .  . |  __ _   ___ | |__   _  _ __    ___
| | | | / _ \| '_ \  / _` || || '_ \  / _` |   | |\/| | / _` | / __|| '_ \ | || '_ \  / _ \
\ \_/ /|  __/| | | || (_| || || | | || (_| |   | |  | || (_| || (__ | | | || || | | ||  __/
 \___/  \___||_| |_| \__,_||_||_| |_| \__, |   \_|  |_/ \__,_| \___||_| |_||_||_| |_| \___|
                                       __/ |
                                      |___/


    )EOF");
    // Display products
    printf("\t\t\t\tAvailable product in stock: \n");
    printf("\t(a) Pepsi (RM1.50) \t(b) Coke (RM1.50) \t\t(c) 100 PLUS (RM1.50) \t\n");
    printf("\t(d) Ribena (RM1.20) \t(e) Mineral Water (RM1.00) \t(f) Fanta (RM1.50) \t\n");
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

    payment_system();
}

// Payment system -- offers e-wallet and cash method of payment
payment_system(){
    printf("Wallet balance : RM%.2f\n", wallet_balance);
    printf("Choose your method of payment : (1) E-Wallet or (2) Cash (Only RM1, RM5 and RM10 are accepted)\n");
    scanf("%d",&payment_method);
    // User pays with e-wallet
    if(payment_method == 1){
        printf("Press any key to authorize the payment..\n");
        wallet_balance -= total_price;
        printf("Payment completed!\n");
        printf("New balance : %.2f", wallet_balance);
    }
    // User pays with cash
    else if(payment_method == 2){
        printf("\nYou have notes of \t\n(1) RM 1 - %d\t\n(5) RM 5 - %d\t\n(10) RM10 - %d\n\t\n(Please enter the note type below)\n",note_1,note_5,note_10);
        printf("Insert the note of.. \nRM");
        scanf("%d",&note_type);
        if(note_type == 1){ // When user inserts RM 1
            printf("How many of RM1 notes you want to insert?\n"); 
            scanf("%d",&note_i);
            if(note_i > note_1){
                printf("\nYou don't have notes that much! Aborting transaction...\n");
                return;
            }
            note_1 = note_1 - note_i;
            note_i_total = note_i * 1;
            printf("You've inserted : RM%.2f\nCompleting transaction..\n", note_i_total);
            if(note_i_total >= total_price){
                printf("Transaction successful!\n");
                balance_i = note_i_total - total_price;
                total_wallet = wallet_balance - total_price;
                printf("\n--\nBalance: RM%.2f\nTotal balance in your wallet: RM%.2f\n", balance_i, total_wallet);
                credit_system();
            }
            else if(note_i_total != total_price){
                printf("Insufficient funds, aborting transaction..");
                return;
            }
        }
        else if(note_type == 5){ // When user inserts RM 5
            printf("How many of RM5 notes you want to insert?\n");
            scanf("%d",&note_j);
            if(note_j > note_5){
                printf("\nYou don't have notes that much! Aborting transaction...\n");
                return;
            }
            note_5 = note_5 - note_j;
            note_j_total = note_j * 5;
            printf("You've inserted : RM%.2f\nCompleting transaction..\n", note_j_total);
            if(note_j_total >= total_price){
                printf("Transaction successful!\n");
                balance_j = note_j_total - total_price;
                total_wallet = wallet_balance - total_price;
                printf("\n--\nBalance: RM%.2f\nTotal balance in your wallet: RM%.2f\n", balance_j, total_wallet);
                credit_system();
            }
            else if(note_j_total != total_price){
                printf("Insufficient funds, aborting transaction..");
                return;
            }
        }
        else if(note_type == 10){ // When user inserts RM 10
            printf("How many of RM10 notes you want to insert?\n");
            scanf("%d",&note_k);
            if(note_k > note_10){
                printf("\nYou don't have notes that much! Aborting transaction...\n");
                return;
            }
            note_10 = note_10 - note_k;
            note_k_total = note_k * 10;
            printf("You've inserted : RM%.2f\nCompleting transaction..\n", note_k_total);
            if(note_k_total >= total_price){
                printf("Transaction successful!\n");
                balance_k = note_k_total - total_price;
                total_wallet = wallet_balance - total_price;
                printf("\n--\nBalance: RM%.2f\nTotal balance in your wallet: RM%.2f\n", balance_k, total_wallet);
                credit_system();
            }
            else if(note_k_total != total_price){
                printf("Insufficient funds, aborting transaction..");
                return;
            }
        }
    }
}

credit_system(){

    printf("Please pickup your drinks below..\n");
    printf(R"EOF(
|=================================|
|        =       =       =        |
|       / \     / \     / \       |
|       ) (     ) (     ) (       |
|       [_]     [_]     [_]       |
|=================================|
 == Thank you for your purchase! ==
    )EOF");


}

