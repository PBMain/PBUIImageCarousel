//
//  ImageDuplicateCollectionViewCell.h
//  PhotoButler
//
//  Created by Philippe Belley on 4/6/17.
//  Copyright © 2017 blurbIQ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageDuplicateCollectionViewCell : UICollectionViewCell

@property (retain,nonatomic) IBOutlet UIImageView *imgMain;
@property (retain,nonatomic) IBOutlet UIScrollView *scrForLargeView;

@property (weak, nonatomic) IBOutlet UIView *viewDetach;
@property (weak, nonatomic) IBOutlet UIView *viewCheck;
@property (weak, nonatomic) IBOutlet UIImageView *checkSelected;
@property (weak, nonatomic) IBOutlet UIImageView *checkUnSelected;

@end
