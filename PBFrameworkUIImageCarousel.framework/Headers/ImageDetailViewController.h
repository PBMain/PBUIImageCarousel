//
//  ImageDetailViewController.h
//  PhotoButler
//
//  Created by Mirant on 10/10/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ImageDetailViewControllerDelegate <NSObject>

- (void) showFANtasticPhotoForImage: (UIImage *) image onVC:(UIViewController*)vc;

@end

@class ImageDetailView;

@interface ImageDetailViewController : UIViewController

@property (nonatomic, weak) id <ImageDetailViewControllerDelegate> delegate;

@property (nonatomic) ImageDetailView *imageDetailView;
@property (nonatomic) IBOutlet UIView *vContainer;
@property (nonatomic) IBOutlet UIView *vSafeArea;

@property (nonatomic) NSMutableArray *filenames;
@property (nonatomic) NSDictionary *selectedImage;
@property (nonatomic) NSString *userToImpersonate;
@property (nonatomic) NSString *sharedAlbumId;

@property (nonatomic) NSString *location;
@property (nonatomic) NSString *subtitle;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *occasionName;
@property (nonatomic) NSString *postID;
@property (nonatomic) NSString *commentIdForShowing;
@property (nonatomic) NSString *personID;
@property (nonatomic) NSString *categoryID;

@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) BOOL isPhotoStreamHost;
@property (nonatomic) BOOL allowDupes;

@property (nonatomic) BOOL isHighlights;
@property (nonatomic) BOOL isAllPhotos;
@property (nonatomic) BOOL isCategories;
@property (nonatomic) BOOL isPersonImages;
@property (nonatomic) BOOL isMyImages;

@property (nonatomic) int pagesLoaded;
@property (nonatomic) int pageSize;

// Paging
@property (nonatomic) BOOL pagingIsOn;

// The progress bar for creating a POI
@property (nonatomic) UIProgressView *progbar;
@property (nonatomic) UIAlertController *poiProgressAlert;
@property (nonatomic) UIAlertAction *poiProgressAlertAction;

-(void) processDisplay;
-(void) flashScreen;
-(void) btnBack;

@end
