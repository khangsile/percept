#include "lucas.h"

#include <cv.h>

#include <highgui.h>

class pcMatrixPercept
{
    int matrix[1920][1080];
    CvSize f_size;
    
    pcMatrixPercept(CvSize frame_size)
    {
        f_size=frame_size;
        for (int i=0; i<frame_size.width; i++) 
        {
            for (int j=0; j<frame_size.height; j++) 
            {
                matrix[i][j]=0;
            }
        }
    }
    int setRelDepth0to255(int x, int y, int value)
    {
        if(x<0 || x>f_size.width || y>f_size.height || y<0)
        {    
            return -1;
        }
        
        if(value>256)
            value=value%256;
        matrix[x][y]=value;
        return 0;
      
    }
    int getRelDepth0to255(int x, int y)
    {
        return matrix[x][y];
    }
};

int initPercept(int givenWidth, int givenHeight, char* source, CvCapture **input_video)
{
    
    /* Create an object that decodes the input video stream. */
    
    if(strcmp(source,"CAMERA")==0)
    {
        
        *input_video = cvCreateCameraCapture(-1);
        
    }
    
    else
    {
        *input_video = cvCaptureFromFile(source);
    }
    
    if (*input_video == NULL)
        
	{
        
		/* Either the video didn't exist OR it uses a codec OpenCV
         
		 * doesn't support.
         
		 */
        
		fprintf(stderr, "Error: Can't open video.\n");
        
		return -1;
        
	}
    
    cvSetCaptureProperty(*input_video, CV_CAP_PROP_FRAME_WIDTH, givenWidth);
    
    cvSetCaptureProperty(*input_video, CV_CAP_PROP_FRAME_HEIGHT, givenHeight);
    
    printf("\nPercept initialized..");
    
    return 0;
}

int exitPercept()
{
    printf("\nPercept exit.");
    
    return 0;
}