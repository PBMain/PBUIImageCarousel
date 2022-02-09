#import <UIKit/UIKit.h>

@interface CommentsOthersCommentCell : UICollectionViewCell
@property (nonatomic) IBOutlet UILabel *lblComment;
@property (nonatomic) IBOutlet UILabel *lblName;
@property (nonatomic) IBOutlet UILabel *lblTime;
@property (nonatomic) IBOutlet UIButton *btnDelete;
@property (nonatomic) IBOutlet UIButton *btnEdit;
@property (nonatomic) IBOutlet UIView *vBackground;
@property (nonatomic) IBOutlet UIView *vEditDeleteView;
@property (nonatomic) IBOutlet UIView *vReportView;
@property (nonatomic) IBOutlet UIImageView *imgPerson;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintEditHeight;
@property (nonatomic) IBOutlet NSLayoutConstraint *constraintReportHeight;

@property (nonatomic) NSDate *timePosted;
@property (nonatomic) NSDictionary *commentObject;

-(void) updateTimeDisplay;
-(BOOL) isShowingEditDelete;
-(void) hideEditDelete;
-(void) showEditDelete;
-(BOOL) isShowingReport;

- (void) showReport;
- (void) hideReport;

-(IBAction)pressEdit:(id)sender;
-(IBAction)pressDelete:(id)sender;

@end
