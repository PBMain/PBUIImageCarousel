
#import <UIKit/UIKit.h>
#import "PBVideoTrimmer.h"

@interface PBVideoSortingMenuView : UIView

@property (weak, nonatomic) IBOutlet UIView *sortOptionsContainer;
@property (weak, nonatomic) IBOutlet UIView *cancelContainer;
@property (weak, nonatomic) IBOutlet UIButton *newestToOldestBtn;
@property (weak, nonatomic) IBOutlet UIButton *oldestToNewestBtn;
@property (weak, nonatomic) IBOutlet UIButton *longestToShortest;
@property (weak, nonatomic) IBOutlet UIButton *shortestToLongest;
@property (weak, nonatomic) IBOutlet UIButton *cancelBtn;

@end
