#include "illini.h"
#include "image.h"
Illini::Illini(string filename,int color1,int color2):Image()
{
    readFromFile(filename);
    for(unsigned x = 0; x < width() ; x++)
      for(unsigned y = 0; y < height(); y++)
      {
         //reference on the pixel
         HSLAPixel &P = getPixel(x, y);
         //modifiy the element of P
if(P.h>11 && P.h<318)
{
int distance1=abs(P.h-color1);
int distance2=abs(P.h-color2);
if(distance1<distance2)
    P.h=color1;
else P.h=color2;
}
else
    P.h=color1;
      }
}
//{
//    readFromFile(filename);
//for(unsigned x=0 ;x<width();x++)
//    for(unsigned y=0 ;y<height();y++){

//             HSLAPixel &P=getPixel(x,y);
//    int distance1=abs(P.h-color1);
//        int distance2=abs(P.h-color2);
//P.h= (distance1<distance2)? P.h=color1:P.h=color2;



//}


//}

