 // Gin Sang
// Dr. T

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Input_Validation_Extended.h" 
using namespace std;

// Function Prototypes
void acceleration();
void motion();
void Menu ();
void force();
void weight();
void momentum();
void velocity();



void Menu()
{
  int choice;
  do
  {
    cout << "Choose What To Calculate:\n0. Acceleration\n1. Equations Of Motion\n2. Newton's 2nd Law(Force)\n3. Weight(Earth)\n4. Momentum\n5. Velocity\n6. Exit\n";
    choice = validateInt(choice);//cin >> choice;
    switch(choice)
      {
    case 0:
    acceleration();
    break;
        case 1: 


        motion();
        break;

        case 2:
       force();
         /* {double mass2;
          double acceleration2;
          double force2;
        cout << "We will be using Newton's 2nd law to calculate force. What is the mass in kg?:";
        mass2 = validateDouble(mass2);//cin >> mass2;
        cout << "\nWhat is the acceleration in m/s^2?:";
        acceleration2 = validateDouble(acceleration2);//cin >> acceleration2;
        force2 = mass2 * acceleration2;
    cout << "The calculated force (kg m/s^2) is: " << force2 << endl;} */
        break;
  
        case 3:
         weight();
      /* double mass3;
          double gfs3; 
          double Weight3 ;
        cout << "We will be calculating weight(earth). what is the mass in kg?:";
        mass3 = validateDouble(mass3); //cin >> mass3;
        cout << "\nWhat is the gravitational field strength on earth in N/kg?:";
        gfs3 = validateDouble(gfs3);//cin >> gfs3;
        Weight3 = mass3 * gfs3;
        cout << "The calculated weight in newtons is: " << Weight3 << endl;*/
        break;

        case 4:
          momentum();
       /* double mass4;
        double velocity4;
        double momentum4;
        cout << "We will be calculating momentum. What is the mass in kg?:";
        mass4 = validateDouble (mass4); //cin >> mass4;
        cout << "\nWhat is the velocity in m/s?:";
        velocity4 = validateDouble(velocity4);//cin >> velocity4;
        momentum4 = mass4 * velocity4;
        cout << "The calculated momentum is: " << momentum4 << endl; */
        break;

        case 5:
        velocity();
        /*double displacement5;
        double time5;
        double velocity5;
        cout << "We will be calculating the velocity. What is the displacement in m?:";
        displacement5 = validateDouble(displacement5);//cin >> displacement5;
        cout << "\nWhat is the time in s?:";
        time5 = validateDouble(time5);//cin >> time5;
        velocity5 = displacement5/time5;
        cout << "The calculated velocity is:" << velocity5 << endl;*/
        break;

        case 6:
        cout << "Ok bye\n";
        break;
        
        
        
        
    
        }
    
    
    
    
    } while (choice != 6);
    }




int main ()
{
  Menu();
  return 0;
}




// function definitions

void velocity()
{
double displacement5;
        double time5;
        double velocity5;
        cout << "We will be calculating the velocity. What is the displacement in m?:";
        displacement5 = validateDouble(displacement5);//cin >> displacement5;
        cout << "\nWhat is the time in s?:";
        time5 = validateDouble(time5);//cin >> time5;
        velocity5 = displacement5/time5;
        cout << "The calculated velocity is:" << velocity5 << endl;
}




void momentum()
{
   double mass4;
        double velocity4;
        double momentum4;
        cout << "We will be calculating momentum. What is the mass in kg?:";
        mass4 = validateDouble (mass4); //cin >> mass4;
        cout << "\nWhat is the velocity in m/s?:";
        velocity4 = validateDouble(velocity4);//cin >> velocity4;
        momentum4 = mass4 * velocity4;
        cout << "The calculated momentum is: " << momentum4 << endl;
}



