#include <list>
#include <opencv2/core/core.hpp>
#include <string>
enum AlignType {
    Centor,
    Right,
    Left,
};

enum GenModeType {
    ModeNomal,
    ModeFontSizeFixed,
};
class EmojiGenLib {
    int a;

   public:
    EmojiGenLib(void);
    void printTest(std::string str);
    bool generate(std::list<std::string> text, std::string fontName,
                  cv::Scalar fontColor, cv::Scalar backColor, AlignType align,
                  bool stretch, GenModeType mode);
};
