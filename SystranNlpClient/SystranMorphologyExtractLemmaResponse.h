#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranLemmaAnnotation.h"
#import "SystranErrorResponse.h"


@protocol SystranMorphologyExtractLemmaResponse
@end

@interface SystranMorphologyExtractLemmaResponse : SystranObject

/* Error at request level [optional]
 */
@property(nonatomic) SystranErrorResponse* error;
/* Lemma text elements 
 */
@property(nonatomic) NSArray<SystranLemmaAnnotation>* lemmas;

@end
