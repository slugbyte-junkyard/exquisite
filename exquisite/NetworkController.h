//
//  NetworkController.h
//  exquisite
//
//  Created by drwizzard on 2/23/15.
//  Copyright (c) 2015 nacnud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface NetworkController : NSObject

+(id)sharedService;
-(void)createNewAccountWithUserName:(NSString *) username password:(NSString *)passwd;

-(void)fetchRandomStoryWithCompletionHandler: (void (^)(NSDictionary *results, NSString *error)) completionHandler;
-(void)fetchStoryWithIdentifier:(NSString * )storyID withCompletionHandler: (void (^)(NSDictionary *results, NSString *error)) completionHandler;

-(void)fetchStoriesForBrowserWithCompletionHandler: (void (^)(NSArray *results, NSString *error)) completionHandler;
-(void)fetchTimelineForUser:(User *)currentUser withCompletionHandler:(void (^)(NSDictionary *results, NSString *error)) completionHandler;

@end
