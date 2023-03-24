#include "mainwindow.h"

#include <QApplication>
#include "ffmpegs.h"

extern "C" {
   // 设备
#include <libavdevice/avdevice.h>
}

int main(int argc, char *argv[])
{
    WAVHeader header;
    header.sampleRate = 44100;
    header.bitsPerSample = 16;
    header.numChannels = 2;
    header.audioFormat = 3;

     // pcm转wav文件
    FFmpegs::pcm2wav(header,"/Users/ld/Desktop/44100_s16le_2.pcm","/Users/ld/Desktop/44100_s16le_2.wav");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
