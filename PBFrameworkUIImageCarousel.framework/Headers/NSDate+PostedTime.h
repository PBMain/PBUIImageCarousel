//
//  NSDate+PostedTime.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11.09.2018.
//

#import <Foundation/Foundation.h>

@interface NSDate (PostedTime)

+ (NSString*) activityPostedTime : (NSDate*) postedDate;

+ (NSString*) activityHeaderPostedTime : (NSDate*) postedDate;

+ (NSString*) commentPostedTime : (NSDate*) postedDate;

@end
