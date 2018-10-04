//
//  ActivityFeedTableViewHeader.h
//  AFNetworking
//
//  Created by Michael Liptuga on 17.09.2018.
//

#import <UIKit/UIKit.h>

@interface ActivityFeedTableViewHeader : UIView

+ (instancetype) create;

+ (CGFloat) height;

- (void) configureWithDate : (NSDate*) date;

@end
