#include "downloader.h"

// 根据平台选择不同的延迟函数
#ifdef _WIN32
#include <windows.h>  // Windows平台下的Sleep
#define SLEEP(ms) Sleep(ms)  // Sleep函数的单位是毫秒
#else
#include <unistd.h>  // Linux平台下的usleep
#define SLEEP(ms) usleep((ms) * 1000)  // usleep的单位是微秒，所以要乘以1000
#endif

// 模拟文件下载过程，每次下载一定的大小后调用回调函数更新进度
void start_download(int totalSize, ProgressCallback callback)
{
    for (int downloaded = 0; downloaded <= totalSize; downloaded++) {
        // 每次下载1%的数据，模拟100ms的延迟
        //usleep(100000);  // 100ms
        SLEEP(100);  // 延迟100ms

        // 调用回调函数，传递当前的下载进度
        callback(downloaded);
    }
}

