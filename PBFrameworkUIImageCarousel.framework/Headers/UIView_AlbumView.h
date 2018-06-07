#import <UIKit/UIKit.h>
#import "UIView_PhotoContainerView.h"
@import Photos;

@interface AlbumView : PhotoContainerView {
    
}

@property (nonatomic) NSMutableArray *arrayImages;
@property (nonatomic) PHImageRequestOptions *requestOptions;
@property (nonatomic) float cellSize;
@property (nonatomic) UIImage *headerImg;
@property (nonatomic) NSString *locationName;

-(void) addImages:(NSMutableArray*)imgArray;

@end
