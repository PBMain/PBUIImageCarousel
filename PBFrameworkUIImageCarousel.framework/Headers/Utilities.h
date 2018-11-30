#import <UIKit/UIKit.h>

@interface Utilities : NSObject
{
    
}

+(NSString *) convertDatesToSpan:(NSDate *)startDateMethod endDate:(NSDate *)endDateMethod;
+(NSMutableArray*)sortAllStreamArray:(NSArray*)toSort;
+(NSMutableArray*)sortLiveStreamArray:(NSArray*)toSort;
+(NSMutableArray*)sortUpcomingStreamArray:(NSArray*)toSort;
+(NSMutableArray*)sortPastStreamArray:(NSArray*)toSort;

// Show permissions popups for anything we don't have yet
+(void)showPermissionsSweep:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;
+(void)showNamePopup:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;
+(void)showPermissionsLocations:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;
+(void)showPermissionsCamera:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;
+(void)showPermissionsLibrary:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;
+(void)showPermissionsContacts:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;
+(void)showPermissionsPushNotifications:(UIViewController*)vc completionBlock:(void (^)(void))completionBlock;

// Convert Date NSStrings to NSDates
+(NSDate*)convertStringToNSDate:(NSString*)dateString forUTC:(BOOL)isUTC;

// Check asset array for children with favorite statuses and apply them to parents
+(NSArray*)applyFavoriteStatusesToParents:(NSArray*)arrayOfAssets;

// Check asset array for children that aren't in their parent's array and place them there
+(void)putChildrenUnderParents:(NSArray*)arrayOfAssets completion:(void(^)(NSArray* parents, NSArray* childen))completion;

+(void)loadCustomFonts;

@end

@interface UIView (Constraints)

-(void)addConstraintsToSuperviewWithLeftOffset:(CGFloat)leftOffset topOffset:(CGFloat)topOffset;

-(void)addConstraintsWithWidth:(CGFloat)width height:(CGFloat)height;

-(void)addConstraintsToSuperviewEqual;

@end
