//
// Created by Jose Honorato on 10/12/15.
//

#include "native_processing.h"

using namespace std;
using namespace cv;

extern "C" {
JNIEXPORT void JNICALL Java_org_honorato_opencvsample_MainActivity_FindFeatures(JNIEnv*, jobject, jlong addrGray, jlong addrRgba) {
    Mat& mGr  = *(Mat*)addrGray;
    Mat& mRgb = *(Mat*)addrRgba;
    vector<KeyPoint> v;

    Ptr<FeatureDetector> detector = FastFeatureDetector::create(50);
    detector->detect(mGr, v);
    for (unsigned int i = 0; i < v.size(); i++) {
        const KeyPoint& kp = v[i];
        circle(mRgb, Point(kp.pt.x, kp.pt.y), 10, Scalar(255,0,0,255));
    }
}

JNIEXPORT void JNICALL Java_org_honorato_opencvsample_MainActivity_IncreaseContrast(JNIEnv*, jobject, jlong addrRgba) {
    Mat& src = *(Mat*)addrRgba;
    Mat dst;

    // Convert to gray
    cvtColor(src, src, CV_BGR2GRAY);

    // Histogram equalization
    equalizeHist(src, dst);

    // Saturation by 10%
    float alpha = 1.1f;
    float beta = 12.75f;
    dst.convertTo(dst, -1, alpha, beta);
}

}
