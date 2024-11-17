//
//  iOSLogBrowserSDK.h
//  iOSLogBrowserSDK
//
//  Created by pcjbird on 11/16/24.
//
//  框架名称: iOSLogBrowserSDK.xcframework
//  框架功能: A real-time iOS log tracing tool that enables viewing iOS logs on a PC web browser within a local area network. The log display automatically scrolls similar to Xcode console.
//          一个实时的 iOS 日志追踪工具，可以在本地区域网络内通过 PC 网页浏览器查看 iOS 日志，他将类似 Xcode 控制台一样自动滚动显示日志。
//
//  构建版本:
//      pcjbird    2024-11-16  Version:1.0.0-beta.1 Build:20241116001

#import <Foundation/Foundation.h>
#import <iOSLogBrowserSDK/iOSLogBrowserSDKDefines.h>
#import <iOSLogBrowserSDK/iOSLogBrowserOption.h>
#if __has_include(<XLFacility/XLFacilityMacros.h>)
#import <XLFacility/XLFacilityMacros.h>
#else
#import "XLFacilityMacros.h"
#endif

//! Project version number for iOSLogBrowserSDK.
FOUNDATION_EXPORT double iOSLogBrowserSDKVersionNumber;

//! Project version string for iOSLogBrowserSDK.
FOUNDATION_EXPORT const unsigned char iOSLogBrowserSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <iOSLogBrowserSDK/PublicHeader.h>


NS_ASSUME_NONNULL_BEGIN

/// iOS Log Browser SDK
@interface iOSLogBrowserSDK : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

#pragma mark Version

/// SDK version
/// - Returns:
/// SDK version
+(NSString*) sdkVersion;

/// SDK build version
/// - Returns:
/// SDK build version
+(NSString*) sdkBuild;

/// SDK release date
/// - Returns:
/// SDK release date
+(NSString*) sdkReleaseDate;

#pragma mark Start the internal iOS http log server

/// Start the internal iOS http log server
/// - Parameters:
///   - option: the sdk initialize option
///
/// > Important: the default http server port is 8080
+ (void)startWithOption:(iOSLogBrowserOption* _Nullable)option;

#pragma mark Stop

/// Stop
+ (void)stop;


@end

NS_ASSUME_NONNULL_END
