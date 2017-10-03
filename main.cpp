#include <iostream>
#include "emojiGenLib/emojigenlib.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int main(void) {
    EmojiGenLib emojiLib;
    emojiLib.printTest("nyampas!\n");

    Mat src;
    src = imread("./emoji.png");

    namedWindow("Emoji Gen Test", 1);
    imshow("Emoji Gen Test", src);
    waitKey();
    return 0;
}
