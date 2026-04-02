#ifndef DETECTOR_HPP
#define DETECTOR_HPP

#include <opencv2/opencv.hpp>

class ObjectDetector {
public:
    ObjectDetector(const std::string& modelPath);
    void detect(const cv::Mat& frame, std::vector<cv::Rect>& detections);
private:
    cv::dnn::Net net;
};

#endif // DETECTOR_HPP
