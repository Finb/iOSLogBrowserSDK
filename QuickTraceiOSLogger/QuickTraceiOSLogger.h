//
//  QuickTraceiOSLogger.h
//  QuickTraceiOSLogger
//
//  Created by pcjbird on 2018/3/22.
//  Copyright © 2018年 Zero Status. All rights reserved.
//
//  框架名称:QuickTraceiOSLogger
//  框架功能:A real time iOS log trace tool, view iOS log with pc web browser under local area network, which will automatically scroll like xcode. 一个实时的iOS日志跟踪工具，在本地区域网络下使用 PC Web 浏览器查看 iOS 日志，它将像xcode一样自动滚动。
//  修改记录:
//     pcjbird    2020-08-27  Version:2.0.0 Build:202008270001
//                            1.移除telnet支持。
//
//     pcjbird    2020-06-24  Version:1.0.9 Build:202006240001
//                            1.新增代码异常保护。
//
//     pcjbird    2020-05-07  Version:1.0.8 Build:202005070001
//                            1.新增一些日志颜色。
//
//     pcjbird    2020-03-29  Version:1.0.7 Build:202003290002
//                            1.修改打印的日志文本。
//
//     pcjbird    2020-03-29  Version:1.0.6 Build:202003290001
//                            1.修改日志服务关闭逻辑。
//
//     pcjbird    2018-04-09  Version:1.0.5 Build:201804090001
//                            1.修改 XCode 控制台打印格式。
//
//     pcjbird    2018-03-26  Version:1.0.4 Build:201803260001
//                            1.支持 favicon.ico 图标。
//
//     pcjbird    2018-03-22  Version:1.0.3 Build:201803220004
//                            1.优化日志网页显示，新增标题。
//
//     pcjbird    2018-03-22  Version:1.0.2 Build:201803220003
//                            1.优化时间显示
//
//     pcjbird    2018-03-22  Version:1.0.1 Build:201803220002
//                            1.修复iOS11上无法浏览日志的问题
//
//     pcjbird    2018-03-22  Version:1.0.0 Build:201803220001
//                            1.首次发布SDK版本
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <XLFacility/XLFacilityMacros.h>
//! Project version number for QuickTraceiOSLogger.
FOUNDATION_EXPORT double QuickTraceiOSLoggerVersionNumber;

//! Project version string for QuickTraceiOSLogger.
FOUNDATION_EXPORT const unsigned char QuickTraceiOSLoggerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <QuickTraceiOSLogger/PublicHeader.h>


#if __has_include("QuickiOSLogServer.h")
#import "QuickiOSLogServer.h"
#endif


#if __has_include("QuickiOSHttpServerLogger.h")
#import "QuickiOSHttpServerLogger.h"
#endif

