#ifndef DOWNLOADER_H
#define DOWNLOADER_H

// 定义回调函数类型
typedef void (*ProgressCallback)(int progress);

// 模拟下载文件的函数
// totalSize: 文件总大小
// callback: 回调函数，用于报告进度
void  __declspec( dllexport ) start_download(int totalSize, ProgressCallback callback);

#endif // DOWNLOADER_H

