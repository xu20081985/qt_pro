1
  luvcview是一个开源项目，专注于UVC摄像头的测试，只要您的摄像头支持UVC驱动，即可使用luvcview测试程序，如何知道自己的摄像头是不是支持UVC驱动呢？在这个网站上查一下，看看自己摄像头的ID是不是在支持的列表中，http://www.ideasonboard.org/uvc/

2  我们在luvcview这个项目的基础上进行了修改，使之能够在s5pv210平台上运行，软件方式完成YUV 到RGB数据的转换。


3 另外需要说一下我们修改后的luvcview可以运行在PC Linux平台和s5pv210平台，源码里面有两个makefile文件，一个针对嵌入式版本一个针对PC Linux版本，
  嵌入式版本里面软件实现 YUV to RGB ，暂时未实现硬件空间色彩转换和图像的缩放。

4  使用方法:
   
  &  确认一下您的USB摄像头设备节点，

    插上USB摄像头到开发板，ls  /dev/video*,看一下多了那个节点名称，该节点即是USB摄像头的设备节点

  &  把 luvcview拷贝到 /mnt目录下面，执行 ./luvcview -d /dev/video3  -f yuv -s 800x448在LCD屏幕上即可看到采集到的图像。

    -d 指定摄像头的设备节点
    -f 指定摄像头传给系统的数据格式， -yuv 这样传给系统的数据yuv422(YUYV)格式的码流 , -jpg代表为 mjpeg 码流.
    -s 指定摄像头采集的分辨率为 800x448


   & 如何查看您的摄像头支持的分辨率呢？
    ./luvcview -d /dev/video3 -L 


5   luvcview工作在mjpeg流模式下是可以录制AVI文件，抓图保存成.jpg文件的。avi文件在Ubuntu12.04系统下播放正常，在WindowXP下的暴风影音中播放会花屏，很可能跟播放器支持的视频编码格式
    有关系。
    yuv流模式下可以抓图保存成 .pnm格式的图像文件，在Ubuntu12.04下可以正常显示，该模式下不支持保存avi文件。

6   PC版本的luvcview,抓图和保存avi文件是通过界面上的按键和键盘按键操作的，具体的看一下源码，
    嵌入式版本的 luvcview，界面未增加按钮，抓图和保存avi文件是通过开关变量控制的，修改方法也很简单，简单修改一下源码即可，这个您是懂得的,  ^_^

7  如果您编译PC版本的luvcview，Ubuntu环境里面需要安装sdl环境，在终端环境里面执行： apt-get install libsdl1.2-dev  即可，嵌入式版本不需要的，直接make即可。注意，编译之前记得 make clean一下。



 




