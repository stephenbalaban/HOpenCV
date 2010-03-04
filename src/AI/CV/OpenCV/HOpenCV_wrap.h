#include <cv.h>


void debug_print_image_header(IplImage *image);

void release_capture(CvCapture *capture);

    
void new_window(int num, int flags);
void del_window(int num);
void show_image(int num, IplImage *image);

IplImage *create_image(int width, int height, int depth, int channels);
void release_image(IplImage *image);

void get_size(const CvArr *arr, CvSize *size);
/*void dilate(IplImage *src, int iterations, IplImage *dest);*/
