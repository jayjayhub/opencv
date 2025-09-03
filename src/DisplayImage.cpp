#include "DisplayImage.h"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

void DisplayImage::execute()
{
    read();
    display();
}

void DisplayImage::read()
{
    std::string image_path = samples::findFile("starry_night.jpg");
    img = cv::imread(image_path, IMREAD_COLOR);
    if(img.empty()) {
        std::cerr << "Could not read the image: " << image_path << std::endl;
    }
}

void DisplayImage::display()
{
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    if (k == 's')
    {
        save();
    }
}

void DisplayImage::save()
{
    imwrite("starry_night.png", img);
}