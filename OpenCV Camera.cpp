#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    VideoCapture cap(0);

    if (!cap.isOpened()) {
        cout << "Error: Cannot open camera!" << endl;
        return -1;
    }

    cout << "Press 'q' to quit, 's' to save frame" << endl;

    Mat frame;
    int saved_count = 0;

    while (true) {
        cap >> frame;

        if (frame.empty()) break;

        imshow("Camera", frame);

        int key = waitKey(30) & 0xFF;
        if (key == 'q') break;
        if (key == 's') {
            string filename = "captured_" + to_string(saved_count++) + ".jpg";
            imwrite(filename, frame);
            cout << "Saved: " << filename << endl;
        }
    }

    cap.release();
    destroyAllWindows();
    return 0;
}
