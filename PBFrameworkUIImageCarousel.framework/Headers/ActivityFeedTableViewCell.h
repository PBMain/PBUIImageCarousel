//
//  ActivityFeedTableViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 12.09.2018.
//

#import <UIKit/UIKit.h>

@interface ActivityFeedTableViewCell : UITableViewCell

+ (NSString*) cellID;

+ (id) cellNib;

- (void) configure : (id) object;

- (void) separatorView : (BOOL) isHidden;

@end
