![logo](https://github.com/pcjbird/iOSLogBrowserSDK/raw/master/logo.png)

[![Pod Version](http://img.shields.io/cocoapods/v/iOSLogBrowserSDK.svg?style=flat)](https://cocoapods.org/pods/iOSLogBrowserSDK)
[![Pod Platform](http://img.shields.io/cocoapods/p/iOSLogBrowserSDK.svg?style=flat)](https://cocoapods.org/pods/iOSLogBrowserSDK)
[![Pod License](http://img.shields.io/cocoapods/l/iOSLogBrowserSDK.svg)]()
[![GitHub release](https://img.shields.io/github/release/pcjbird/iOSLogBrowserSDK.svg)](https://github.com/pcjbird/iOSLogBrowserSDK/releases)
[![GitHub release](https://img.shields.io/github/release-date/pcjbird/iOSLogBrowserSDK.svg)](https://github.com/pcjbird/iOSLogBrowserSDK/releases)
[![Website](https://img.shields.io/website-pcjbird-down-green-red/https/shields.io.svg?label=author)](https://pcjbird.github.io)

# iOSLogBrowserSDK

### A real-time iOS log tracing tool that enables viewing iOS logs on a PC web browser within a local area network. The log display automatically scrolls similar to Xcode console.

## Features

1. View output logs while operating, real-time log tracking without manual refresh.
2. Compatible with all browsers, no Mac computer required.
3. No need for USB cable connection to computer.
4. Supports multiple computers monitoring logs simultaneously.

## Demo

<p align="center"><img src="https://github.com/pcjbird/iOSLogBrowserSDK/raw/master/demo.jpg" title="demo"></p>

## Installation

Method 1: `iOSLogBrowserSDK` is available through CocoaPods. To install it, simply add the following line to your Podfile:

```ruby
pod 'iOSLogBrowserSDK'
pod 'Reachability'
```

## Usage

```objc
#import <XLFacility/XLFacilityMacros.h>
#import <iOSLogBrowserSDK/iOSLogBrowserSDK.h>
#import <Reachability/Reachability.h>
```

```objc
@interface AppDelegate ()

@property(nonatomic, assign) BOOL started;

@end
```

```objc
@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
      // Override point for customization after application launch.
      self.started = NO;
      Reachability* reachability = [Reachability reachabilityForLocalWiFi];
      if([reachability isReachable])
      {
          [self start];
      }
      __weak typeof(self) weakSelf = self;
      reachability.reachableBlock = ^(Reachability *reachability) {
          NSLog(@"%@", @"Network Available");
          __strong typeof(self) strongSelf = weakSelf;
          if(!strongSelf) return;
          if(strongSelf.started)
          {
              return;
          }
          [strongSelf start];
      };
      reachability.unreachableBlock = ^(Reachability *reachability) {
          NSLog(@"%@", @"Network Unavailable");
      };
      [reachability startNotifier];
      return YES;
}

-(void) start
{
    iOSLogBrowserOption* option = [iOSLogBrowserOption defaultOption];
    option.suspendInBackground = YES;
    [iOSLogBrowserSDK startWithOption:option];

    XLOG_INFO(@"%@", @"You are using iOS LAN Log Viewing Service!");
    self.started = YES;
}

@end
```

⚠️ Important Note:

1. When using on iOS physical devices, please ensure your App has permission to access local WiFi.

## Follow us

<a href="https://itunes.apple.com/cn/app/iclock-一款满足-挑剔-的翻页时钟与任务闹钟/id1128196970?pt=117947806&ct=com.github.pcjbird.QuickTraceiOSLogger&mt=8"><img src="https://github.com/pcjbird/AssetsExtractor/raw/master/iClock.gif" width="400" title="iClock - A Perfectionist's Flip Clock and Task Alarm"></a>

[![Twitter URL](https://img.shields.io/twitter/url/http/shields.io.svg?style=social)](https://twitter.com/intent/tweet?text=https://github.com/pcjbird/QuickTraceiOSLogger)
[![Twitter Follow](https://img.shields.io/twitter/follow/pcjbird.svg?style=social)](https://twitter.com/pcjbird)
