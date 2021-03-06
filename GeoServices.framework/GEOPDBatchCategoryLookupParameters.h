/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchCategoryLookupParameters : PBCodable <NSCopying> {
    NSMutableArray * _categoryLookupParameters;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *categoryLookupParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)categoryLookupParameterType;

- (void).cxx_destruct;
- (void)addCategoryLookupParameter:(id)arg1;
- (id)categoryLookupParameterAtIndex:(unsigned long long)arg1;
- (id)categoryLookupParameters;
- (unsigned long long)categoryLookupParametersCount;
- (void)clearCategoryLookupParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryLookupParameters:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
