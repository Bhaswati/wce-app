//
//  AddLocationViewController.h
//  WCE
//
//

#import <UIKit/UIKit.h>
#import "User.h"
#define countryPicker 0
#define languagePicker 1

@interface AddLocationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSArray *locations;
    NSArray *dataArray;
    UIActionSheet *actionSheet;
    IBOutlet UITableView *dropDownTableView;
    User *sharedUser;
    
}

@property (nonatomic, copy) NSArray *locations;
@property (nonatomic, copy) UIActionSheet *actionSheet;
@property (nonatomic, retain) IBOutlet UITableView *dropDownTableView;
@property (nonatomic, retain) NSArray *dataArray;
@property (nonatomic, retain) NSArray *countries;
@property (nonatomic, retain) NSArray *languages;
@property (nonatomic, retain) User *sharedUser;


@property (weak, nonatomic) IBOutlet UITextField *location;
@property (weak, nonatomic) IBOutlet UITextField *contact;
@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *city;


- (IBAction)cancelChanges:(id)sender;
- (IBAction)saveChanges:(id)sender;

- (IBAction)backgroundTouched:(id)sender;
- (IBAction)textfieldReturn:(id)sender;

@end