/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebVisiblePosition : NSObject  {
    struct WebObjectInternal { } *_internal;
}

@property int affinity;

+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;
+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;

- (BOOL)isEditable;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id*)arg1;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)arg1;
- (BOOL)requiresContextForWordBoundary;
- (BOOL)directionIsDownstream:(int)arg1;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2 withAffinityDownstream:(BOOL)arg3;
- (int)textDirection;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })_visiblePosition;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setAffinity:(int)arg1;
- (id)positionAtStartOrEndOfWord;
- (id)enclosingRangeWithCorrectionIndicator;
- (BOOL)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2;
- (int)distanceFromPosition:(id)arg1;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (BOOL)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (int)affinity;

@end
