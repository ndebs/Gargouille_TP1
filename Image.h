#ifndef PPM
#define PPM

class Image
{
  public: 
    int width; // Width
    int height; // Heigth
    u_char *data; //Tab blue green red


    int GetWitdth(void) const;
    int GetHeight(void) const;
    u_char* GetData(void);

    //constructeur
    Image(void);

    //destructeur
    ~Image(void);

    //constructeur par recopie
    Image(const Image& model);

   //============================================================================
   // Function declarations
   //=========================width===================================================
   // Write the image contained in <data> (of size <width> * <height>)
   // into plain RGB ppm file, which name is <filename>
     void ppm_write_to_file(char* filename);
   
   // Read the image contained in plain RGB ppm file <file>
   // into <data> and set <width> and <height> accordingly
   // Warning: data is malloc_ed, don't forget to free it  
     void ppm_read_from_file();      
   
   // Desaturate (transform to B&W) <image> (of size <width> * <height>)
     void ppm_desaturate(); 
     
   // Shrink image (of original size <width> * <height>) by factor <factor>
   // <width> and <height> are updated accordingly
     void ppm_shrink(int factor);
};

#endif
