#include <iostream>
using namespace std;

int main() {
int I,N;
float X,Rata, Total=0;
cout<<"Banyaknya Mahasiswa ? ";cin>>N;
cout<<endl;
for(I=1;I<=N;I++) {
cout << "Nilai Mahasiswa " << I << " : ";cin>>X;
Total=Total + X;
}
Rata = Total/N;
cout<<endl;
cout<<"Banyaknya Mahasiswa : "<<N<<endl;
cout<<"Total Nilai Mahasiswa : "<<Total<<endl;
cout<<"Rata-rata Nilai Mahasiswa: "<<Rata<<endl;
}
