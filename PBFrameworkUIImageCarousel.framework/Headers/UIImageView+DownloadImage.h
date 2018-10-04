//
//  UIImageView+DownloadImage.h
//  AFNetworking
//
//  Created by Michael Liptuga on 18.09.2018.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (DownloadImage)

- (void) loadUserProfileImageWithMasterPersonId : (NSString*)  masterPersonId
                                       streamId : (NSString*) streamId
                               placeholderImage : (UIImage*) placeholderImage;

- (void) loadPhotoWithAssetId : (NSString*) assetId
                     streamId : (NSString*) streamId;

- (void) loadStreamCoverWithStreamId : (NSString*) streamId;

@end

NS_ASSUME_NONNULL_END
