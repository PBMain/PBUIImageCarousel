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

+ (NSAttributedString*) commentTextForUserName : (NSString*) userName
                                       comment : (NSString*) comment
                             commentDateString : (NSString*) commentDateString
                                  userNameFont : (UIFont*) userNameFont
                                 userNameColor : (UIColor*) userNameColor
                               commentDateFont : (UIFont*) commentDateFont
                              commentDateColor : (UIColor*) commentDateColor
                            lineHeightMultiple : (CGFloat) lineHeightMultiple
                                     alignment : (NSTextAlignment) alignment;


+ (NSAttributedString*) activityDescriptionTextForUserName : (NSString*) userName
                                                   andText : (nullable NSString*) andText
                                                othersText : (nullable NSString*) otherUsers
                                                   comment : (NSString*) comment
                                              userNameFont : (UIFont*) userNameFont
                                             userNameColor : (UIColor*) userNameColor
                                        lineHeightMultiple : (CGFloat) lineHeightMultiple
                                                 alignment : (NSTextAlignment) alignment;


@end

NS_ASSUME_NONNULL_END
