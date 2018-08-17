//
//  ImageDuplicateView.h
//  PhotoButler
//
//  Created by Philippe Belley on 4/6/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Photos;

@protocol ImageDuplicateViewDelegate
- (void)btnBack;

@end

@interface ImageDuplicateView : UIView <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,UIScrollViewDelegate> {
    NSIndexPath *ind;
}

@property (nonatomic, weak) id <ImageDuplicateViewDelegate> delegate;

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
@property (nonatomic) NSIndexPath *indexMainForCell;
@property (nonatomic) BOOL shouldUnhideToolbarOnExit;
@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) BOOL isPhotoStreamHost;
@property (nonatomic) BOOL isPhotoStreamOwner;

@property (nonatomic) IBOutlet UIView *largeImageUIView;
@property (nonatomic) IBOutlet UIView *smallImageUIView;
@property (nonatomic) IBOutlet UIToolbar *toolbar;
@property (nonatomic) IBOutlet UIBarButtonItem *backButton;

@property (nonatomic) IBOutlet UIBarButtonItem *saveButton;
@property (nonatomic) IBOutlet UIBarButtonItem *shareButton;
@property (nonatomic) IBOutlet UILabel *lblLocation;
@property (nonatomic) IBOutlet UILabel *lblTime;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightForSmallView;

@property (nonatomic) BOOL isRotateOrCome;
@property (nonatomic, assign) NSInteger checkedRow;
@property (nonatomic) NSMutableArray *arrayImagesChanges;
@property (nonatomic) NSMutableArray *duplicateOps;

@property (nonatomic) NSString *startMasterAssetId;
@property (nonatomic) NSString *currentMasterAssetId;
@property (nonatomic, assign) int imageId;

@property (nonatomic) IBOutlet UIView *vSafeArea;
@property (nonatomic) IBOutlet UIButton *btnSetCover;

-(void) addImages:(NSMutableArray*)imgArray;
-(void) removeImages:(NSMutableArray*)imgArray;
-(void) setMainImage:(NSString*)image;
-(IBAction)pressBack:(id)sender;
-(IBAction)pressSettings:(id)sender;
-(IBAction)pressShare:(id)sender;
-(IBAction)pressSave:(id)sender;
-(void)setDataProper : (NSIndexPath *) indexMain;
@end

