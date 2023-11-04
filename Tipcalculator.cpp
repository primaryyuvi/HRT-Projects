#include <bits/stdc++.h>
using namespace std;
double tipcalculator(int amount ,int percentage)
{
    double tip = amount*(percentage/100.0);
    return ceil(tip);
}
double roundedoff(int amount)
{
    int a = ceil(amount/10);
    return a*10;

}
int main()
{
    double amount,tipamount,roundoff;
    int choice = 1;
    cout<<"This is the Tip calculator.\nHere you get to know what percentage of tip is acceptable in different countries.\nChoose the number accodrding to the country you want and we give you the tip you need to give in that country according to your bill amount\n0.End the app\n1. Argentina\n2.Australia\n3.Belgium\n4.Brazil\n5.Canada\n 6.The carribean\n7.Chile\n8.China\n9.Croatia\n10.DenmarK\n11.Egypt\n12.France\n13.Germany\n14.Greece\n15.Iceland\n16.India\n17.Mexico\n18.Morocco\n19.Netherlands\n20.New Zealand\n21.Norway\n22.Peru\n23.Philippines\n24.Poland\n25.Portugal\n26.Russia\n27.South Africa\n28.Spain\n29.Sweden\n30.Switzerland\n31.Thailand\n32.Turkey\n33.United Kingdom\n34.United States\n35.Vietnam\nEnter the amount "<<endl;
    cin>>amount;
    while(1)
    {
        cout<<"Enter the corresponding number of the country of your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            tipamount=tipcalculator(amount,10);
            cout<<"Argentina"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 2:
            tipamount=tipcalculator(amount,10);
            cout<<"Australia"<<endl;
            cout<<"Tipping in australia is not compulsory but 10% is acceptable\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 3:
            roundoff=roundedoff(amount);
            cout<<"Belgium"<<endl;
            cout<<"Belgium has a 'keep the change' attittude where you round off the amount and pay\n";
            cout<<"The amount you would pay is :"<<roundoff<<endl;
            break;
            case 4:
            tipamount=tipcalculator(amount,10);
            cout<<"Brazil"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 5:
            tipamount=tipcalculator(amount,18);
            cout<<"Canada"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 6:
            tipamount=tipcalculator(amount,15);
            cout<<"The carribeans"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 7:
            tipamount=tipcalculator(amount,10);
            cout<<"Chile"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 8:
            cout<<"China"<<endl;
            cout<<"It is considered inappropriate to leave tips in chinese restaurents so it is better not to tip"<<endl;
            break;
            case 9:
            tipamount=tipcalculator(amount,10);
            cout<<"Croatia"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 10:
            tipamount=tipcalculator(amount,10);
            cout<<"Denmark"<<endl;
            cout<<"The danish law makes sure that tip is included in the bill although additional 10% tip is appreaciated\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 11:
            tipamount=tipcalculator(amount,12);
            cout<<"Egypt"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 12:
            tipamount=tipcalculator(amount,10);
            cout<<"France"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 13:
            tipamount=tipcalculator(amount,10);
            cout<<"Germany"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 14:
            tipamount=tipcalculator(amount,5);
            cout<<"Greece"<<endl;
            cout<<"Service charges are included in the bill so 5% tip is acceptable\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 15:
            roundoff=roundedoff(amount);
            cout<<"Iceland"<<endl;
            cout<<"Rounding off the amount to the nearest multiple of 10s is acceptable\n";
            cout<<"The amount you would pay is :"<<roundoff<<endl;
            break;
            case 16:
            tipamount=tipcalculator(amount,15);
            cout<<"India"<<endl;
            cout<<"Tipping in india is mandatory and is considered impolite if you dont tip\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 17:
            tipamount=tipcalculator(amount,15);
            cout<<"Mexico\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 18:
            cout<<"Morocco\n";
            tipamount=tipcalculator(amount,10);
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 19:
            roundoff=roundedoff(amount);
            cout<<"Netherlands"<<endl;
            cout<<"Rounding off the amount to the nearest multiple of 10s is acceptable\n";
            cout<<"The amount you would pay is :"<<roundoff<<endl;
            break;
            case 20:
            tipamount=tipcalculator(amount,10);
            cout<<"New Zealand\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 21:
            tipamount=tipcalculator(amount,15);
            cout<<"Norway"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 22:
            tipamount=tipcalculator(amount,15);
            cout<<"Peru\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 23:
            tipamount=tipcalculator(amount,10);
            cout<<"Philippines\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 24:
            roundoff=roundedoff(amount);
            cout<<"Poland"<<endl;
            cout<<"Rounding off the amount to the nearest multiple of 10s is acceptable\n";
            cout<<"The amount you would pay is :"<<roundoff<<endl;
            break;
            case 25:
            tipamount=tipcalculator(amount,10);
            cout<<"Portugal"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 26:
            tipamount=tipcalculator(amount,10);
            cout<<"Russia\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 27:
            tipamount=tipcalculator(amount,15);
            cout<<"South Africa\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 28:
            tipamount=tipcalculator(amount,10);
            cout<<"Spain"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 29:
            tipamount=tipcalculator(amount,10);
            cout<<"Sweden\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 30:
            tipamount=tipcalculator(amount,10);
            cout<<"Switzerland\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 31:
            tipamount=tipcalculator(amount,10);
            cout<<"Thailand"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 32:
            tipamount=tipcalculator(amount,10);
            cout<<"Turkey"<<endl;
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 33:
            tipamount=tipcalculator(amount,12);
            cout<<"United Kingdom\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 34:
            tipamount=tipcalculator(amount,20);
            cout<<"United States\n";
            cout<<"Tipping in USA is compulsory\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 35:
            tipamount=tipcalculator(amount,10);
            cout<<"Vietnam\n";
            cout<<"Tipping the server is acceptable but tipping the vendors is inappropriate\n";
            cout<<"The tip amount is :"<<tipamount<<endl;
            break;
            case 0:
            cout<<"The End\n";
            exit(0);
            break;
            default:
                cout<<"Give the appropriate number as a choice\n";
                break;
        }
    }
    return 0;
}