#ifndef ILLINI_H
#define ILLINI_H
#include "image.h"
class Illini: public Image
{
public:
    using Image::Image;
    using PNG::writeToFile;
//    int color1=11;
//    int color2=216;
     //METHODE
     Illini(string filename,int color1=11,int color2=216);
//void saturate();
};

#endif // ILLINI_H
