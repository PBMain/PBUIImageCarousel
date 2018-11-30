//
//  ImageDetailViewController.h
//  PhotoButler
//
//  Created by Mirant on 10/10/16.
//  Copyright © 2016 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UIView_ImageDetailView.h"

@interface ImageDetailViewController : UIViewController
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
@property (nonatomic) NSString *commentIdForShowing;
@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) BOOL isPhotoStreamHost;
@property (nonatomic) BOOL allowDupes;

// Paging
@property (nonatomic) BOOL pagingIsOn;

-(void) processDisplay;
-(void) flashScreen;
-(void) btnBack;

@end
