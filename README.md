![logo](https://raw.githubusercontent.com/pcjbird/iOSLogBrowserSDK/master/logo.png)
[![Pod Version](http://img.shields.io/cocoapods/v/iOSLogBrowserSDK.svg?style=flat)](https://cocoapods.org/pods/iOSLogBrowserSDK)
[![Pod Platform](http://img.shields.io/cocoapods/p/iOSLogBrowserSDK.svg?style=flat)](https://cocoapods.org/pods/iOSLogBrowserSDK)
[![Pod License](http://img.shields.io/cocoapods/l/iOSLogBrowserSDK.svg)]()
[![GitHub release](https://img.shields.io/github/release/pcjbird/iOSLogBrowserSDK.svg)](https://github.com/pcjbird/iOSLogBrowserSDK/releases)
[![GitHub release](https://img.shields.io/github/release-date/pcjbird/iOSLogBrowserSDK.svg)](https://github.com/pcjbird/iOSLogBrowserSDK/releases)
[![Website](https://img.shields.io/website-pcjbird-down-green-red/https/shields.io.svg?label=author)](https://pcjbird.github.io)

# iOSLogBrowserSDK

### A real-time iOS log tracing tool that enables viewing iOS logs on a PC web browser within a local area network. The log display automatically scrolls similar to Xcode console.

一个实时的 iOS 日志追踪工具，可以在本地区域网络内通过 PC 网页浏览器查看 iOS 日志，他将类似 Xcode 控制台一样自动滚动显示日志。

## 特性 / Features

1. 一边操作一边查看输出日志，实时日志跟踪，无须手动刷新。
2. 适用所有浏览器，无需配备 Mac 电脑。
3. 无需数据线连接电脑。
4. 支持多台电脑同时监听日志。

## 演示 / Demo

<p align="center"><img src="https://raw.githubusercontent.com/pcjbird/iOSLogBrowserSDK/master/demo.jpg" title="demo"></p>

## 安装 / Installation

方法一：`iOSLogBrowserSDK` is available through CocoaPods. To install it, simply add the following line to your Podfile:

```
pod 'XLFacility', git: 'https://github.com/pcjbird/XLFacility.git', :modular_headers => true
pod 'iOSLogBrowserSDK'
```

## 使用 / Usage

```
  #import <iOSLogBrowserSDK/iOSLogBrowserSDK.h> 

  - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
        // Override point for customization after application launch.
        [iOSLogBrowserSDK startWithOption:nil];
        XLOG_INFO(@"您正在使用 iOS 局域网日志查看服务！");
        return YES;
  }
```

## 关注我们 / Follow us

<a href="https://itunes.apple.com/cn/app/iclock-一款满足-挑剔-的翻页时钟与任务闹钟/id1128196970?pt=117947806&ct=com.github.pcjbird.QuickTraceiOSLogger&mt=8"><img src="https://github.com/pcjbird/AssetsExtractor/raw/master/iClock.gif" width="400" title="iClock - 一款满足“挑剔”的翻页时钟与任务闹钟"></a>

[![Twitter URL](https://img.shields.io/twitter/url/http/shields.io.svg?style=social)](https://twitter.com/intent/tweet?text=https://github.com/pcjbird/QuickTraceiOSLogger)
[![Twitter Follow](https://img.shields.io/twitter/follow/pcjbird.svg?style=social)](https://twitter.com/pcjbird)
