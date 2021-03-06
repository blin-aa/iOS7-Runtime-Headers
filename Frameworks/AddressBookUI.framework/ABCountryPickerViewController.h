/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UISearchDisplayController, UITableView, UISearchBar, NSIndexPath, NSDictionary, NSString, UILocalizedIndexedCollation, NSArray;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate> {
    UITableView *_tableView;
    UILocalizedIndexedCollation *_collation;
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    NSDictionary *_indexToSections;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    NSArray *_filteredCountries;
    NSString *_selectedCountryCode;
    NSIndexPath *_selectedIndexPath;
    NSArray *_allCountries;
}

@property(retain) NSString * selectedCountryCode;


- (float)ab_heightToFitForViewInPopoverView;
- (void)scrollToSearchFieldAnimated:(BOOL)arg1;
- (void)configureSections;
- (void)_setSelectedCountryCode:(id)arg1 atPath:(id)arg2;
- (void)reloadCountryCodes;
- (void)setSelectedCountryCode:(id)arg1;
- (id)selectedCountryCode;
- (void)setStyleProvider:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
