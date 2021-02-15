#include<iostream>
using namespace std;

main()  
{
        int choice;
        system("COLOR B");
        cout<<"\t\t\t***********************************************************************\n\n";
        cout<<"\t\t\t       		 STUDENT-FACULTY MANAGEMENT SYSTEM                  \n\n";
        cout<<"\t\t\t                      Welcome to login page                               \n\n";
        cout<<"\t\t\t*******************        MENU        *******************************\n\n";
        cout<<"\t\t\t1.LOGIN"<<endl;
        cout<<"\t\t\t2.REGISTER"<<endl;
        cout<<"\t\t\t3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"\t\t\t4.Exit"<<endl;
        cout<<"\n\t\t\tEnter your choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        //login();
                        break;
                case 2:
                	
                        //registr();
                      
                        break;
                case 3:
                        //forgot();
                        break;
                case 4:

                        cout<<"THANKS..!!\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
        
}

