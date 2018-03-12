//
//  React_Native_Open_Settings.h
//  React Native Open Settings
//
//  Created by Michael Morrissey on 11/4/15.
//  Copyright © 2015 Michael Morrissey. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#elif __has_include("RCTBridge.h")
#import "RCTBridge.h"
#else
#import "React/RCTBridge.h"   // Required when used as a Pod in a Swift project
#endif

@interface RNOpenSettings : NSObject <RCTBridgeModule>

@end
