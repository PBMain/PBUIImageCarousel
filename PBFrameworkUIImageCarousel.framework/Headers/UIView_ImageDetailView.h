#import <UIKit/UIKit.h>
@import Photos;

@class ImageDetailView;

@protocol ImageDetailViewDelegate <NSObject>

- (void) playVideo: (NSURL*) videoUrl;

- (void) showCommentsViewController : (ImageDetailView*) imageDetailView
                        imageObject : (NSDictionary*) imageObject;

- (void) showImageDuplicateViewController : (ImageDetailView*) imageDetailView
                              imageObject : (NSDictionary*) imageObject
                          selectedImageId : (int) selectedImageId;

- (void) imageDetailViewBackButtonDidTouch : (ImageDetailView*) imageDetailView;

- (void) showDetailPopupForImageObject : (NSDictionary*) imageObject;

@end

@interface ImageDetailView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (nonatomic, weak) id <ImageDetailViewDelegate> delegate;

@property (nonatomic) UICollectionView *gridLarge;
@property (nonatomic) UICollectionView *gridSmall;

@property (nonatomic) NSMutableArray *arrayImages;
@property (strong) PHFetchResult *assetsFetchResults;
@property (strong) PHCachingImageManager* imageManager;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic, assign) int startIndex;
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
@property (nonatomic) NSString *postID;
@property (nonatomic) BOOL isPhotoStreamHost;
@property (nonatomic, assign) BOOL allowDupes;
@property (nonatomic) IBOutlet UIView *largeImageUIView;
@property (nonatomic) IBOutlet UIView *smallImageUIView;

@property (nonatomic) IBOutlet UIView *viewNavigation;

@property (nonatomic) IBOutlet UIButton *backButton;
@property (nonatomic) IBOutlet UIButton *settingsButton;
@property (nonatomic) IBOutlet UIButton *shareButton;

@property (nonatomic) IBOutlet UILabel *lblLocation;
@property (nonatomic) IBOutlet UILabel *lblTime;
@property (nonatomic) IBOutlet UIView *viewContributorData;

@property (nonatomic, strong) NSIndexPath *selectedIndexPath;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightForSmallView;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintHeaderHeight;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintSettingsButtonWidth;


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
-(void)rotationEnableORNot:(BOOL)isRotate;
-(void)updateContentOffset;

// So bad
@property (nonatomic) NSTimer *timerTinkerbellRealLinkPolling;
@property (nonatomic) NSMutableArray *arrayTinkerbellRealLinkAssets;
@property (nonatomic) NSMutableArray *arrayTinkerbellPlayerLoopers;

@property (nonatomic) BOOL blockRetryOfDeceleration;

// Paging
@property (nonatomic) int pagingSortDirection;
@property (nonatomic) BOOL isPaging;

@end
