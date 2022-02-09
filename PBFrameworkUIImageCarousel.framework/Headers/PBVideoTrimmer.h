//
//  PBVideoTrimmer.h

#import <UIKit/UIKit.h>
@class AVAsset;
@class PHAsset;

@protocol PBVideoTrimmerDelegate
-(void) refreshVideoList;
@end

@interface PBVideoTrimmer : UIViewController

@property (strong, nonatomic) id<PBVideoTrimmerDelegate> delegate;
@property (strong, nonatomic) AVAsset *asset;
@property (strong, nonatomic) PHAsset *phasset;
@property (weak, nonatomic) IBOutlet UILabel *clipName;
@property (weak, nonatomic) IBOutlet UILabel *clipTime;
@property (weak, nonatomic) IBOutlet UIView *playButtonView;
@property (weak, nonatomic) IBOutlet UIView *viewLoadingContainer;
@property (nonatomic) NSString *videoName;
@property (nonatomic) NSString *videoLength;
@property (nonatomic) NSString *streamID;

@end
