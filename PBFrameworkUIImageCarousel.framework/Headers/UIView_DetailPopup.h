#import <UIKit/UIKit.h>

#define showDebugFileInfo YES

@class DetailPopup;

@protocol DetailPopupDelegate <NSObject>

@optional

- (void) detailPopupRemoveFromOccasionButtonDidTouch : (DetailPopup*) detailPopup ;

- (void) detailPopupRemoveFromAlbumButtonDidTouch : (DetailPopup*) detailPopup;

- (void) detailPopupRemoveFromPhotoButlerButtonDidTouch : (DetailPopup*) detailPopup;

- (void) detailPopupRemoveFromPhotoStreamButtonDidTouch : (DetailPopup*) detailPopup;


@end


@interface DetailPopup : UIView {
    
}

@property (nonatomic, weak) id <DetailPopupDelegate> delegate;

@property (nonatomic) NSString *assetId;
@property (nonatomic) NSString *filename;
@property (nonatomic) NSString *creationDate;
@property (nonatomic) NSString *creationDateUTC;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *occasionName;

@property (nonatomic) NSDictionary *assetData;

@property (nonatomic) IBOutlet UIView *viewTop;
@property (nonatomic) IBOutlet UIView *viewContainer;
@property (nonatomic) IBOutlet NSLayoutConstraint *containerLeftConstraint;
@property (nonatomic) IBOutlet NSLayoutConstraint *containerRightConstraint;

@property (nonatomic) IBOutlet UIButton *btnCancel;
@property (nonatomic) IBOutlet UIButton *btnDeleteFromAlbum;
@property (nonatomic) IBOutlet UIButton *btnDeleteFromPhotoButler;
@property (nonatomic) IBOutlet UIButton *btnDeleteFromPhotoStream;

@property (nonatomic) IBOutlet UIImageView *imgIconDeleteFromAlbum;
@property (nonatomic) IBOutlet UIImageView *imgIconDeleteFromPhotoButler;

@property (nonatomic) IBOutlet UILabel *lblImageInfo;
@property (nonatomic) IBOutlet UILabel *lblDontWorry;

@property (nonatomic) IBOutlet UIProgressView *progressDivider;

-(IBAction)pressRemoveFromAlbum:(id)sender;
-(IBAction)pressRemoveFromOccasion:(id)sender;
-(IBAction)pressRemoveFromPhotoButler:(id)sender;
-(IBAction)pressRemoveFromPhotoStream:(id)sender;
-(IBAction)pressCancel:(id)sender;

-(void) refreshViewsAfterRemove:(NSArray*) assetids;
@end
