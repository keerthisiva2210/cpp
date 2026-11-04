#include<iostream>
using namespace std;
int main(){
    int notebooks_bought=40;
    int cost_of_each_notebook=18;
    int selling_price_of_each_notebook=25;
    int tot_cost=notebooks_bought*cost_of_each_notebook;
    int tot_selling_price=notebooks_bought*selling_price_of_each_notebook;
    int profit=tot_selling_price-tot_cost;
    cout<<"Profit: "<<profit<<endl;
    return 0;
} 