#include<iostream>

using namespace std;
double power(double a, int b ){
   
    double y = 1 ;
    for (int i= 0;i<b; i++){
        y = a*y;
       
        }    
   
    return y;
    }

int main(){

    cout<<"addition = 1"<<endl;
    cout<<"subtraction = 2"<<endl;
    cout<<"multiplication = 3"<<endl;
    cout<<"division = 4"<<endl;
    cout<<"trignometric ratio = 5"<<endl;
    cout<<"exponent = 6"<<endl;
    double a,b,c,d ,e ,k,l,x ;
    double f ,z;
    cout <<"enter the oprator no. =" ;
    cin>>c;cout<<endl;
   
   
    if(c==1){
        cout <<"enter the number1 =" ;
        cin>>a;cout<<endl;
        cout <<"enter the number2 =" ;
        cin>>b;cout<<endl;
        cout<<a+b;
    }
    else if(c==2){
        cout <<"enter the number1 =" ;
        cin>>a;cout<<endl;
        cout <<"enter the number2 =" ;
        cin>>b;cout<<endl;
        cout<<a-b;
    }
    else if(c==3){
        cout <<"enter the number1 =" ;
        cin>>a;cout<<endl;
        cout <<"enter the number2 =" ;
        cin>>b;cout<<endl;
        cout<<a*b;
    }
    else if(c==4){
        cout <<"enter the number1 =" ;
        cin>>a;cout<<endl;
        cout <<"enter the number2 =" ;
        cin>>b;cout<<endl;
        cout <<a/b ;
    }
         
    else if (c==5)
    {
        cout<<"for"<<endl;
        cout<<"sin(x) write 1"<<endl;
        cout<<"cos(x) write 2"<<endl;
        cout<<"tan(x) write 3"<<endl;
        cout<<"cosec(x) write 4"<<endl;
        cout<<"sec(x) write 5"<<endl;
        cout<<"cot(x) write6"<<endl;
        cout<<"enter the choice no =";cin>>d;cout<<endl;
        cout<<"if angle is in \n radian =1 \n degree =2\n";
        cin>>x;
        if (x ==1) {
   
        cout<<"enter the angle in radian =";cin>>e;cout<<endl;
        if (d==1){
            cout<<"sin(x) =" ;
            f = power(e,1) - power(e,3)*0.166666666 + power(e,5)*0.00833333 ;
            cout<< f;
        }
        else if (d==2){
            cout<<"cos(x) =" ;
            f = 1 - power(e,2)*0.5 + power(e,4)*0.04166666 - power(e,6)*0.00138888 ;
            cout<< f;  
        }
        else if (d==3){
            cout<<"tan(x) =" ;
            f = e + power(e,3)*0.3333333 + power(e,5)*0.13333333 ;
            cout<< f;  
        }
        else if (d==4){
            cout<<"cosec(x) =" ;
            f = power(e,-1) + power(e,1)*0.1666666 + power(e,3)*0.01944444 ;
            cout<< f;
        }
        else if (d==5){
            cout<<"sec(x) =" ;
            f = 1 + power(e,2)*0.5 + power(e,4)*0.20833333 ;
            cout<< f;
        }
        else if (d==6){
            cout<<"cot(x) =" ;
            f = power(e,-1) - power(e,1)*0.33333333 - power(e,3)*0.02222222 ;
            cout<< f;
        }
        else {
            cout<<"invalid choice";
        }
        }
        else if (x ==2){
        cout<<"enter the angle in degree =";cin>>z;cout<<endl;
          e = 0.0174532925199*z ;
        if (d==1){
            cout<<"sin(x) =" ;
            f = power(e,1) - power(e,3)*0.1666666666 + power(e,5)*0.00833333 ;
            cout<< f;
        }
        else if (d==2){
            cout<<"cos(x) =" ;
            f = 1 - power(e,2)*0.5 + power(e,4)*0.04166666666 - power(e,6)*0.001388888888 ;
            cout<< f;  
        }
        else if (d==3){
            cout<<"tan(x) =" ;
            f = e + power(e,3)*0.33333333 + power(e,5)*0.13333333333 ;
            cout<< f;  
        }
        else if (d==4){
            cout<<"cosec(x) =" ;
            f = power(e,-1) + power(e,1)*0.166666666 + power(e,3)*0.01944444444 ;
            cout<< f;
        }
        else if (d==5){
            cout<<"sec(x) =" ;
            f = 1 + power(e,2)*0.5 + power(e,4)*0.20833333 ;
            cout<< f;
        }
        else if (d==6){
            cout<<"cot(x) =" ;
            f = power(e,-1) - power(e,1)*0.33333333 - power(e,3)*0.022222222 ;
            cout<< f;
        }
        else {
            cout<<"invalid choice";
        }
        }
        }
    else if (c==6){
       
        cout<<"enter the base =";cin>>k;
        cout<<"enter the power =";cin>>l;
        cout<<power(k,l);
        }    
    else {
    cout<<"invalid operator";
    }
   
    return 0;
}
