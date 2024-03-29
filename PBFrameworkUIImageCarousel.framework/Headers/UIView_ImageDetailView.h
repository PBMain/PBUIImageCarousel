#import <UIKit/UIKit.h>
@import Photos;

@class ImageDetailView;

@protocol ImageDetailViewDelegate <NSObject>

- (void) playVideo: (NSURL*) videoUrl;

- (void) showCommentsViewController : (ImageDetailView*) imageDetailView
                        imageObject : (NSDictionary*) imageObject;

- (void) showCreatePOIAlert : (ImageDetailView*) imageDetailView imageMeta : (NSDictionary*) imageMeta image : (UIImage*) image;

- (void) showAddPOIMenu : (ImageDetailView*) imageDetailView imageMeta : (NSDictionary*) imageMeta image : (UIImage*) image;

- (void) showImageDuplicateViewController : (ImageDetailView*) imageDetailView
                              imageObject : (NSDictionary*) imageObject
                          selectedImageId : (int) selectedImageId;

- (void) imageDetailViewBackButtonDidTouch : (ImageDetailView*) imageDetailView;

- (void) showDetailPopupForImageObject : (NSDictionary*) imageObject;

- (void) showReportDialog: (NSString *) ownerId asssetId: (NSString *) assetId;

- (void) showAlertView: (UIAlertController *) alert;

- (void) showFANtasticPhotoForImage: (UIImage *) image;

- (void) saveCategoryToAlbum;

- (void) saveCategoryToZIP;

- (void) saveStreamToAlbum;

- (void) saveStreamToZIP;

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
- (void) removeReportedAsset: (NSString *) assetId;
- (void) removeReportedUser: (NSString *) userId;

// Refreshes the POI creation UI after creating a POI
-(void) refreshPOIStatusOnCurrentCell;

// So bad
@property (nonatomic) NSTimer *timerTinkerbellRealLinkPolling;
@property (nonatomic) NSMutableArray *arrayTinkerbellRealLinkAssets;
@property (nonatomic) NSMutableArray *arrayTinkerbellPlayerLoopers;

@property (nonatomic) BOOL blockRetryOfDeceleration;

// Paging
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *categoryName;
@property (nonatomic) NSString *streamName;
@property (nonatomic) NSString *categoryID;
@property (nonatomic) NSString *personID;

@property (nonatomic) BOOL isHighlights;
@property (nonatomic) BOOL isAllPhotos;
@property (nonatomic) BOOL isCategories;
@property (nonatomic) BOOL isPersonImages;
@property (nonatomic) BOOL isMyImages;

@property (nonatomic) int pagesLoaded;
@property (nonatomic) int pageSize;

@property (nonatomic) int assetCount;
@property (nonatomic) BOOL isHost;
@property (nonatomic) BOOL isLoadingPage;
@property (nonatomic) BOOL doneLoadingAllPages;
@property (nonatomic) BOOL didLayout;
@property (nonatomic) BOOL isMapCategory;
@property (nonatomic) BOOL sortAscending;

@property (nonatomic) BOOL stopReloadingCells;

@end
