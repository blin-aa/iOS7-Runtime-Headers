/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SASPhrase : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * interpretations;
@property BOOL lowConfidence;

+ (id)phraseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)phrase;

- (BOOL)lowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setLowConfidence:(BOOL)arg1;
- (id)encodedClassName;
- (id)interpretations;
- (id)groupIdentifier;

@end
