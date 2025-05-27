//
//
#include <iostream>
using namespace std;


void quick(int arr[], int kiri, int kanan){

    int a = kiri, b = kanan;
    int temp;
    int tengah = arr[((kiri+kanan) /2)];
            while (a<b) {
            while ( arr[a] < tengah)
                        a++;
            while(arr[b] > tengah)
                        b--;


            if(a <= b)
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
                a++;
                b--;
            }
            
            }
            if(kiri < b)
            {
                quick(arr, kiri, b);
            }
            if(a < kanan)
            {
                quick(arr,a,kanan);
            }
            
}
    int main(){
        
        cout<<"Nama : Maftuh Siroj Hamdani"<<endl;
        cout<<"NIM : 2412050"<<endl;

    int n, data[100];

    cout<<"Masukkan Banyak Angka :";
    cin>>n;

    int i;
        for(int i=0; i<n; i++)
                {
                    cout<<"Masukkan Angka ke-"<<(i+1)<<" : ";
                        cin>>data[i];
                }

            cout<<"Data Sebelum diurutkan :";
                for (int i=0; i<n; i++)
                {
                    cout<<data[i]<<" ";
                }

    quick(data,0,(n-1));
    cout<<endl;
    cout<<"Hasil Pengurutan :";
    //int i;
        for (int i=0; i<n; i++)
        {
            cout<<data[i]<<" ";
        }

}