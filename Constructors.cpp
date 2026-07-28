# include<iostream>
using namespace std;
static int counting;
class Vehicle
{
   private:
   int vin;
  
   public:
    
   int saleprice;
   Vehicle(int num)
   {
    vin=num;
   }
   ~Vehicle()
   {
    cout<<"Vehicle object is destroyed"<<endl;
   }
};
int main()
{
Vehicle veh(5878);
veh.saleprice=10;
cout<<veh.saleprice<<endl;
cout<<counting<<endl;
}