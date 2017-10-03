#include "emojigenlib.hpp"
#include <iostream>
#include <list>
#include <string>
#include "opencv2/core.hpp"

EmojiGenLib::EmojiGenLib(void) {
    a = 10;
    // std::cout << "\nEmoji Generator Library!!\n";
}
void EmojiGenLib::printTest(std::string str) { std::cout << str; }

bool EmojiGenLib::generate(std::list<std::string> text, std::string fontName,
                           cv::Scalar fontColor, cv::Scalar backColor,
                           AlignType align, bool stretch, GenModeType mode) {
    return true;
}
