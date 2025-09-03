#ifndef DISPLAYIMAGE_H
#define DISPLAYIMAGE_H
#include <opencv2/core.hpp>

class DisplayImage {
    public:
        void execute();

    private:
        void save();
        void read();
        void display();
        cv::Mat img;
};
#endif // DISPLAYIMAGE_H