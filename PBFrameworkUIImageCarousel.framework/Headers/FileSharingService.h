//
//  FileSharingService.h
//  PBFrameworkUIImageCarousel
//
//  Created by Michael Liptuga on 5/15/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FileSharingService : NSObject

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) NSString *assetId;

+ (instancetype) createWith : (NSDictionary*) imageDictionary
                   streamId : (NSString*) streamId
                 streamName : (NSString*) streamName
                     postId : (NSString*) posId;

- (void) shareToFacebook:(NSArray*)images;

- (void) presentDocumentInteractionControllerInView : (UIView*) view;

- (void) invalidate;

@end

NS_ASSUME_NONNULL_END
