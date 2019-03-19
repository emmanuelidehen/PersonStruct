//
//  main.cpp
//  Person structure
//
//  Created by Emmanuel Idehen on 2/21/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  Submitted to Mr. Marcus Golden(CS2014 Computer programming II)
//  Due Feb. 22nd, 2019.
/*
 * Write a program that creates an array of a Person of size 5. Populate the array of object with information given
 * by the user input according to the following specifications:
 * Populate only 3 positions of the array of person object, populate only 2 positions of the family members names array
 * for each object, and ouput only the contents of the person object that contains user inputted information
 *
 * Create a structure person that has this members: full name, age, family member full names represented by an array
 * of size (10)
 */

/*
 Psuedo code:
 structure person : (full_name, age, family_full_name[size(10)])
 make size equal const int (5)
 first create an array of person putting size into it
 Ask the user for some input and store the input into the array!
 fill only three positions of five positions of the array using a loop(size-2)
 fill only two position of the family member array.(arraysize - 8)
 output only the content of the person oblect that contains user inputted information.
 
 
 
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct person
{//person structure
    string name;
    int age;
    vector <string>familymember;//using a family member vector
};
int main()
{
    const int size = 5;
    person array[size];//array of size
    string x;
    for (int i = 0; i<size; i++)//first set all values to default
    {
        
        array[i].name= " ";
        array[i].age = 0;
    }
    for( int i=0;i<(size-2);i++) //fill only the first three positions of the array
    {
        //take name
        cout<<"Enter your name: ";
        cin>>array[i].name;
        cout<<"How old are you: ";
        cin>>array[i].age;
        cout<<"Enter the names of 2 family members:\n";
        const int temp = 10;
        for(int j=0;j<(temp-8);j++)// take only two member of the family !
        {
            cin>>x;
            array[i].familymember.push_back(x);
            
        }
        cout <<"\n"<<endl;
    }
    //Loop to display 3 positions!
    for( int i=0;i<3;i++)
    {
        cout<<array[i].name<<" ";
        cout<<array[i].age<<" ";
        for(int j=0;j<2;j++)//adding two family members
        {
            cout<<array[i].familymember[j]<<", ";
        }
        cout<<endl;
    }
    return 0;
}
/*
 Only one test case needed!
 Test case(1):
 
 Enter your name: Emmanuel_osas
 How old are you: 23
 Enter the names of 2 family members:
 peter
 Precious
 
 
 Enter your name: John
 How old are you: 89
 Enter the names of 2 family members:
 Francis
 Kall
 
 
 Enter your name: Mr_P
 How old are you: 45
 Enter the names of 2 family members:
 Paul
 Suzzi
 
 
 Emmanuel_osas 23 peter, Precious,
 John 89 Francis, Kall,
 Mr_P 45 Paul, Suzzi,
 Program ended with exit code: 0
 
 */

/*
 Test program :
 
 
 
 
 #include <iostream>
 
 using namespace std;
 
 struct Person
 {
 int age=0;
 string full_name=" ";
 string family_full_name[10];
 };
 
 int main()
 {
 
 string x=" ",y= " ", z=" ", v=" ", f=" ";
 int m = 0, n=0,p=0;
 const int size = 5;
 Person array[size];
 for (int i = 0; i<size; i++)
 {
 array[i].full_name = " ";
 array[i].age=0;
 }
 for (int i =0; i<(size-2); i++)
 {
 cout << "\nEnter your name"<<endl;
 cin >>array[i].full_name;
 cout << "Enter your age"<<endl;
 cin >>array[i].age;
 for (int j = 0; j < 2; j++)
 {
 cout << "\nEnter the name of two famile members"<<endl;
 cin >> array[i].family_full_name[j];
 v = array[i].family_full_name[0];
 f = array[i].family_full_name[1];
 }
 
 x = array[0].full_name;
 y = array[1].full_name;
 z = array[2].full_name;
 m = array[0].age;
 n = array[1].age;
 p = array[2].age;
 
 }
 
 cout << "\n"<< x <<endl;
 cout << "\n"<<  m <<endl;
 cout << "\n"<<  y <<endl;
 cout << "\n"<<  v <<endl;
 cout << "\n"<<  f <<endl;
 cout << "\n"<<  n <<endl;
 cout << "\n"<<  z <<endl;
 cout << "\n"<<  p <<endl;
 
 
 
 
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 */
