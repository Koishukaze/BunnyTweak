#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BunnySettingsViewController
    : UIViewController <UITableViewDelegate, UITableViewDataSource>
- (instancetype)initWithVersion:(NSString *)version;
@end

extern id gBridge;
void showSettingsSheet(void);