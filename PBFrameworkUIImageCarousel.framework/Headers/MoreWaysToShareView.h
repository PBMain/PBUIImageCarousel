#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <QuartzCore/QuartzCore.h>
@import Photos;

@interface MoreWaysToShareView : UIView <MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate, UIDocumentInteractionControllerDelegate> {
    
}

@property (nonatomic) NSString *assetId;
@property (nonatomic) NSString *ownerUserId;
@property (nonatomic) NSString *filename;
@property (nonatomic) NSString *creationDate;
@property (nonatomic) NSString *creationDateUTC;
@property (nonatomic) NSString *hashTags;
@property (nonatomic) UIImage *theImage;
@property (nonatomic) NSString *videoLink;
@property (nonatomic) NSString *postID;
@property (nonatomic) PHAsset *assetToDelete;

@property (nonatomic) IBOutlet UIView *viewBackground;
@property (nonatomic) IBOutlet UIView *viewContainer;
@property (nonatomic) IBOutlet UIButton *btnSMSShare;
@property (weak, nonatomic) IBOutlet UIImageView *imgSMS;
@property (nonatomic) IBOutlet UIButton *btnSavePhoto;
@property (weak, nonatomic) IBOutlet UIImageView *imgSave;
@property (nonatomic) IBOutlet UIButton *btnClose;
@property (weak, nonatomic) IBOutlet UIButton *btnFacebook;
@property (weak, nonatomic) IBOutlet UIImageView *imgFB;
@property (nonatomic) UIDocumentInteractionController *docController;
@property (nonatomic) IBOutlet UILabel *lblTitle;
@property (nonatomic) IBOutlet UILabel *lblSavePhoto;

@property (nonatomic) IBOutlet UIView *facebookContainerView;
@property (nonatomic) IBOutlet UIView *instagramContainerView;

@property (nonatomic) IBOutlet NSLayoutConstraint *containerLeftConstraint;
@property (nonatomic) IBOutlet NSLayoutConstraint *containerRightConstraint;

- (IBAction)pressSMSShare:(id)sender;
- (IBAction)pressSavePhoto:(id)sender;
- (IBAction)pressClose:(id)sender;
- (IBAction)pressInstagram:(id)sender;

- (void)eventViewDidShow;

// For mixpanel
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;
@property (nonatomic) NSTimer *timerPopupWatcher;
@property (nonatomic) BOOL hasSentShareEvent;

// For using iOS sharing dialog
- (void)useDocController;

@end
