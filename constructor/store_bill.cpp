#include <iostream>
using namespace std;

class bill
{
private:
    string name, number;

public:
    string monumber;
    int a;
    void display()
    {
        cout << "-------- VRUM CLOTHS --------\n";
        cout << "           for mens          \n"<< "\n";
        cout << "Enter your Name :";
        cin >> name;
        moille_num:
        cout << "Enter your number for 10 digits :";
        cin >> monumber;
        a=number.size();
        if(a==10)
        {
            cout<<" Valid 10-digit mobile number."<<endl;
        }
        else
        {
            cout<<"Invalid mobile number. It should be 10 digits."<<endl;
        }
    }
    void showinfo()
    {
        cout << "\t-------- VRUM CLOTHS --------\n";
        cout << "\t           for mens          \n"<< "\n";
        cout << "\nName: " << name << "\tmobile Number: " << monumber << endl;
        cout << endl;
        cout << "----------------your shoping list----------------";
        cout << endl;
    }
};
class Show_bill : public bill
{
protected:
    int gst, dis, netbill, billamt = 0;
    int bill = 0, qty;

    string siteam[6];

public:
    int siteam1()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[0] = "SHIRTS = 1500";
        return bill = bill + qty * 1500;
    }
    int siteam2()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[1] = "T-SHIRTS = 999";
        return bill = bill + qty * 999;
    }
    int siteam3()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[2] = "COTEN JENS = 1250";
        return bill = bill + qty * 1250;
    }
    int siteam4()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[3] = "TREAK PENTS = 950";
        return bill = bill + qty * 950;
    }
    int siteam5()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[4] = "SHORTS JENS = 550";
        return bill = bill + qty * 550;
    }
    int siteam6()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[5] = "TREDISNAL KURTA = 350";
        return bill = bill + qty * 350;
    }
        int siteam7()
    {
        cout << "Enter a Qunatity :\n";
        cin >> qty;
        siteam[5] = " SUIT = 2999";
        return bill = bill + qty * 2999;
    }
    int Bill_Ammount()
    {

        return billamt = billamt + bill;
    }
    int GstBill()
    {
        return gst = (billamt * 12) / 100;
    }
        int discount()
    {
        if (billamt < 2000)
        {
            return dis = (billamt * 10) / 100;
        }
        else if (billamt > 5000)
        {
            return dis = (billamt * 25)/100;
        }
        else
        {
            return dis = 0;
        }
    }
    int NetBill()
    {
        return netbill = billamt + gst - dis;
    }
    void Show_NetBill()
    {
        Show_bill_Items();
        cout << endl;
        cout << "\n-------------------------------------------------";
        cout << "\n TOTAL ORDER PRICE  : " << Bill_Ammount();
        cout << "\n GST                : " << GstBill();
        cout << "\n DISCOUNT           : " << discount()<< endl;
        cout << "\n-------------------------------------------------";
        cout << "\n|TOTAL PAY BIL      : " << NetBill()<< "\t\t\t|";         
        cout << "\n-------------------------------------------------" << endl;
        cout << "\n\n\t*****THANK FOR YOUR VISIT*****" << endl;
    }
    void Show_bill_Items()
    {

        for (int i = 0; i <7; i++)
        {
            if (!siteam[i].empty())
            {
                cout << "\n\t " << i + 1 << ":" << siteam[i];
            }
        }
    }
};

int main()
{
    Show_bill a;

    a.display();

    cout << "\n\t\**** shooping items ***** \n";
    cout << "-----------------------------------------------\n";
    cout <<"ID";
    cout << "\tCLOTH"
         << "\t\t\t  MRP"
         << "\n"
         << "-------------------------------------------\n";
    cout <<"1."
         << "SHIRTS"
         << "\t\t\t  1500/-"
         << "\n";
    cout <<"2."
         << "T-SHIRTS"
         << "\t\t\t  999/-"
         << "\n";
    cout <<"3."
         << "COTEN JENS"
         << "\t\t\t  1250/-"
         << "\n";
    cout <<"4."
         << "TREAK PENTS"
         << "\t\t\t  950/-"
         << "\n";
    cout <<"5."
         << "SHORT JENS"
         << "\t\t\t  550/-"
         << "\n";
    cout <<"6."
         << "TREDISNAL KURTA"
         << "\t\t  350/-"
         << "\n";
    cout <<"7."
         << "SUIT"
         << "\t\t\t\t  2999/-"
         << "\n"
         << "conform your order  [0]"<<endl;

    int siteam = 0;

    do
    {
        cout << "-----CLOTH ID-----"
             << "\n";
        cin >> siteam;

        switch (siteam)
        {
        case 1:
            a.siteam1();
            break;

        case 2:
            a.siteam2();
            break;

        case 3:
            a.siteam3();
            break;

        case 4:
            a.siteam4();
            break;

        case 5:
            a.siteam5();
            break;

        case 6:
            a.siteam5();
            break;

        case 7:
            a.siteam5();
            break;

        case 0:
            break;

        default:
            cout << "THIS ITEMS NOT VALID";
        }

    } while (siteam != 0);
    a.showinfo();
    a.Show_NetBill();
}