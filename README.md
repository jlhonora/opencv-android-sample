# OpenCV Example

Based on OpenCV's Tutorial #1.

## OpenCV installation

Based on [this](http://stackoverflow.com/questions/27406303/opencv-in-android-studio)

1. Download latest OpenCV sdk for Android from [OpenCV.org](http://opencv.org/downloads.html) and decompress the zip file.
2. Import OpenCV to Android Studio, From File -> New -> Import Module, choose sdk/java folder in the unzipped opencv archive.
3. Update build.gradle under imported OpenCV module to update 4 fields to match your project build.gradle a) compileSdkVersion b) buildToolsVersion c) minSdkVersion and 4) targetSdkVersion.
4. Add module dependency by Application -> Module Settings, and select the Dependencies tab. Click + icon at bottom, choose Module Dependency and select the imported OpenCV module.
5. For Android Studio v1.2.2, to access to Module Settings : in the project view, right-click the dependent module -> Open Module Settings
6. Copy libs folder under sdk/native to Android Studio under app/src/main.
7. In Android Studio, rename the copied libs directory to jniLibs and we are done.

## Setup NDK

Download and install Android's Native Development Kit (NDK). More info here: https://developer.android.com/ndk/guides/setup.html

## Notes

This project uses the gradle experimental plugin, so it is subject to change.

Your `local.properties` file must define the ndk and opencv dirs. Here's mine as an example

```
sdk.dir=~/Library/Android/sdk
ndk.dir=/usr/local/android-ndk-r10e
opencv.dir=~/dev/androidstudio/OpenCV-android-sdk/sdk/native/jni/include
```
