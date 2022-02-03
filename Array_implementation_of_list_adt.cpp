#include<bits/stdc++.h>
void create();
void insert();
void deletion();
void search();
void display();

int a,b[20],n,d,e,f,i; 

int main(){
    int c;
    char g='y';
    do{
        cout<<"\n Main Menu";
        cout<<"\n 1.Create \n 2.Delete \n 3.Search \n 4.insert \n 5.Display \n 6.Exit";
        cout<<"\n Enter your choice\n";
        switch(c)
        {
            case 1: create();   break;
            case 2: deletion(); break;
            case 3: search();   break;
            case 4: insert();   break;
            case 5: display();  break;
            case 6: exit(0);    break;
            default:
            cout<<"The given number is not between 1-5\n"
        }
        cout<<"\nDo You wannt to continue \n";
        cin>>g;
        clrscr();
    }
    while(g=='y'||g=='Y');
    getch();
}
void create(){
    cout<<"\n Enter the number \n";
    cin>>n;
    for( i=0; i<n; i++){
        cin>>b[i];
    }
}
void deletion()
{
    cout<<"Enter the limit you want to delete \n";
    cin>>d;
    for( i=0; i<n; i++){
        if(b[i]==d){
            b[i]=0;
        }
    }
}
void search(){
    cout<<"Enter the limit \n";
    cin>>e;
    for( i=0; i<n; i++){
        if(b[i]==e){
            cout<<"Value found the position\n"<<b[i];
        }
    }
}

void insert(){
    cout<<"Enter how many number you want to insert \n";
    cin>>f;
    for( i=0; i<f; i++){
        cin>>b[n++];
    }
}

void display(){
    cout<<"\n\n\n";
    for( i=0; i<n; i++){
        cout<<"\n\n\n"<<b[i];
    }
}