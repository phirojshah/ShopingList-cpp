//Shoping list
#include<iostream>
using namespace std;
const int m=50;
class Items{
    private:
    int itemCode[m];
    float itemPrice[m];
    int count;

    public:
    void readItem();
    void sumPrice();
    void displayItem();
    void removeItem();
    void CNT(){count=0;}
};
void Items::readItem(){
    cout<<"Enter ItemCode: "<<endl;
    cin>>itemCode[count];
    cout<<"Enter price of the items: "<<endl;
    cin>>itemPrice[count];
    count++;
    

}
void Items::sumPrice(){
    float sum=0;
    for(int i=0;i<count;i++){
        sum+=itemPrice[i];
    }
    cout<<"Total price: "<<sum<<endl;

}
void Items::removeItem(){
    int a;
    cout<<"Enter the code: ";
    cin>>a;
    for(int i=0;i<count;i++){
        if(itemCode[i]==a)
        itemCode[i]=0;
    }
}

void Items::displayItem(){
    cout<<"\nCode  Price\n";
    for(int i=0;i<count;i++){
        cout<<"\n "<<itemCode[i];
        cout<<" "<<itemPrice[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    Items order;
    order.CNT();
    int y;
    
    do{
        cout<<"Enter the appropirate decision: "<<endl;
        cout<<"1.Add an item: "<<endl;
        cout<<"2.Dispaly total value: "<<endl;
        cout<<"3.Delete an item: "<<endl;
        cout<<"4.Display all items: "<<endl;
        cout<<"5.quit"<<endl;
        cout<<"What's your opton ?"<<endl;
        cin>>y;

        switch (y)
        {
        case 1: order.readItem();
            break;
        case 2:order.sumPrice();break;
        case 3:order.removeItem();break;
        case 4:order.displayItem();break;
        case 5:break;
        default:
            cout<<"Error Input";
        }
        
    }while ((y!=5));
    
    return 0;
    

}