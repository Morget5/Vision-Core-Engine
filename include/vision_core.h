#ifndef VISION_CORE_H
#define VISION_CORE_H

#include <opencv2/opencv.hpp>

namespace VisionCore {
    class Engine {
    public:
        virtual void initialize() = 0;
        virtual void process(cv::Mat& input) = 0;
    };
}

#endif
