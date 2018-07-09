
//Program Antrian (Queue & Dequeue)
#include <iostream>
#include <conio.h>

using namespace std;

struct queue{
int data[4];
int head;
int tail;
};

queue Q;

void inisialisasi()
{Q.head = Q.tail = -1;}

int IsEmpty()
{
if (Q.tail == -1)
    {return 1;}
else
    {return 0;}
   }

int IsFull()
{
if (Q.tail == 3)
    {return 1;}
else
    {return 0;}
}

void Enqueue(int nilai)
{if (IsEmpty()==1)
    {Q.head = Q.tail =0;
   Q.data [Q.tail] = nilai;
   cout<<"Data Pertama berhasil ditambahkan";}
else if (IsFull()==1)
    {cout<<"Queue Penuh";}
else
    {Q.tail ++;
   Q.data [Q.tail] = nilai;
   cout<<"Data berhasil";}
   }

void Dequeue()
{if (IsEmpty()==1)
    {cout<<"Kosong";}
else
    {for(int i=Q.head;i<Q.tail;i++)
      {Q.data[i]=Q.data[i+1];}
       Q.tail --;
      cout<<"Data Pertama dihapus";}}

void Print ()
{if (IsEmpty()==1)
    {cout<<"Queue Kosong";}
else
{for(int i=Q.head;i<=Q.tail;i++)
    {cout<<Q.data[i]<<" | ";}
   int i;
   int total=Q.data[i] + Q.data[i+1]+ Q.data[i+2]+Q.data[i+3]+Q.data[i+4];
   cout<<"Total Data : "<<total<<endl;
   int rata2=total/(Q.tail+1);
   cout<<"Rata2 : "<<rata2<<endl;
   }
   }


   main()
   {
       int pilihan, data;
      inisialisasi();
      do{
      system("cls");
      cout<<"1. Enqueue"<<endl;
      cout<<"2. Dequeue"<<endl;
      cout<<"3. Tampil, Hitung Total dan nilai rata2"<<endl;
      cout<<endl;
      cout<<"Pilihan Data : ";
      cin>>pilihan;
      system("cls");

   switch(pilihan)
   {
       case 1:
      {cout<<"Masukkan data: ";
      cin>>data;
      Enqueue(data);
      getch();
      break;
      }

      case 2:
      {Dequeue();
      getch();
      break;}

      case 3:
      {Print();
      getch();
      break;}

   default:
   {cout<<"Tidak ada dalam pilihan"<<endl;
   getch();}}
   }while(pilihan >=1 && pilihan <=3);
   getch();
   }
