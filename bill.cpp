#include <iostream>
using namespace std;

int main(){


float pencil;
float pen;
float eraser;
float costpencil;
float costpen;
float costeraser;
float gstprice1;
float gstprice2;
float gstprice3;
float gst=0.18;
float bill;

cout<<"Enter number of pencils: ";
cin>> pencil;
cout<<"Enter cost of 1 pencil: ";
cin>>costpencil;
cout<<"Enter number of pens: ";
cin>> pen;
cout<<"Enter cost of 1 pen: ";
cin>>costpen;
cout<<"Enter number of Erasers: ";
cin>>eraser;
cout<<"Enter cost of 1 eraser: ";
cin>>costeraser;

gstprice1= pencil*costpencil +(pencil*costpencil*gst);
gstprice2= pen*costpen + (pen*costpen*gst);
gstprice3= eraser*costeraser + (eraser*costeraser*gst);

bill=gstprice1+gstprice2+gstprice3;

cout<<"Your final bill for all the items is READY! \n(incl. 18% gst tax) \nBILL TOTAL = "<<bill<<"Rs/- only";
return 0;
}