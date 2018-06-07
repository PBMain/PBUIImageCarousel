#import <UIKit/UIKit.h>
#import "CommentWebView.h"

@interface CommentWebViewController : UIViewController

@property (retain,nonatomic) IBOutlet UIView *vSafeArea;
@property (retain,nonatomic) IBOutlet UIView *container;
@property (retain,nonatomic) NSString *title;
@property (nonatomic) BOOL showClearButton;
@property (nonatomic) CommentWebView *cwv;

-(void)pressBack;
-(void)gotoUrl:(NSString*)urlString;

@end
