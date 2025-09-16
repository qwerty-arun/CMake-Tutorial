#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

// int main() {
//     // Load an image (replace path with your own)
//     // Mat img = imread("D:/CMake-Tutorial/opencv_project/test.jpg");
//     Mat img = imread("../../test.jpg");

//     if (img.empty()) {
//         cout << "Could not read the image!" << endl;
//         return -1;
//     }

//     // Show the image
//     imshow("My Image", img);

//     // Wait until a key is pressed
//     waitKey(0);
//     return 0;
// }

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "Usage: app <image_path>" << endl;
        return -1;
    }

    Mat img = imread(argv[1]);
    if (img.empty()) {
        cout << "Could not read the image!" << endl;
        return -1;
    }

    imshow("My Image", img);
    waitKey(0);
    return 0;
}

// .\app.exe ..\..\test.jpg