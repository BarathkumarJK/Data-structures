#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class queue{
    int queue1[5];
    int rear,front,public;
    queue(){
        rear = -1;
        front = -1;
    }
    void insert(int x){
        if(rear > 4){
            cout<<"queue over flow";
            front = rear = -1;
            return;
        }
        queue1[++rear]=x;
        cout<<"inserted"<<x;
    }
    void delete(){
        if(front==rear){
            cout<<"deleted"<<queue1[++front];
        }
    void display(){
        if(rear==front){
            cout<<"queue empty";
            return;
        }
        for(int i=front+1;i<=rear;i++)
        cout<<queue1[i]<<" ";
    }
};
int main(){
    int ch;
    queue qu;
    while(1){
        cout<<"\n1.insert 2.delete 3.diplay 4.exit\n Enter your choice";
        cin>>ch;
        switch(ch){
            case 1:cout<<"enter the element";
            cin>>ch;
            qu.insert(ch);
            break;

            case 2:qu.delete();
            break;

            case 3:qu.diplay();
            break;

            case 4: exit(0);
        }
    }
    return 0;
}