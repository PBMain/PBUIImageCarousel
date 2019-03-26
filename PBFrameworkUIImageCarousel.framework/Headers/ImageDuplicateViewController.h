//
//  ImageDuplicateViewController.h
//  PhotoButler
//
//  Created by Philippe Belley on 4/6/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageDuplicateView.h"

@interface ImageDuplicateViewController : UIViewController
@property (nonatomic, weak) ImageDuplicateView *imageDuplicateView;

@property (nonatomic) NSMutableArray *filenames;
@property (nonatomic) int selectedImageId;
@property (nonatomic) NSString *userToImpersonate;
@property (nonatomic) NSString *sharedAlbumId;

@property (nonatomic) NSString *location;
@property (nonatomic) NSString *subtitle;
@property (nonatomic) NSString *albumId;
@property (nonatomic) NSString *albumName;
@property (nonatomic) NSString *occasionId;
@property (nonatomic) NSString *occasionName;
@property (nonatomic) NSString *postID;
@property (nonatomic) NSNumber *startMasterAssetId;
@property (nonatomic) BOOL isPhotoStream;
@property (nonatomic) BOOL isSetting;
@property (nonatomic) BOOL isPhotoStreamHost;

-(void) flashScreen;
-(void) btnBack;

@end
