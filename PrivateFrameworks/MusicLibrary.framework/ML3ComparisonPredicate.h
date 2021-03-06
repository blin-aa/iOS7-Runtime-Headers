/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate  {
    id _value;
    NSString *_transformFunction;
    int _comparison;
    BOOL _caseInsensitive;
    NSString *_treatNullAsString;
}

@property(retain) id value;
@property int comparison;
@property BOOL caseInsensitive;
@property(copy) NSString * treatNullAsString;
@property(copy) NSString * transformFunction;
@property(readonly) NSString * operator;

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 treatNullAsString:(id)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
+ (id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(int)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;

- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6;
- (id)valueToBindForOperation:(int)arg1;
- (id)operator;
- (id)transformFunction;
- (id)treatNullAsString;
- (BOOL)caseInsensitive;
- (void)setTransformFunction:(id)arg1;
- (void)setTreatNullAsString:(id)arg1;
- (void)setCaseInsensitive:(BOOL)arg1;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (int)comparison;
- (void)setComparison:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (void)setValue:(id)arg1;
- (id)value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
