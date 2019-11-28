//
//  UIView_PhotoContainer.h
//  PhotoButler
//
//  Created by Daniel Spencer on 5/10/16.
//  Copyright © 2016 Photo Butler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoContainerView : UIView <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,UICollectionViewDelegate> {
    
}

@property (nonatomic) UICollectionView *grid;

-(instancetype)initWithCoder:(NSCoder *)aDecoder;

@end
