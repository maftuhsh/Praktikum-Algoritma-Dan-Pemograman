#include <iostream>
using namespace std;
int main(){
    
int usia;
cout<<"NAMA : Maftuh Siroj Hamdani"<<endl;
cout<<"NIM : 2412050"<<endl;
cout<<"Berapa usia anda : ";
cin>>usia;
if(usia<17)
{
 cout<<"Anda masih anak -anak"<<endl;
}
else if((usia>17)&&(usia<40))
{
 cout<<"Anda masih remaja atau sudah dewasa "<<endl;
}
else
{
 cout<<"Anda sudah tua"<<endl;
}
return 0;
}