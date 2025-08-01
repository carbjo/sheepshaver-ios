//
//  SSPreferencesDisksViewController.h
//  SheepShaver_Xcode8
//
//  Created by Tom Padula on 7/21/22.
//

#import <UIKit/UIKit.h>

#import "DiskTypeiOS.h"
#import "SSDiskManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface SSPreferencesDisksViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (readwrite, nonatomic) IBOutlet UIButton* createNewDiskButton;
@property (readwrite, nonatomic) IBOutlet UISwitch* bootFromCDROMFirstSwitch;
@property (readwrite, nonatomic) IBOutlet UITableView* diskTable;

- (void)injectDiskManager:(SSDiskManager*) diskManager;
- (IBAction)createNewDiskButtonHit:(id)sender;
- (IBAction)bootFromCDROMFirstSwitchHit:(id)sender;

@end

NS_ASSUME_NONNULL_END
