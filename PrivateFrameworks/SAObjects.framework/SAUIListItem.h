/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSString, NSArray;

@interface SAUIListItem : SAAceView  {
}

@property(copy) NSArray * commands;
@property(retain) <SAAceSerializable> * object;
@property(copy) NSString * selectionResponse;
@property(copy) NSString * selectionText;
@property(copy) NSString * speakableSelectionResponse;
@property(copy) NSString * title;

+ (id)listItem;
+ (id)listItemWithDictionary:(id)arg1 context:(id)arg2;

- (void)setSpeakableSelectionResponse:(id)arg1;
- (id)speakableSelectionResponse;
- (void)setSelectionText:(id)arg1;
- (id)selectionText;
- (void)setSelectionResponse:(id)arg1;
- (id)selectionResponse;
- (id)encodedClassName;
- (id)commands;
- (void)setCommands:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setObject:(id)arg1;
- (id)object;
- (id)groupIdentifier;

@end
