#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface CommentWebView : UIView <WKNavigationDelegate, UIScrollViewDelegate, WKUIDelegate, WKScriptMessageHandler>

@property (retain,nonatomic) IBOutlet UIView *vWebviewContainer;
@property (retain,nonatomic) IBOutlet UIView *vHeader;
@property (retain,nonatomic) IBOutlet UIView *vStatusCover;
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;
@property (retain,nonatomic) IBOutlet UIButton *btnClear;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintContainerToBottom;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintHeaderHeight;

@property (nonatomic) WKWebView *webView;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressClear:(id)sender;
-(void)goToUrl:(NSString*)urlString;
-(void)layoutSubviews;

@end