void weight()
{
  double mass3;
          double gfs3; 
          double Weight3 ;
        cout << "We will be calculating weight(earth). what is the mass in kg?:";
        mass3 = validateDouble(mass3); //cin >> mass3;
        cout << "\nWhat is the gravitational field strength on earth in N/kg?:";
        gfs3 = validateDouble(gfs3);//cin >> gfs3;
        Weight3 = mass3 * gfs3;
        cout << "The calculated weight in newtons is: " << Weight3 << endl;
}



void acceleration()
{
  double velocity0;
      double time0;
      double acceleration0;
    cout << "We will be calculating the acceleration. What is the change in velocity(m/s)?:"; 
   velocity0 = validateDouble(velocity0); //cin >> velocity0;
    cout << "\nWhat is the change in time(s)?: ";
    time0 = validateDouble(time0);//cin >> time0;
    acceleration0 = velocity0/time0;
    cout << "The acceleration(m/s^2) is: " << acceleration0 << endl;}




void force ()
{
  {double mass2;
          double acceleration2;
          double force2;
        cout << "We will be using Newton's 2nd law to calculate force. What is the mass in kg?:";
        mass2 = validateDouble(mass2);//cin >> mass2;
        cout << "\nWhat is the acceleration in m/s^2?:";
        acceleration2 = validateDouble(acceleration2);//cin >> acceleration2;
        force2 = mass2 * acceleration2;
    cout << "The calculated force (kg m/s^2) is: " << force2 << endl;}
}




void motion (){
  int choice;
  do 
  {
    cout << "0. Solve for v\n1. Solve for s\n2. Solve for v^2\n3. Solve for v_bar.\n4. Exit" << endl;
    choice = validateInt(choice);//cin >> choice;
    switch (choice)
      {
        case 0:
          double v0;
          double a;
          double t;
          double v;
          cout << "Let's solve for v. What is v0(m/s)?:";
        v0 = validateDouble(v0);//cin >> v0;
        cout << "What is the a(m/s^2)?:";
        a = validateDouble(a);//cin >> a;
          cout << "What is the t(s)?:";
          t = validateDouble(t);//cin >> t;
        v = v0 + a*t;
        cout << "The calculated v is: " << v0 << endl;
        break;
        case 1: 
       double s01;
          double v01;
          double t1;
          double a1;
          double s1;
        cout << "Let's solve for s. What is s0?:";
        s01 = validateDouble(s01);//cin >> s01;
        cout << "What is the v0(m/s)?:";
        v01 = validateDouble(v01);//cin >> v01;
        cout << "What is the t(s)?:";
       t1 = validateDouble(t1); //cin >> t1;
        cout << "What is the a(m/s^2)?:";
        a1 = validateDouble(a1);//cin >> a1;
        s1 = s01 + v01 * t + 0.5*a1*pow(t1,2);
        cout << "s(m) is: " << s1 << endl; 
        break;
        case 2:
        double v_squared;
        double v02;
        double a2;
        double s2;
        double s02;
        cout << "Let's solve for v^2.What is the v0(m/s)?:";
        v02 = validateDouble(v02);//cin >> v02;
        cout << "What is the a(m/s^2)?:";
        a2 = validateDouble(a2);//cin >> a2;
        cout << "What is the s(m)?:";
        s2 = validateDouble(s2);//cin >> s2;
        cout << "What is the s0(m)?:";
        s02 = validateDouble(s02);//cin >> s02;
        v_squared = pow(v02,2)+ 2 * a2 * (s2-s02);
        cout << "The calculation for v^2 is:" << v_squared << endl;
        break;
        case 3:
        double v_bar;
        double v3;
        double v03;
      cout << "Let's solve for v_bar. What is the v(m/s)?:";
        v3 = validateDouble(v3);//cin >> v3;
        cout << "What is the v0(m/s)?:";
        v03 = validateDouble(v03);//cin >> v03;
        v_bar = 0.5 * (v3 + v03);
        cout << "v_bar is: " << v_bar << endl;
        break;
        case 4:
        cout << "Returning back to Main Menu";
        break;
         
      } 
  }while (choice !=4);
}
