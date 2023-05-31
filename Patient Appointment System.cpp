#include<iostream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
class patient_details
{
protected:
    string name;
    float age;
    string address;
    string contact_number;
    string disease;
    string blood_group;
    string blood_pressure;
    string condition;
    string glucose;
public:
    void set_details()
    {
        cout<<endl<<"\tInclude Patient's Information"<<endl;
        cout<<"______________________________________________________________________________"<<endl<<endl;
        cout<<" Patient's Name:              ";
        cin>>name;
        cout<<endl<<" Patient's Age:               ";
        cin>>age;
        cout<<endl<<" Patient's Address:           ";
        cin>>address;
        cout<<endl<<" Patient's Contact No.:       ";
        cin>>contact_number;
        cout<<endl<<" Patient's Disease:           ";
        cin>>disease;
        cout<<endl<<" Patient's Blood Group:       ";
        cin>>blood_group;
        cout<<endl<<" Patient's Blood Pressure\n(Systolic/Diastolic):        ";
        cin>>blood_pressure;
        cout<<endl<<" % of Glucose in Blood:       ";
        cin>>glucose;
        cout<<endl<<" Patient's Condition:         ";
        cin>>condition;
        cout<<endl<<"______________________________________________________________________________"<<endl;
    }
    void show_details()
    {
        cout<<endl<<endl<<"\t\t === Patient's Information ==="<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout<<endl<<" Patient's Name:              "<<name<<endl<<endl;
        cout<<" Patient's Age:               "<<age<<endl<<endl;
        cout<<" Patient's Address:           "<<address<<endl<<endl;
        cout<<" Patient's Contact No.:       "<<contact_number<<endl<<endl;
        cout<<" Patient's Disease:           "<<disease<<endl<<endl;
        cout<<" Patient's Blood Group:       "<<blood_group<<endl<<endl;;
        cout<<" Patient's Blood Pressure:    "<<blood_pressure<<endl<<endl;
        cout<<" % of Glucose in Blood        "<<glucose<<endl<<endl;
        cout<<" Patient's Condition:         "<<condition<<endl<<endl;
        cout<<"______________________________________________________________________________"<<endl<<endl;
    }

};
class doctor_details
{
protected:
    string card;
    string derm;
    string neuro;
    string onco;
    string ortho;
    string child;
    string eye;
    string uro;
    string psych;
    string ent;
public:
    void set_card ()
    {
        card = " Dr. Charles Jeffrey\n\n Schedule: 16:00 to 20:00 (Everyday)";
        cout<<card<<endl;
    }
    void set_derm ()
    {
        derm = " Dr. Edward Henry\n\n Schedule: 18:00 to 20:00 (Without Weekend)";
        cout<<derm<<endl;
    }
    void set_neuro ()
    {
        neuro = " Dr. MD. Khalil Abbas\n\n Schedule: 14:00 to 17:00 (Monday, Tuesday, Wednesday)";
        cout<<neuro<<endl;
    }
    void set_onco ()
    {
        onco = " Dr. Ella Paisley\n\n Schedule: 15:00 to 20:00 (Without Weekend)";
        cout<<onco<<endl;
    }
    void set_ortho ()
    {
        ortho = " Dr. Adam Harrison\n\n Schedule: 07:00 to 00:00 (Everyday)";
        cout<<ortho<<endl;
    }
    void set_child ()
    {
        child = " Dr. Rose Lauren\n\n Schedule: 10:00 to 14:00 (Everyday)";
        cout<<child<<endl;
    }
    void set_eye ()
    {
        eye = " Dr. David Arlo\n\n Schedule: 15:00 to 18:00 (Wednesday, Thursday, Friday, Saturday)";
        cout<<eye<<endl;
    }
    void set_uro ()
    {
        uro = " Dr. Nathan Carter\n\n Schedule: 14:00 to 18:00 (Saturday, Sunday, Monday)";
        cout<<uro<<endl;
    }
    void set_psych ()
    {
        psych = " Dr. Alina Hayden\n\n Schedule: 16:00 to 20:00 (Sunday, Monday)";
        cout<<psych<<endl;
    }
    void set_ent ()
    {
        ent = " Dr. Adam Cole\n\n Schedule: 17:00 to 20:00 (Sunday, Monday)";
        cout<<ent<<endl;
    }
};

