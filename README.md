# gPB-UCM
This method generates Ultra Metric Contour hierarchical segmentation of images as in
```
Arbelaez, Pablo, et al. "Contour detection and hierarchical image segmentation." IEEE transactions on pattern analysis and machine intelligence 33.5 (2010): 898-916.
```

It is a port from https://github.com/vrabaud/gPb.
It comes with a boost/python wrapper and uses OpenCV internally.

## Prerequisites

This software requires: 
* [Boost](http://www.boost.org/)
* [OpenCv](https://opencv.org/)

It is tested with Boost > 1.58, OpenCV > 4, and Python > 3

## Installing

Clone repository along with submodules
```
git clone --recurse-submodules git@github.com:lejeunel/gPb-GSoC.git
```

Install the package with:
```
cd gPb-GSoC
mkdir build
cd build
cmake ..
make
python src/setup.py install
```

## Getting started

See demo.py 
