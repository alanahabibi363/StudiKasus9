#include "../base.h"
using namespace std;

// string data_A[100];
string data_A[100]={"A","1900018018","Andri Pengestu"," ","1900018029", "Sadajiwa Kuncoro"," ", "2000018011", "Sasa Nur Safitri", " ","2000018023", "Karin Ayu"," ", "2000018030", "Dika Saputra","B","1900018001","Sandika aji"," ","2000018045", "Putri Larasati"," ", "2000018046", "Najib Nur Kholisa", " ","2000018048", "Ayu Dewi Kencana"," ", "2000018050", "Kirana Sekar","C","1900018033","Sadewa Jatmiko"," ","1900018101", "Cipta Dewandaru"," ", "1900018150", "Endra Iswaman", " ","2000018056", "Laksana Lingga"," ", "2000018060", "Mada Nismara"};
string hasil[20][20];
// string data_B[40]={"B","1900018001","Sandika aji"," ","2000018045", "Putri Larasati"," ", "2000018046", "Najib Nur Kholisa", " ","2000018048", "Ayu Dewi Kencana"," ", "2000018050", "Kirana Sekar"};
// string data_C[40]={"C","1900018033","Sadewa Jatmiko"," ","1900018101", "Cipta Dewandaru"," ", "1900018150", "Endra Iswaman", " ","2000018056", "Laksana Lingga"," ", "2000018060", "Mada Nismara"};


// void tabel::input(){
//   for(int i = 0; i<45; i++){
//   data_A[100]={"A","1900018018","Andri Pengestu"," ","1900018029", "Sadajiwa Kuncoro"," ", "2000018011", "Sasa Nur Safitri", " ","2000018023", "Karin Ayu"," ", "2000018030", "Dika Saputra","B","1900018001","Sandika aji"," ","2000018045", "Putri Larasati"," ", "2000018046", "Najib Nur Kholisa", " ","2000018048", "Ayu Dewi Kencana"," ", "2000018050", "Kirana Sekar","C","1900018033","Sadewa Jatmiko"," ","1900018101", "Cipta Dewandaru"," ", "1900018150", "Endra Iswaman", " ","2000018056", "Laksana Lingga"," ", "2000018060", "Mada Nismara"};
//     }

//   }

void tabel::output(){
int i,j,x=0;  
  
  for(int i = 0; i<45; i++){
    cout<<data_A[i]<<" ";
    }
  cout<<endl;
  cout<<"=========================================================================\n";
  cout<<"|Kelas\t\tNIM\t\t\t\tNama\t\t\t\t\t|\n";
  for(int k = 0; k<15; k++){
    for(int l = 0; l<3; l++){
    hasil[k][l]=data_A[x];
   x++;
      }
    
    }
   
  for(int k = 0; k<15; k++){
    for(int l = 0; l<3; l++){
    cout<<" "<<hasil[k][l];
    cout<<"      ";
      }
   cout<<endl; }cout<<"=========================================================================\n";

  }
int main(){
  tabel smt;
  // smt.input();
  smt.output();
  return 0;
}