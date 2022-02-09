#import <UIKit/UIKit.h>

@class CommentsViewController;

@protocol CommentsViewControllerDelegate <NSObject>

@optional

- (void) commentsViewControllerDidClose :  (CommentsViewController*) commentsViewController;

@end


@interface CommentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITextViewDelegate>

@property (retain,nonatomic) IBOutlet UICollectionView *cvComments;
@property (retain,nonatomic) IBOutlet UIButton *btnBack;
@property (retain,nonatomic) IBOutlet UIButton *btnSubmit;
@property (retain,nonatomic) IBOutlet UIView *vCommentView;
@property (retain,nonatomic) IBOutlet UIView *vEmptyView;
@property (retain,nonatomic) IBOutlet UIView *vTextEntryView;
@property (retain,nonatomic) IBOutlet UIView *vTextEntryShadowView;
@property (retain,nonatomic) IBOutlet UITextView *txtCommentEntry;

@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintTextEntryFromBottom;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintTextEntryHeight;

@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintContentFromBottom;
@property (retain,nonatomic) IBOutlet NSLayoutConstraint *constraintContentFromTop;

// Parts of the empty state
@property (retain,nonatomic) IBOutlet UILabel *lblEmptyTitle;
@property (retain,nonatomic) IBOutlet UILabel *lblEmptyDescription;
@property (retain,nonatomic) IBOutlet UIImageView *imgEmptyIcon;

@property (nonatomic, weak) id<CommentsViewControllerDelegate> delegate;

@property (nonatomic) NSArray *arrayComments;
@property (nonatomic) NSString *streamID;
@property (nonatomic) NSString *streamName;
@property (nonatomic) NSString *assetID;
@property (nonatomic) NSString *currentReportingComment;
@property (nonatomic) int currentReportingCommentIndex;
@property (nonatomic) BOOL isStreamListing;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isPost;
@property (nonatomic) BOOL isUpdatingNavBarConstraint;
@property (nonatomic) NSTimer *timerUpdateTimes;

-(IBAction)pressBack:(id)sender;
-(IBAction)pressSubmit:(id)sender;

// Headers and custom elements
@property (retain,nonatomic) IBOutlet UILabel *lblTitle;
@property (retain,nonatomic) IBOutlet UIView *vNavigationBar;
@property (retain,nonatomic) IBOutlet UIView *vNavigationBarSafeArea;

-(void) refreshCommentsFromServer;

@end
