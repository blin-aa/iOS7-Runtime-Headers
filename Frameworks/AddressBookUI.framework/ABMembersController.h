/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, ABMembersFilteredDataSource, NSString, <ABMembersControllerSearchCompletionDelegate>, ABMembersDataSource, UITableView, <ABStyleProvider>, UIViewController, _UINavigationControllerPalette, UISearchDisplayController, <ABMembersControllerDelegate>, NSOperationQueue, UISearchBar;

@interface ABMembersController : ABContentController <ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
    ABMembersDataSource *_membersDataSource;
    ABMembersFilteredDataSource *_searchDataSource;
    <ABStyleProvider> *_styleProvider;
    unsigned int _cellsCreated;
    unsigned int _memberCount;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    UIViewController *_parentViewController;
    unsigned int _searchSequenceNumber;
    NSOperationQueue *_operationQueue;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    BOOL _showingCardFromSearch;
    BOOL _shouldDeactivateSearch;
    NSIndexPath *_selectedIndexPath;
    BOOL _searchEnabled;
    BOOL _needToClearOldResults;
    <ABMembersControllerSearchCompletionDelegate> *_searchCompletionDelegate;
    _UINavigationControllerPalette *_searchPalette;
}

@property(getter=isSearchEnabled) BOOL searchEnabled;
@property(retain) <ABStyleProvider> * styleProvider;
@property <ABMembersControllerDelegate> * membersControllerDelegate;
@property <ABMembersControllerSearchCompletionDelegate> * searchCompletionDelegate;
@property(readonly) BOOL isServerSearchGroup;
@property(readonly) NSString * currentSearchText;
@property(retain) _UINavigationControllerPalette * searchPalette;

+ (id)newNameSearchOperationWithString:(id)arg1 contactsFilter:(id)arg2 addressBook:(void*)arg3 delegate:(id)arg4 inOutSequenceNumber:(unsigned int*)arg5;

- (void)setSearchEnabled:(BOOL)arg1;
- (void)searchCurrentContactsGroupForWords:(id)arg1 animated:(BOOL)arg2;
- (void)setSearchCompletionDelegate:(id)arg1;
- (id)searchCompletionDelegate;
- (BOOL)isSearchEnabled;
- (void)_deselectAllRowsWithAnimation;
- (void)displayedMembersListChanged;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)makeMainTableViewVisible;
- (id)__searchController;
- (id)__searchBar;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (id)selectedCell;
- (void)setCellsCreated:(unsigned int)arg1;
- (unsigned int)cellsCreated;
- (void)stopScrolling;
- (void)setMembersControllerDelegate:(id)arg1;
- (BOOL)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (BOOL)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
- (void)_updateNoContactsViewAnimated:(BOOL)arg1;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)_updateCountString;
- (BOOL)selectAndScrollMemberVisible:(void*)arg1;
- (void*)_selectedPerson;
- (id)currentSearchText;
- (void)_searchForWords:(id)arg1;
- (id)_localizedStringForError:(int)arg1;
- (BOOL)isServerSearchGroup;
- (void)_cancelGALSearch;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (BOOL)shouldShowGroups;
- (id)currentTableView;
- (void)setSearchPalette:(id)arg1;
- (id)searchPalette;
- (void)_updateEmptyTableViewAnimated:(BOOL)arg1;
- (void)_reselectLastSelectedCellIfNeeded;
- (id)tableViewPathToMember:(void*)arg1;
- (int)globalIndexOfMember:(void*)arg1;
- (BOOL)isSearching;
- (id)searchDataSource;
- (id)membersDataSource;
- (void)_updateRowsHeights;
- (id)contactsFilter;
- (id)membersControllerDelegate;
- (void)_applyStylesToTableView:(id)arg1;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)_reloadFontSizes;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)reload;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (id)contentView;
- (void)dealloc;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (BOOL)_shouldDeactivateOnCancelButtonClicked;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)tableView;
- (BOOL)shouldShowIndex;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)operationQueue;

@end
