#include<iostream>
using namespace std;
#define max 10

class telephone{
    
        long tel_no[100];
        int key;
        long no;
         public:
         void create();
         void display();
         int find(long x);
         //void delete();
         telephone();
    
        
    };
    
    telephone::telephone(){
        for(int i=0;i<max;i++){
            tel_no[i]=-1;
            
        }
    }
    
    void telephone :: create(){
        int flag=0,count=0;
        cout<<"Enert the number"<<endl;
        cin>>no;
        
        key=no%max;
        
        if(tel_no[key]==-1){
            tel_no[key]=no;
        }
        
        else{
            cout<<"Coliision had occur!!"<<endl;
            for(int i=0;i<max;i++){
                if(tel_no[i]==-1){
                    count++;
                }
            }
            if(count==max){
                cout<<"HAsh Table is full!!!";
               
                
            }
            else{
                for(int i=key+1;i<max;i++){
                    if(tel_no[i]==-1){
                        tel_no[i]=no;
                        flag=1;
                        break;
                    }
                }
                for(int  i=0;i<key;i++){
                    if(tel_no[i]==-1 && flag==0 ){
                        tel_no[i]=no;
                    break;
                        
                    }
                }
            }
            
        }
        
        
    }
    void telephone :: display(){
        for(int i=0;i<max;i++){
            cout<<"\n"<<tel_no[i];
        }
    }
    int  telephone :: find(long x){
         for(int i=0;i<max;i++){
            if(tel_no[i]==x){
                return(1);
                
            }
            else
            {
                return(-1);
            }
        }
        
    }
int main(){
    telephone t;
    int choice;
    int ch;
    long x;
    int s;
    do {
    cout<<"Enter ur choice:-\n1.INSERT\n2Dispaly\n";
    cin>>choice;
    switch(choice){
        case 1:
              t.create();
            break;
        case 2:
              t.display();
              break;
        case 3:
        cout<<"Enter the number to find"<<endl;
        cin>>x;
        s= t.find(x);
        if(s==1){
            cout<<"element found"<<endl;
            }
            else{
                cout<<"Not found"<<endl;
            }
        
    }
    cout<<"Press 1 to continue"<<endl;
    cin>>ch;
   }while(ch==1); 
    return 0;
}    

