//
//  ACRossoneri_iOS_appAppDelegate.h
//  ACRossoneri_iOS_app
//
//  Created by Salvatore Mulas on 19.07.13.
//  Copyright 2013 pixEffect. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ACRossoneri_iOS_appAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
