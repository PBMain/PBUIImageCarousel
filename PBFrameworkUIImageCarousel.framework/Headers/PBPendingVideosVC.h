//
//  PBPendingVideosVC.h
//  PhotoButler
//
//  Created by Philippe Belley on 3/21/18.
//  Copyright © 2018 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/PHAsset.h>

#import "PBVideoTrimmer.h"

typedef NS_ENUM(NSInteger, SortType)
{
    SORT_LONGTOSHORT,
    SORT_SHORTTOLONG,
    SORT_NEWTOOLD,
    SORT_OLDTONEW
};
@class PBVideoSortingMenuView;
@interface PBPendingVideosVC : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, PBVideoTrimmerDelegate>
@property (strong, nonatomic) IBOutlet UIView *contentView;
@property (nonatomic) PBVideoSortingMenuView *sortMenu;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (weak, nonatomic) IBOutlet UIButton *filterButton;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (assign, nonatomic) BOOL isDeleteMode;

@property (weak, nonatomic) IBOutlet UIView *vNavigation;
@property (weak, nonatomic) IBOutlet UIView *vNavigationSafeArea;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
/*
 deletionhash is a Dictionary that contains IndexPaths of items that are marked for deletion, with the keys being a string representation of the row. ie: "0", "1", "2"... etc
 */
@property (nonatomic) NSMutableDictionary *deletionHash;

/*
 saveButton, when pressed, all elements in deletionList are iterated and removed from the data source.
 */
@property (weak, nonatomic) IBOutlet UIButton *saveButton;
@property (nonatomic) PHFetchResult *assetList;
@property (nonatomic) NSMutableArray *filteredDataSource;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSDate *albumStartDate;
@property (nonatomic) NSDate *albumEndDate;
@property (nonatomic) SortType currentSortType;
@end
