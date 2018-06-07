
#import <UIKit/UIKit.h>

@interface PBVideoSliderBasic : UIView
@property (weak, nonatomic) IBOutlet UISlider *slider;
@property (weak, nonatomic) IBOutlet UILabel *totalTime;
@property (weak, nonatomic) IBOutlet UILabel *elapsedTime;

- (void)setSliderToVideoTime: (Float64)time outOf: (Float64)total;
- (void)syncTimeWithSlider : (Float64) maxValue;
@end
