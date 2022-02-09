//
//  UserAvatarUploader.h
//  PBFrameworkUIImageCarousel
//
//  Created by Michael Liptuga on 12/12/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UserAvatarUploader : NSObject


+ (void) loadUserPhotoInImageView : (UIImageView*) imageView
                         personId : (NSString*) personId
                        firstName : (nullable NSString*) firstName
                         lastName : (nullable NSString*) lastName
                          albumId : (nullable NSString*) albumId;

+ (void) loadUserPhotoInImageView : (UIImageView*) imageView
                         personId : (NSString*) personId
                        firstName : (nullable NSString*) firstName
                         lastName : (nullable NSString*) lastName
                   thumbURLString : (nullable NSString*) thumbURLString
                          albumId : (nullable NSString*) albumId
                     albumOwnerId : (nullable NSString*) albumOwnerId
                           isHost : (BOOL) isHost;

+ (void) loadUserPhotoInImageView : (UIImageView*) imageView
                         personId : (NSString*) personId
                           userId : (NSString*) userId
                        firstName : (nullable NSString*) firstName
                         lastName : (nullable NSString*) lastName
                          albumId : (nullable NSString*) albumId;


@end

NS_ASSUME_NONNULL_END
