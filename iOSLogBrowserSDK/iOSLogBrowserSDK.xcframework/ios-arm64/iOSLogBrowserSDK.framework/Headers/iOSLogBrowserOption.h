//
//  iOSLogBrowserOption.h
//  iOSLogBrowserSDK
//
//  Created by pcjbird on 11/16/24.
//

#import <Foundation/Foundation.h>
#import <iOSLogBrowserSDK/iOSLogBrowserSDKDefines.h>

NS_ASSUME_NONNULL_BEGIN

/// SDK Initialize Option
@interface iOSLogBrowserOption : NSObject<NSCopying>

/// the minimum log level
///
/// > Important: the default value is `SDKLOGLEVEL_INFO`
@property(nonatomic, assign) SDKLOGLEVEL minLogLevel;

/// the http port
///
/// > Important: the default value is 8080
@property(nonatomic, assign) NSInteger httpPort;

/// whether start the telnet server at the same time
///
/// > Important: the default value is NO
@property(nonatomic, assign) BOOL startTelnetServer;

/// the telnet port
///
/// > Important: the default value is 2323
@property(nonatomic, assign) NSInteger telnetPort;

/// the page refresh interval in milliseconds
///
/// > Important: the defautl value is 500ms
@property(nonatomic, assign) NSTimeInterval refreshInterval;

///  Sets if the peer automatically stops and starts while entering background
///  and foreground on iOS.
///
///  When an app enters background on iOS and is suspended, it cannot leave
///  listening sockets open, so it must either close them or start a background
///  task to prevent the app from getting suspended while in background.
///
///  If this property is set to NO then the peer will automatically create a
///  background task when it is started and end it when it is stopped. Note that
///  this task can only run for a limited time while the app is in background
///  before iOS eventually force ends it. At this point the peer will be stopped
///  no matter what.
///
///  > Important: The default value is NO.
@property(nonatomic) BOOL suspendInBackground;

/// The default option
+ (instancetype)defaultOption;


+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
