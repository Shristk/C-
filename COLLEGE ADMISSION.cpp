/*a program to let people know there eligibility according to their marks scored in the entrance examination 
and also with the help of thier 12 the marks */

#include<iostream>
using namespace std;
#include<string>
int main()
{
    string marks1;//marks of entrance exam
    string dec2;//decision of taking admission in entrance in engineering`
    cout<<"enter the entrance examination u have attempted"<<endl;
    cin>>marks1;

    if(marks1=="jee"||marks1=="cgpet")
    {
        cout<<"u are eligible to take admission in an engineering college\n";
    
    


    cout<<"do you want to take admission in engineering college or not \n";
    cin>>dec2;
    if(dec2=="no")
    {
        cout<<"thank you for your precious time";
    }
    if(dec2=="yes")
    {
    int n1;//12th marks
    int n2;//entrance exam marks
    cout<<"enter your marks secured in 12th standard\n";
    cin>>n1;
    cout<<"enter the marks scored in the entrance examination\n";
    cin>>n2;
    if(n1<60)
    {
        cout<<"u are not eligible for admission(your 12 marks is not sufficient)\n";
    }
    if(n1>60 && n2>95)
    {
        cout<<"u are eligible for compute science branch\n";
    }
    else if(n1>60&&n2>85)
    {
        cout<<"u are eligible for admission in IT and computer science branch\n";
    }
    else if (n1>60&&n2>80)
    {
        cout<<"u are eligible for all computer branches and electrical branch\n";
    }
    else if(n1>60&&n2>70)
    {
        cout<<"u are eleigible for all computer branches and electrical and civil branch\n";
    }
    else if(n1>60&&n2>60)
    {
        cout<<"u are eligible for all computer branches and electrical and civil as well as agriculture branch\n ";
    }
    else
    {
        cout<<"aapka zindagi mein kuch ni ho skta hai \n";
    }
    }
    }
    else if(marks1!="jee"||marks1!="cgpet")
    {
        cout<<"select a valid enrtrance examination";
    }




return 0;
}