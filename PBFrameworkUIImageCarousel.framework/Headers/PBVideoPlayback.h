
#import <UIKit/UIKit.h>

@class AVPlayer;
@class AVPlayerLayer;
@class AVAsset;
@class PBVideoSliderBasic;
@interface PBVideoPlayback : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIButton *actionButton;
@property (weak, nonatomic) IBOutlet UIButton *deleteButton;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (nonatomic) NSString *titleText;
@property (weak, nonatomic) IBOutlet UIView *videoLayer;
@property (nonatomic) PBVideoSliderBasic *scrubberView;
@property (nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) AVPlayer *player;
@property (nonatomic) AVAsset *asset;
@property (nonatomic) NSDictionary *assetObjectFromLocalDB;

@property (nonatomic) float currentScrubberPosition;

@property (weak, nonatomic) IBOutlet UIView *sliderView;
@property (assign, nonatomic) BOOL isPlaying;
@property (weak, nonatomic) IBOutlet UIView *playButtonContainer;

-(void)trackEvent:(NSString*)eventName additionalProperties:(NSMutableDictionary*)properties;

@end
