#ifndef GRAYSCALE_H
#define GRAYSCALE_H
#include "Image.h"

class Grayscale : public Image
    {
public:
   using Image::Image;
    using PNG::writeToFile;

    //METHODE
    Grayscale(string filename);
//    void saturate();
};

#endif // GRAYSCALE_H
