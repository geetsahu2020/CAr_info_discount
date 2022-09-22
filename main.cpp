#include <iostream>
#include <sstream>
using namespace std;
class car{
    private:
    int price, year,discount,topaid;
    string brand, model;
    public:
   
    int get_price(){return price;}
    int get_year(){return year;}
    string get_brand(){return brand;}
    string get_model(){return model;}
    void set_price(int p){price= p;}
    void set_year(int y){year= y;}
    void set_brand(string bn){brand = bn;}
    void set_model(string md){model= md;}
    string to_string(){
        stringstream ss;
        ss << "(" << brand << ", " << model<< ", " << year << ", " << price << ")";
       
        return ss.str();
   
    }
};
int main() {
    car info;

    int price, year,discount,topaid;
    string brand, model;

    
    cout<<"Enter brand model year and price";
    cin >> brand >> model >> year >> price;
    info.set_price(price);
    info.set_year(year);
    info.set_brand(brand);
    info.set_model(model);
    cout << info.get_brand() << endl;
    cout << info.get_model() << endl;
    cout << info.get_year() << endl;
    cout << info.get_price() << endl;
    cout << endl << info.to_string();

     if(price<=2000000)
   {
      cout<<"\nSorry! No discount for shopping under 2Lac";
      cout<<"You've to Pay "<<price;
   }
   else
   {
      if(price>2000000 && price<=3000000)
      {
         cout<<"\nCongrats! You'll get 5% discount on total Shopping amount";
         discount = (price*5)/100;
         topaid = price-discount;
      }
      else if(price>3000000 && price<=50000000)
      {
         cout<<"\nCongrats! You'll get 10% discount on total Shopping amount";
         discount = (price*10)/100;
         topaid = price-discount;
      }
      else if(price>5000000 && price<=10000000)
      {
         cout<<"\nCongrats! You'll get 20% discount on total Shopping amount";
         discount = (price*20)/100;
         topaid = price-discount;
      }
      else
      {
         cout<<"\nCongrats! You'll get maximum (25%) discount on total Shopping amount";
         discount = (price*25)/100;
         topaid = price-discount;
      }
      cout<<"\nYou've to Pay Only "<<topaid;
  
   cout<<endl;
   return 0;
}
}