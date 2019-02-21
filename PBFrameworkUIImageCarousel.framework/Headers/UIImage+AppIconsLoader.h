//
//  UIImage+AppIconsLoader.h
//  PBPodUIImageCarousel
//
//  Created by Michael Liptuga on 2/11/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (AppIconsLoader)

+ (UIImage*) iconName : (NSString*) iconName currentBundle : (NSBundle*) bundle;


@end

NS_ASSUME_NONNULL_END
