//
//  AppDelegate.h
//  EdgeTabla
//
//  Created by EDGE on 20/09/17.
//  Copyright © 2017 EDGE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

