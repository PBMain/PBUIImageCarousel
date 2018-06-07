//
//  PBPendingVideoCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 3/21/18.
//  Copyright © 2018 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PHAsset;
@class AVAsset;
@class AVAssetImageGenerator;

@interface PBPendingVideoCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *vidLengthLabel;
@property (weak, nonatomic) IBOutlet UILabel *vidTitleLabel;
@property (weak, nonatomic) IBOutlet UIView *thumbsContainer;
@property (nonatomic) PHAsset *assetForCell;
@property (nonatomic) AVAsset *avAsset;
@property (weak, nonatomic) IBOutlet UIView *gradientView;
@property (weak, nonatomic) IBOutlet UIView *deleteButtonBackground;
@property (weak, nonatomic) IBOutlet UIImageView *deleteIcon;

@property (strong, nonatomic) AVAssetImageGenerator *imageGenerator;

- (BOOL)markForDeleteToggle;
@end
