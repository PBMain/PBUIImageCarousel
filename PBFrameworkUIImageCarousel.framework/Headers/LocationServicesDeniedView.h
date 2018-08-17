#import <UIKit/UIKit.h>

@interface LocationServicesDeniedView : UIView
@property (weak, nonatomic) IBOutlet UILabel *lblText;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UIImageView *imgPin;
@property (weak, nonatomic) IBOutlet UIButton *btnServices;
@property (weak, nonatomic) IBOutlet UIButton *btnBack;
@property (weak, nonatomic) IBOutlet UIView *vHeader;
@property (nonatomic) NSTimer *timer;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressSettings:(id)sender;

-(void) checkForLocationPermissions;

@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;
@property (nonatomic) BOOL isLayedOut;

@end
