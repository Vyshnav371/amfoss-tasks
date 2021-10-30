#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i<height;i++)
    {
        for (int j=0; j<width; j++)
        {
            RGBTRIPLE  pixel = image[i][j];
            int m = round((image[i][j].rgbtRed+ image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            image[i][j].rgbtRed = m;
            image[i][j].rgbtGreen =m;
            image[i][j].rgbtBlue =m;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i<height;i++)
    {
        for (int j=0; j<width; j++)
        {
            RGBTRIPLE  pixel = image[i][j];
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
            if (sepiaRed > 255)
            {
                sepiaRed=255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen=255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue=255;
            }
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen =sepiaGreen;
            image[i][j].rgbtBlue =sepiaBlue;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i<height;i++)
    {
        for (int j=0; j<(width/2); j++)
        {
            RGBTRIPLE  pixel = image[i][j];
            int a =image[i][j].rgbtRed;
            int b=image[i][j].rgbtGreen;
            int c=image[i][j].rgbtBlue;
            image[i][j].rgbtRed = image[i][width-j-1].rgbtRed;
            image[i][j].rgbtGreen = image[i][width-j-1].rgbtGreen;
            image[i][j].rgbtBlue = image[i][width-j-1].rgbtBlue;
            image[i][width-j-1].rgbtRed = a;
            image[i][width-j-1].rgbtGreen= b;
            image[i][width-j-1].rgbtBlue= c;
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for(int i=0; i<height;i++)
    {
        for (int j=0; j<width; j++)
        {
            int n=0;
            int rowc[] ={i-1,i,i+1};
            int colc[] ={j-1,j,j+1};
            float totalr=0;
            float totalg=0;
            float totalb=0;
            
            for (int z=0; z<3;z++)
            {
                for (int x=0; x<3; x++)
                {
                    int crow=rowc[z];
                    int ccol=colc[x];
                    if (crow>=0 && crow <height && ccol>=0 && ccol< width)
                    {
                        RGBTRIPLE  pixel = image[i][j];
                        totalr+=pixel.rgbtRed;
                        totalg +=pixel.rgbtGreen;
                        totalb +=pixel.rgbtBlue;
                    
                    }
                }
            }
            temp[i][j].rgbtRed=round(totalr/n);
            temp[i][j].rgbtGreen=round(totalg/n);
            temp[i][j].rgbtBlue=round(totalb/n);
            

            
        }    
    }        
    
    return;
}
