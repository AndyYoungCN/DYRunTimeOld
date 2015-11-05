//
//  AppDelegate.h
//  DYRunTime
//
//  Created by tarena on 15/10/15.
//  Copyright © 2015年 ady. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DYLocationManager,CYLTabBarController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) DYLocationManager *locationManager;
@property (strong, nonatomic) CYLTabBarController *tabBarController;
@end

