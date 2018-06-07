#import <UIKit/UIKit.h>
@import Photos;


@protocol ImageDetailViewDelegate
- (void)btnBack;
- (void)showComments:(NSString*)urlString;
- (void)playVideo: (NSURL*) videoUrl;
@end

@interface ImageDetailView : UIView <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,UIScrollViewDelegate> {
    NSIndexPath *ind;
}

@property (nonatomic) id <ImageDetailViewDelegate> delegate;

@property (nonatomic) UICollectionView *gridLarge;
@property (nonatomic) UICollectionView *gridSmall;

@property (nonatomic) NSMutableArray *arrayImages;
@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) int startIndex;
@property (nonatomic) NSString *dateString;
@property (nonatomic) NSString *magicAlbumId;
@property (nonatomic) NSString *magicAlbumName;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *occasionName;
@property (nonatomic) NSString *userToImpersonate;
@property (nonatomic) NSString *sharedAlbumId;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *commentIdForShowing;
@property (nonatomic) NSIndexPath *indexMainForCell;
@property (nonatomic) BOOL shouldUnhideToolbarOnExit;
@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) BOOL isPhotoStreamHost;
@property (nonatomic, assign) BOOL allowDupes;
@property (nonatomic) IBOutlet UIView *largeImageUIView;
@property (nonatomic) IBOutlet UIView *smallImageUIView;
@property (nonatomic) IBOutlet UIToolbar *toolbar;
@property (nonatomic) IBOutlet UIBarButtonItem *backButton;
@property (nonatomic) IBOutlet UIBarButtonItem *settingsButton;
@property (nonatomic) IBOutlet UIBarButtonItem *shareButton;
@property (nonatomic) IBOutlet UILabel *lblLocation;
@property (nonatomic) IBOutlet UILabel *lblTime;
@property (nonatomic) IBOutlet UIView *viewContributorData;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightForSmallView;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintHeaderHeight;

@property (nonatomic) BOOL isRotateOrCome;

@property (nonatomic) NSString *avtarOfHost;
@property (nonatomic) NSString *strHostName;
@property (nonatomic) NSString *albumOwnerId;
@property (nonatomic) IBOutlet UIView *viewForGradient;
@property (nonatomic) IBOutlet UILabel *labelContributed;
@property (nonatomic) IBOutlet UIImageView *imageViewContributor;

-(void) addImages:(NSMutableArray*)imgArray;
-(void) updateImagesFromDuplicate:(NSMutableArray*)imgArray atIndex:(int)index;
-(void) removeImages:(NSMutableArray*)imgArray;
-(void) setMainImage:(NSDictionary*)image;
-(IBAction)pressBack:(id)sender;
-(IBAction)pressSettings:(id)sender;
-(IBAction)pressShare:(id)sender;
-(void)setDataProper : (NSIndexPath *) indexMain;
-(void)updateImage:(NSDictionary*)asset byFileName:(NSString*)fileName andCaptureDate:(NSString*)captureDate;

// So bad
@property (nonatomic) NSTimer *timerTinkerbellRealLinkPolling;
@property (nonatomic) NSMutableArray *arrayTinkerbellRealLinkAssets;
@property (nonatomic) NSMutableArray *arrayTinkerbellPlayerLoopers;

@end
