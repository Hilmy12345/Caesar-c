#include<iostream>
#include<string.h>
using namespace std;
void proses(char *e,int *f);
int main(){ 
int key,a,*d; char ps[50],*c;
    cout << "masukan pesan(tanpa spasi): ";cin>>ps;
    cout<<"masukan key(angka): ";cin>>key;
    a=strlen(ps);c=ps;d=&key;
    proses(c,d);
    return 0;  
}
void proses(char *e,int *f){ 
int g,i,a; char b;g=*f;i=0;
    while(i<50 && e[i] !='\0'){
    b=e[i];
    if (b>= 'a' && b <= 'z'){
            b=b+g;
            if (b > 'z') {
               b= b - 'z' + 'a' - 1;
            }  
            e[i] = b;
         }else if(b >= 'A' && b <= 'Z'){
            b =b+g;
            if(b > 'Z'){
               b = b - 'Z' + 'A' - 1;
            }
            e[i] = b;
         }i++;
    }cout<<"enskripsi: "<<e;i=0;
    while(i<50 && e[i] !='\0'){
    b=e[i];
    if (b>= 'a' && b <= 'z'){
            b=b-g;
            if (b < 'a') {
               b= b+'z'-'a'+1;
            }  
            e[i] = b;
         }else if(b >= 'A' && b <= 'Z'){
            b =b-g;
            if(b < 'A'){
               b = b +'Z'-'A'+1;
            }
            e[i] = b;
         }i++;
    }cout<<"\ndeskripsi: "<<e;
    
}
