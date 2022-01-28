#include <iostream>
#include <vector>

using namespace std;
string strlower(string);
string strlupper(string);


int main()
{
    // ######################################## Creating The Variables ########################################
    string Values[] = {"opning stock","sale","purchese","salary","capital","wages","salaries","cash in hand","debtors","cash at bank","rent","rent recivable","rent recived","builiding","sale returns","sale return","insurance & taxes","insurance and taxes","discount","drawing","loan to","cash","bad dabs","closing shop","depriciation",""};
    vector <string>AccountList;
    vector <int> AmountList;
    int amount;
    int i=1,a=1;
    long int totaldebit=0;
    string AccountName;
    system("cls");

    
    for(int k=0;k<4;k++)
    {
        cout<<"\nEnter The "<<i<<" Account Name : ";
        getline(cin,AccountName);

        cout<<endl<<"Enter The Amount : ";
        cin>>amount;

        AmountList.push_back(amount);
        if(AccountName=="F" || AccountName=="f" || amount==0 ){
            break;
        }
        i++;
        AccountList.push_back(strlower(AccountName));
    }
    // how to find the length of array in c++
    //  Method 1st ->   int size = *(&Values + 1) - Values;
    //  Method 2nd ->   sizeof(Values)/sizeof(Values[0])
    system("cls");
    cout<<"\t\tS.N.\t\t\tAccount Name\t\t\tL.F.\t\t\tDebit\t\t\tCredit"<<endl;
    cout<<"\t\t************************************************************************************************************************"<<endl;

    for(int i=0;i<AccountList.size();i++){
        for(int j=0;j< sizeof(Values)/sizeof(Values[0]);j++){
            if(AccountList.at(i)==Values[j]){
                cout<<"\t\t"<<a<<"\t\t\t"<<AccountList.at(i)<<"\t\t\t\t__\t\t\t"<<AmountList.at(i)<<"\t\t\t___"<<endl;

                totaldebit = totaldebit+AmountList.at(i);
                a++;

            }
                                   
        }
    }
    cout<<"\n\n\t\tThe Total Debit amount is : "<<totaldebit;
    cout<<"\n\n\n\n\n";
    return 0;
}

string strlower(string str){

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>65 && str[i]<90)
        {
            str[i] = str[i]+32;
        }
        
    }
    return str;

}

string strlupper(string str){

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>96 && str[i]<123)
        {
            str[i] = str[i]-32;
        }
        
    }
    return str;

}