//
//  ImageDetailCollectionViewCell.h
//  PhotoButler
//
//  Created by Mirant on 07/03/17.
//  Copyright © 2017 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageDetailCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate>

@property (retain,nonatomic) IBOutlet UIImageView *imgMain;
@property (retain,nonatomic) IBOutlet UIScrollView *scrForLargeView;

@property (retain,nonatomic) IBOutlet UIImageView *imgHeart;
@property (retain,nonatomic) IBOutlet UIView *viewHeartMainView;
@property (retain,nonatomic) IBOutlet UIView *viewHeartView;
@property (weak, nonatomic) IBOutlet UILabel *lblHeartCounter;
@property (weak, nonatomic) IBOutlet UIView *viewDupes;
@property (weak, nonatomic) IBOutlet UIView *dupeTapView;

@property (weak, nonatomic) IBOutlet UIView *viewDupesBlack;
@property (weak, nonatomic) IBOutlet UIButton *videoPlayButton;

@property (retain,nonatomic) IBOutlet UIBarButtonItem *btnBarMessage;
@property (retain,nonatomic) IBOutlet UIImageView *imgMessage;
@property (retain,nonatomic) IBOutlet UIView *viewMessageMainView;
@property (retain,nonatomic) IBOutlet UIView *viewMessageView;
@property (weak, nonatomic) IBOutlet UILabel *lblMessageCounter;
@property (weak, nonatomic) IBOutlet UILabel *lblDupesNumber;

// Image Contributor Metadata
@property (weak, nonatomic) IBOutlet UIImageView *contributorThumbImg;
@property (weak, nonatomic) IBOutlet UIView *contributorMeta;
@property (weak, nonatomic) IBOutlet UILabel *contributorNameLbl;
@property (weak, nonatomic) IBOutlet UILabel *contributedByLbl;
@property (weak, nonatomic) IBOutlet UIView *contributorImageShadow;
@property (nonatomic) NSURL *videoURL;
@property (nonatomic) NSDictionary *asset;

@property (nonatomic, assign) BOOL isImageScaled;

- (void) updateLblMessageCounter : (NSString*) counterValue;
- (void) updateLblHeartCounter : (NSString*) counterValue;

- (void) updateZoomLevelToMinimum;

@end
