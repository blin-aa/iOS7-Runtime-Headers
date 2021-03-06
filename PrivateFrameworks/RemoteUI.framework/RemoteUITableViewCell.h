/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIImageView, UIView;

@interface RemoteUITableViewCell : UITableViewCell  {
    UIImageView *_invalidRowView;
    BOOL _forceFullDetailLabel;
    BOOL _leftAlignDetailLabel;
    int _remoteUIAccessoryType;
    UIView *_remoteUIAccessoryView;
}

@property BOOL forceFullSizeDetailLabel;
@property BOOL leftAlignDetailLabel;
@property int remoteUIAccessoryType;
@property(retain) UIView * remoteUIAccessoryView;


- (id)remoteUIAccessoryView;
- (int)remoteUIAccessoryType;
- (void)setLeftAlignDetailLabel:(BOOL)arg1;
- (BOOL)leftAlignDetailLabel;
- (void)setForceFullSizeDetailLabel:(BOOL)arg1;
- (BOOL)forceFullSizeDetailLabel;
- (void)setRowInvalid:(BOOL)arg1;
- (void)setRemoteUIAccessoryType:(int)arg1;
- (void)_accessoriesChanged;
- (void)setRemoteUIAccessoryView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
