//
//  main.cpp
//  图片识别
//
//  Created by Apple on 15/12/21.
//  Copyright © 2015年 Apple. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // <param name="singlepic"><1.bmp></param>
  public generateLicense(Bitmap singlepic)
    
        try
        {
            char[,] charArray = new char[singlepic.Height, singlepic.Width];    //定义个chai型的二维数组记录每个像素上0/1的值,形成一个矩形
            int imageWidth = 0;    //记录图片的像素宽度
            int imageHeight = 0;    //记录图片的像素高度
            int dgGrayValue = 128;    //灰度值
            Color piexl;
            //string code = "";    //存储每个像素的0/1
            for (int posy = 0; posy < singlepic.Height; posy++)
            {//从上到下
                string codeCache = "";    //存储每行的像素的0/1
                for (int posx = 0; posx < singlepic.Width; posx++)
                {//从左到右
                    piexl = singlepic.GetPixel(posx, posy);
                    if (piexl.R < dgGrayValue)
                    {// 如果该像素的颜色为黑色,值就为“1”
                        codeCache = codeCache + "1";
                    }
                    else
                    {// 否则该像素的颜色为白色,值就为“0”
                        codeCache = codeCache + "0";
                    }
                }
                char[] array = codeCache.ToCharArray();    //每行的0/1的值用数字保存,以便于进行循环处理
                //code += codeCache + "\n";
                for (imageWidth = 0; imageWidth < array.Length; imageWidth++)
                    charArray[imageHeight, imageWidth] = array[imageWidth];    //通过循环将每行值转存到二维数组中
                imageHeight++;
            }       //*********************以上代码可用来获取一个字的图片二进制数组，即字库
            
            //开始和字库进行匹配(我的工具中只需要下面的几个字符)
            findWord(charArray, char0, imageHeight, imageWidth, BinaryWidth0, BinaryHeight0, '0');
            findWord(charArray, char1, imageHeight, imageWidth, BinaryWidth1, BinaryHeight1, '1');
            findWord(charArray, char2, imageHeight, imageWidth, BinaryWidth2, BinaryHeight2, '2');
            findWord(charArray, char3, imageHeight, imageWidth, BinaryWidth3, BinaryHeight3, '3');
            findWord(charArray, char4, imageHeight, imageWidth, BinaryWidth4, BinaryHeight4, '4');
            findWord(charArray, char5, imageHeight, imageWidth, BinaryWidth5, BinaryHeight5, '5');
            findWord(charArray, char6, imageHeight, imageWidth, BinaryWidth6, BinaryHeight6, '6');
            findWord(charArray, char7, imageHeight, imageWidth, BinaryWidth7, BinaryHeight7, '7');
            findWord(charArray, char8, imageHeight, imageWidth, BinaryWidth8, BinaryHeight8, '8');
            findWord(charArray, char9, imageHeight, imageWidth, BinaryWidth9, BinaryHeight9, '9');
            findWord(charArray, charA, imageHeight, imageWidth, BinaryWidthA, BinaryHeightA, '.');
            findWord(charArray, charB, imageHeight, imageWidth, BinaryWidthB, BinaryHeightB, 'b');
            findWord(charArray, charC, imageHeight, imageWidth, BinaryWidthC, BinaryHeightC, 'c');
            findWord(charArray, charD, imageHeight, imageWidth, BinaryWidthD, BinaryHeightD, 'd');
            findWord(charArray, charE, imageHeight, imageWidth, BinaryWidthE, BinaryHeightE, 'e');
            findWord(charArray, charF, imageHeight, imageWidth, BinaryWidthF, BinaryHeightF, 'f');
            findWord(charArray, charP, imageHeight, imageWidth, BinaryWidthP, BinaryHeightP, 'p');
            findWord(charArray, charY, imageHeight, imageWidth, BinaryWidthY, BinaryHeightY, 'y');
            //------------------------------------END---------------------------------------------
            richTextBoxLicense.Text += identifySort();    //执行identifySort方法，将我需要的格式在richTextBoxLicense文本框中显示
            richTextBoxLicense.SelectionStart = richTextBoxLicense.TextLength;    //将光标移到最后面
        }
        catch
        {
            
        }
    return 0;
}
