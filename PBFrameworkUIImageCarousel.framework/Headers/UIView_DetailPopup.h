#import <UIKit/UIKit.h>

#define showDebugFileInfo YES

@interface DetailPopup : UIView {
    
}

@property (nonatomic) NSString *assetId;
@property (nonatomic) NSString *filename;
@property (nonatomic) NSString *creationDate;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *occasionName;

@property (nonatomic) IBOutlet UIView *viewTop;
@property (nonatomic) IBOutlet UIView *viewContainer;
@property (nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (nonatomic) IBOutlet NSLayoutConstraint *bottomConstraint;

@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIButton *btnDeleteFromAlbum;
@property (nonatomic) IBOutlet UIButton *btnDeleteFromPhotoButler;
@property (nonatomic) IBOutlet UIButton *btnDeleteFromPhotoStream;

@property (nonatomic) IBOutlet UIImageView *imgIconDeleteFromAlbum;
@property (nonatomic) IBOutlet UIImageView *imgIconDeleteFromPhotoButler;

@property (nonatomic) IBOutlet UILabel *lblImageInfo;

@property (nonatomic) IBOutlet UIProgressView *progressDivider;

-(IBAction)pressRemoveFromAlbum:(id)sender;
-(IBAction)pressRemoveFromOccasion:(id)sender;
-(IBAction)pressRemoveFromPhotoButler:(id)sender;
-(IBAction)pressRemoveFromPhotoStream:(id)sender;
-(IBAction)pressCancel:(id)sender;

@end