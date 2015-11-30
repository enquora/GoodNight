//
//  AppDelegate.h
//  GoodNight
//
//  Created by Anthony Agatiello on 6/22/15.
//  Copyright © 2015 ADA Tech, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIAlertViewDelegate>

+ (void)updateNotifications;
+ (id)initWithIdentifier:(NSString *)identifier;
- (BOOL)installBackgroundTask:(UIApplication *)application;

@property (strong, nonatomic) UIWindow *window;

@end