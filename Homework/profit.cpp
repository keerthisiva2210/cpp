#include<iostream>
using namespace std;
int main(){
    int pens_bought=25;
    int cost_of_each_pen=8;
    int selling_price_of_each_pen=11;
    int tot_cost=pens_bought*cost_of_each_pen;
    int tot_selling_price=pens_bought*selling_price_of_each_pen;
    int profit=tot_selling_price-tot_cost;
    cout<<"Profit: "<<profit<<endl;
    return 0;
} 