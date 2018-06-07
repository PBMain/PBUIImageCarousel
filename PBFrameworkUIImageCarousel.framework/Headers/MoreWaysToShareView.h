#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <FBSDKShareKit/FBSDKShareKit.h>
#import <QuartzCore/QuartzCore.h>
@import Photos;

@interface MoreWaysToShareView : UIView <MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate, FBSDKSharingDelegate> {
    
}

@property (nonatomic) NSString *assetId;
@property (nonatomic) NSString *ownerUserId;
@property (nonatomic) NSString *filename;
@property (nonatomic) NSString *creationDate;
@property (nonatomic) NSString *creationDateUTC;
@property (nonatomic) NSString *hashTags;
@property (nonatomic) UIImage *theImage;
@property (nonatomic) NSString *videoLink;
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

- (IBAction)pressSMSShare:(id)sender;
- (IBAction)pressSavePhoto:(id)sender;
- (IBAction)pressClose:(id)sender;
- (IBAction)pressInstagram:(id)sender;

// For mixpanel
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;

@end
