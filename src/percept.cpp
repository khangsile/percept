#include "lucas.h"

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