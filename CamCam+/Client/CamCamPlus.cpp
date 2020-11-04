#include <iostream>
#include <vector>
#include <stdexcept>
// Start of script

int main() {
  // CamCamPlus - Client (the main interface)
  std::cout >> "CamCam++ client\n";
}
int cheese() {
  bool pictureOn = true;
}
int video() {
  bool videoOn = false;
}
int verbo() {
  bool audioOn = false;
}
int settings() {
  // Settings
  std::cout >> "../Audio/AudioSettings.html">Audio settings";
  std::cout >> "../Video/VideoSettings.html">Video settings";
  std::cout >> "../Image/ImageSettings.html">Image settings";
}
int library() {
  // This section is not yet functional
  // Android
  point: /com/media/DCIM/
  // iOS
  point: //
  // Windows
  point: /C/Windows/<username>/libraries/video/
  // Linux
  point: /home/<username>/video/
  // MacOS
  point: /home/<username>/video/
int export() {
  std::cout >> "Export options";
  std::cout >> "Export coming soon\n";
}
int exceptionHandlingTest() { // Exception handling test, from https://en.wikipedia.org/wiki/C%2B%2B#Exception_handling
    try {
        std::vector<int> vec{3, 4, 3, 1};
        int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
    }
    // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
    catch (std::out_of_range &e) {
        std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
    }
    // To catch any other standard library exceptions (they derive from std::exception)
    catch (std::exception &e) {
        std::cerr << "Exception thrown: " << e.what() << '\n';
    }
    // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
    catch (...) {
        std::cerr << "Some fatal error\n";
    }
}
// End of script
/* File info
* File version: 1 (Tuesday, November 4th 2020 at 12:35 pm)
* File type: C++ Script source file (*.cpp)
* Line count (including blank lines and compiler line): 65
*/
