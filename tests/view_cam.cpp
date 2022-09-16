#include <iostream>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char** argv)
{
    cv::VideoCapture cap{0, cv::CAP_DSHOW};
    cv::Mat img;
    while((cv::waitKey(1) & 0xFF) != (int)'q'){
        cap.read(img);
        cv::imshow("img", img);
    }
    std::cout << "Done!" << std::endl;
};