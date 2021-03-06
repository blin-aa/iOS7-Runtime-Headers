/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_variants;
}

@property(copy) NSSet * variants;

+ (BOOL)supportsSecureCoding;

- (id)_bestVariantForUIFormat:(int)arg1;
- (id)_bestVariantForFormat:(int)arg1;
- (void)addVariant:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variants;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
