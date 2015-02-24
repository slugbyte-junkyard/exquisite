//
//  Story.h
//  exquisite
//
//  Created by Adam Wallraff on 2/23/15.
//  Copyright (c) 2015 nacnud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Story : NSObject

@property(nonatomic) int storyID;
@property(strong, nonatomic) NSString *title;
@property(strong, nonatomic) NSDate *createdAt;
@property(strong, nonatomic) NSArray *levels;

@end
