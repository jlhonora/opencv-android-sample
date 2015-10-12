//
// Created by Jose Honorato on 10/12/15.
//

#ifndef OPENCV_SAMPLE_NATIVE_PROCESSING_H
#define OPENCV_SAMPLE_NATIVE_PROCESSING_H

#include <jni.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <vector>

extern "C" {
JNIEXPORT void JNICALL Java_org_honorato_opencvsample_MainActivity_FindFeatures(JNIEnv *, jobject,
                                                                                jlong addrGray,
                                                                                jlong addrRgba);
}
#endif //OPENCV_SAMPLE_NATIVE_PROCESSING_H
