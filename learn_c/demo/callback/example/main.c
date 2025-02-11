#include <stdio.h>
#include "downloader.h"

// 回调函数，用于显示下载进度
void show_progress(int progress)
{
    printf("download: %d%%\n", progress);
}

int main()
{
    int totalSize = 100;  // 假设文件总大小为100单位

    // 启动下载，传入回调函数show_progress来显示下载进度
    start_download(totalSize, show_progress);

    return 0;
}

