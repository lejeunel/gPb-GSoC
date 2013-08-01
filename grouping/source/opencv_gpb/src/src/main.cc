
#include "globalPb.hh"
#include "cv_lib_filters.hh"
#include "contour2ucm.hh"
#include <list>

using namespace std;
using namespace cv;
using namespace libFilters;

int main(int argc, char** argv){

  Mat img0, gPb, gPb_thin, labels, _is_vertex, _is_edge;
  vector<Mat> gPb_ori, sPb; 

  img0 = imread(argv[1], CV_LOAD_IMAGE_COLOR);
  globalPb(img0, gPb, gPb_thin, gPb_ori);
  contour2ucm(gPb, gPb_ori, labels, _is_vertex, _is_edge);

  imshow("Original", img0);
  imshow("gPb",  gPb);
  imshow("gPb_thin", gPb_thin);
  imshow("labels", labels);
  imshow("_is_vertex", _is_vertex*255);
  imshow("_is_edge", _is_edge*255);
  //Display_EXP(gPb_ori, "gPb_ori", 4);
  //Display_EXP(sPb, "sPb", 4);
  while(true){
    char ch = waitKey(0);
    if(ch == 27) break;

  }
  
}
