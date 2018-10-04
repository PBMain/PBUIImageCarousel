//
//  NSAttributedString+CommentText.h
//  AFNetworking
//
//  Created by Michael Liptuga on 18.09.2018.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (CommentText)

+ (NSAttributedString*) commentTextForUserName : (NSString*) userName
                                       comment : (NSString*) comment
                                  userNameFont : (UIFont*) font
                            lineHeightMultiple : (CGFloat) lineHeightMultiple
                                     alignment : (NSTextAlignment) alignment;

@end

NS_ASSUME_NONNULL_END
