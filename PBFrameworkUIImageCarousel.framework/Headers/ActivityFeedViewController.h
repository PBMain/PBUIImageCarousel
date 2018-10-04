//
//  ActivityFeedViewController.h
//  AFNetworking
//
//  Created by Michael Liptuga on 12.09.2018.
//

#import <UIKit/UIKit.h>

@interface ActivityFeedViewController : UIViewController

@property (nonatomic, strong) NSString *navTitle;
@property (nonatomic, strong) NSDate *activityFeedSinceDate;
@property (nonatomic, assign) BOOL showClearButton;

@end
