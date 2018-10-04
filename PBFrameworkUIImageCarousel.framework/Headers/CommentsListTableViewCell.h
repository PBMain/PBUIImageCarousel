//
//  CommentsListTableViewCell.h
//  AFNetworking
//
//  Created by Michael Liptuga on 11.09.2018.
//

#import <UIKit/UIKit.h>

@interface CommentsListTableViewCell : UITableViewCell

+ (NSString*) cellID;

+ (id) cellNib;

- (void) configure : (id) object streamId : (NSString*) streamId;

- (void) separatorView : (BOOL) isHidden;

@end
