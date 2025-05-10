#include<stdio.h>
#include<stdlib.h>
#include<time.h>//used to get system date and time
#include<windows.h>//used to get system date and time

//item type structure
typedef struct
{
    char name[100];
    double price;
    int qty;
} item ;

int main()
{
    char comp_nm[] = "Retail Daddy";//retail store name
    int choice;
    int i = 0;
    item bill_det[1000];//cart
    static double total;

    while (1)
    {
        system("cls");
        printf("x----------Item Type----------x\n1-Cold Beverages\n2-Miscellaneous\n3-Grocery\n4-Electronics\n5-Stationary\nx-----------------------------x\n:");
        scanf("%d",&choice);    
        //switch case to add items into the cart for final billing
        switch(choice)
        {
            case 1:
                item Soda = {"Soda",20.00};
                item water = {"Water",10.00};
                item Coke = {"Coke",40.00};
                item Energy_Drink = {"Red Bull",175.00};
                item Beverages[] = {Soda,water,Coke,Energy_Drink};
                
                while(1)
                {
                    system("cls");
                    int item,num,ch;
                    printf("x----------Item----------x\n1-%s\n2-%s\n3-%s\n4-%s\nx------------------------x\n:"
                        ,Beverages[0].name,Beverages[1].name,Beverages[2].name,Beverages[3].name);
                    scanf("%d %d",&item,&num);
                    
                    Beverages[item-1].qty = num;
                    total += Beverages[item-1].price*Beverages[item-1].qty;
                    bill_det[i] = Beverages[item-1]; 
                    i++;
                    getchar();
                    printf("Add another Beverage?\n(y/n):");
                    scanf("%c",&ch);
                    if(ch == 'n' || ch == 'N')
                    {
                        break;
                    }
                }

                break;
            case 2:
                item Chips = {"Chips",10};
                item Choco = {"Chocolate",20};
                item Bar = {"Protein Max Bar",75};
                item noodles = {"Maggie",14};
                item Misc[] = {Chips,Choco,Bar,noodles};

                while(1)
                {
                    system("cls");
                    int item,num,ch;
                    printf("x----------Item----------x\n1-%s\n2-%s\n3-%s\n4-%s\nx------------------------x\n:"
                        ,Misc[0].name,Misc[1].name,Misc[2].name,Misc[3].name);
                    scanf("%d %d",&item,&num);
                    
                    Misc[item-1].qty = num;
                    total += Misc[item-1].price*Misc[item-1].qty;
                    bill_det[i] = Misc[item-1]; 
                    i++;
                    getchar();
                    printf("Add another Miscellaneous Item?\n(y/n):");
                    scanf("%c",&ch);
                    if(ch == 'n' || ch == 'N')
                    {
                        break;
                    }
                }
                break;
            
            case 3:
                item Onion = {"Onion",6};
                item Cabbage = {"C  abbage",8};
                item Ketchup = {"Ketchup",50};
                item Garlic = {"Garlic",4};
                item Bottle = {"Bottle",99};
                item Glass = {"Glass",149};
                item Groceries[] = {Onion,Cabbage,Ketchup,Garlic,Bottle,Glass};
                while(1)
                {
                    system("cls");
                    int item,num,ch;
                    printf("x----------Item----------x\n1-%s\n2-%s\n3-%s\n4-%s\n5-%s\n6-%s\nx------------------------x\n:"
                        ,Groceries[0].name,Groceries[1].name,Groceries[2].name,Groceries[3].name,Groceries[4].name,Groceries[5].name);
                    scanf("%d %d",&item,&num);
                    
                    Groceries[item-1].qty = num;
                    total += Groceries[item-1].price*Groceries[item-1].qty;
                    bill_det[i] = Groceries[item-1]; 
                    i++;
                    getchar();
                    printf("Add another Grocery?\n(y/n):");
                    scanf("%c",&ch);
                    if(ch == 'n' || ch == 'N')
                    {
                        break;
                    }
                }
                break;
            
            case 4:
                item tab = {"Samsung Galaxy Tab 9",79999};
                item phone = {"Samsung S25",89990};
                item iphone = {"iPhone 16",74990};
                item laptop = {"HP Pavillion 15",79999};
                item tv = {"Sony Bravia 48-inch",49999};
                item headset = {"Razer BlackShark V2X",4999};
                item Electronics[] = {tab,phone,iphone,laptop,tv,headset};
                while(1)
                {
                    system("cls");
                    int item,num,ch;
                    printf("x----------Item----------x\n1-%s\n2-%s\n3-%s\n4-%s\n5-%s\n6-%s\nx------------------------x\n:"
                        ,Electronics[0].name,Electronics[1].name,Electronics[2].name,Electronics[3].name,Electronics[4].name,Electronics[5].name);
                    scanf("%d %d",&item,&num);
                    
                    Electronics[item-1].qty = num;
                    total += Electronics[item-1].price*Electronics[item-1].qty;
                    bill_det[i] = Electronics[item-1]; 
                    i++;
                    getchar();
                    printf("Add another Electronic Item?\n(y/n):");
                    scanf("%c",&ch);
                    if(ch == 'n' || ch == 'N')
                    {
                        break;
                    }
                }
                break;
            
            case 5:
                item pencil = {"Pencil",2};
                item pen = {"Pen",20};
                item nb = {"Notebook",55};
                item geobox = {"Geometry Box",75};
                item eraser = {"Eraser",5};
                item sharpner = {"Sharpner",7};
                item cp = {"Chart Paper",15};
                item pb = {"Pencil Box",35};
                item stationary[] = {pencil,pen,nb,geobox,eraser,sharpner,cp,pb}; 
                while(1)
                {
                    system("cls");
                    int item,num,ch;
                    printf("x----------Item----------x\n1-%s\n2-%s\n3-%s\n4-%s\n5-%s\n6-%s\n7-%s\n8-%s\nx------------------------x\n:"
                        ,stationary[0].name,stationary[1].name,stationary[2].name,stationary[3].name,stationary[4].name,
                        stationary[5].name,stationary[6].name,stationary[7].name);
                    scanf("%d %d",&item,&num);
                    
                    stationary[item-1].qty = num;
                    total += stationary[item-1].price*stationary[item-1].qty;
                    bill_det[i] = stationary[item-1]; 
                    i++;
                    getchar();
                    printf("Add another Stationary?\n(y/n):");
                    scanf("%c",&ch);
                    if(ch == 'n' || ch == 'N')
                    {
                        break;
                    }
                }
                break;   
        }
        //clearing Screen and adding items from different categories into the Bill
        system("cls");
        char cho;
        getchar();
        printf("Add another item to bill?\n(y/n):");
        scanf("%c",&cho);
        if(cho == 'n' || cho == 'N')
        {
            break;
        }
            
    }
    //Printing The Bill in proper format
    SYSTEMTIME lt;//gives the current time in system from first epoch in 1970
    GetLocalTime(&lt);//converts the time into the currently used format in the system
    time_t curr_time = time(NULL);//gives the current time in system from first epoch in 1970
    char date[20];
    strftime(date,20,"%Y-%m-%d",localtime(&curr_time));//convert the system epoch to local time and then to date and that date into a string so it can be printed
    system("cls");
    printf("%s\n",comp_nm);
    printf("Date: %s\t\tTime: %02d:%02d:%02d\n",date,lt.wHour,lt.wMinute,lt.wSecond);
    printf("x---------------------------Bill---------------------------x\n");
    printf("Sr no.\t Item\t\t\tQty\t   Price\n\n");
    for(int l = 0; l < i; l++) {
        char padded_name[30] = {0};
        strcpy(padded_name, bill_det[l].name);//making every entry into the same string length
        
        //making sure every string used 20 spaces and srno and qty take 3 upto 3 places each with all three left aligned using '%-' format specifier
        printf("%-3d     %-20s     %-3d       %.2lf\n", 
               l+1, 
               padded_name, 
               bill_det[l].qty, 
               bill_det[l].price * bill_det[l].qty);
    } 

    printf("--------------------------------------------------------\n");
    printf("Total:                                     %.2lf\n", total);
    printf("x----------------------------------------------------------x\n");
    
    return 0;
}