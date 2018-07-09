//Mohamad Alrifqi
//20170801057

//Preprosesor
#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
//fungsi main program
int main()
{
 //deklarasi variabel
 int Arrdata[20],index[20],n,i,j,k;
 //proses penginputan data
 cout<<"Masukkan jumlah data [Max 20] : ";
 cin>>n;
 for(i=0;i<n;i++)
 {
      cout<<"Masukkan Data ke - "<<(i+1)<<" : ";
      cin>>Arrdata[i];
 }
 //memasukkan data yang akan dicari ke dalam K
 cout<<"Masukkan data yang anda akan cari : ";
 cin>>k;
 //proses pencarian data
 j=0;
 for (i=0;i<n;i++)
 {
  if(Arrdata[i]==k)
  {
   index[j]=i;
   j++;
  }
 }
 //jika data ditemukan dalam array
 if (j>0)
 {
  cout<<"Data "  <<k<<  " yang dicari ada "  <<j<<  " buah"<<endl;
  cout<<"Data tersebut terdapat dalam index ke : ";
    for(i=0;i<j;i++)
  {
         cout<<index[i]<<" ";
  }
  cout<<endl;
 }
 //jika tidak ditemukan
 else
 {
      cout<<"Data tidak ditemukan dalam array"<<endl;;
 }
 getch();
}


