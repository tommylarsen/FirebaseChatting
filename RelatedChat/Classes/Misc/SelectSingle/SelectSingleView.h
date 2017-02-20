//
// Copyright (c) 2016 Ryan
//

#import "utilities.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------
@protocol SelectSingleDelegate
//-------------------------------------------------------------------------------------------------------------------------------------------------

- (void)didSelectSingleUser:(DBUser *)dbuser;

@end

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface SelectSingleView : UIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
//-------------------------------------------------------------------------------------------------------------------------------------------------

@property (nonatomic, assign) IBOutlet id<SelectSingleDelegate>delegate;

@end
