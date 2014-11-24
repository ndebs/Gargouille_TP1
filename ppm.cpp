
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Image.h"
//============================================================================
// Main
//============================================================================
int main(int argc, char* argv[])
{
  //--------------------------------------------------------------------------
  // Read file "gargouille.ppm" into image (width and height)
  //--------------------------------------------------------------------------
  //Constructor call
  Image();

  Image photo;

  photo.ppm_read_from_file();



  //--------------------------------------------------------------------------
  // Create a desaturated (B&W) copy of the image we've just read and
  // write it into "gargouille_BW.ppm"
  //--------------------------------------------------------------------------
  //Copy constructor call
  Image photo_bw(photo);

  
  // Desaturate image_bw
  photo_bw.ppm_desaturate();
  char file_bw_name[18] = "gargouille_bw.ppm";
  photo_bw.ppm_write_to_file(file_bw_name);
  // Free the desaturated image

  //--------------------------------------------------------------------------
  // Create a resized copy of the image and
  // write it into "gargouille_small.ppm"
  //--------------------------------------------------------------------------

  Image photo_small(photo);

  // Shrink image_small size 2-fold
  photo_small.ppm_shrink(2);
  // Write the desaturated image into "gargouille_small.ppm"
  char file_small_name[21]= "gargouille_small.ppm";
  photo_small.ppm_write_to_file(file_small_name);

  return 0;
}