void specialist()
{
    int x, y;
    doctor_details dd;
    cout<<endl<<endl<<"\tChoose a Specialist"<<endl;
    cout<<"______________________________________________________________________________"<<endl;
    cout<<endl<<" 1 >> Cardiologist"<<endl;
    cout<<" 2 >> Dermatologist"<<endl;
    cout<<" 3 >> Neurologist"<<endl;
    cout<<" 4 >> Oncologist"<<endl;
    cout<<" 5 >> Orthopedics"<<endl;
    cout<<" 6 >> Child Specialist"<<endl;
    cout<<" 7 >> Eye Specialist"<<endl;
    cout<<" 8 >> Urologist"<<endl;
    cout<<" 9 >> Psychiatrist"<<endl;
    cout<<" 10 >> ENT Specialist"<<endl<<endl;
    cout<<"  Choice: ";
    cin>>x;
    cout<<endl<<"______________________________________________________________________________"<<endl;
    cout<<endl<<endl;
    if (x==1)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_card();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_card();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==2)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_derm();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_derm();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==3)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_neuro();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_neuro();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==4)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_onco();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_onco();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==5)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_ortho();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_ortho();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==6)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_child();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_child();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==7)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_eye();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_eye();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==8)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_uro();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_uro();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==9)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_psych();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_psych();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl;
        cout<<endl<<endl;
    }
    else if(x==10)
    {
        cout<<" ---Doctor Found---"<<endl<<endl;
        dd.set_ent();
        cout<<endl;
        cout<<" To Confirm Appointment, Press 1 : ";
        cin>>y;
        if (y==1)
        {
            cout<<endl<<"______________________________________________________________________________"<<endl;
            cout<<endl<<endl<<" You are appointed to: ";
            dd.set_ent();
        }
        cout<<endl<<endl<<"______________________________________________________________________________"<<endl<<endl;
        cout<<endl<<endl;
    }
    else
    {
        cout<<"\t\t\a!!! Invalid Choice !!!"<<endl<<endl<<endl;
        specialist();
    }
}

int main()
{
    int a, b, c, p;
    char ch;
    patient_details pd;
    doctor_details dd;
    cout<<"\t\t\tBy Using This Software, "<<endl;
    cout<<"\t\tYou Can Book an Appointment to a Doctor."<<endl;
    cout<<"\n Open this Software? 'Y/N' : ";
    cin>>ch;
    if(ch == 'Y' || 'y')
    {
        for (;;)
        {
            cout<<endl<<endl<<"\t\t\t\t Welcome to Saint Luke Hospital"<<endl;
            cout<<"______________________________________________________________________________"<<endl<<endl<<endl;
            cout<<endl<<" 1 >> Book an Appointment"<<endl;
            cout<<" 2 >> Edit Patient's Information"<<endl;
            cout<<" 3 >> View Patient's Information"<<endl;
            cout<<" 0 >> Exit";
            cout<<endl<<endl;;
            cout<<"  Choice: ";
            cin>>a;
            cout<<endl;

            if(a==1)
            {
                pd.set_details();
                specialist();

            }
            else if(a==2)
            {
                pd.show_details();
                pd.set_details();
                specialist();
            }
            else if(a==3)
            {
                pd.show_details();
            }
            else if(a==0)
            {
                cout<<endl<<"\t\t\tThank You for Using this Software!"<<endl;
                cout<<"\n\n\n\n\n\n\n\n\n\n\n";
                break;
            }
            else
            {
                cout<<"\n\n\t\t\a!!! Invalid Input !!!"<<endl<<endl<<endl<<endl<<endl;
            }
        }
    }
    else
    {
        cout<<"\n\n\n\n";
        cout<<endl<<"\t\t\tThank You !\n\n\n\n\n\n\n\n\n\n\n"<<endl;
    }
    return 0;
}
