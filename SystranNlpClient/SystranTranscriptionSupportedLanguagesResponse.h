#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranSupportedLanguagePair.h"
#import "SystranErrorResponse.h"


@protocol SystranTranscriptionSupportedLanguagesResponse
@end

@interface SystranTranscriptionSupportedLanguagesResponse : SystranObject

/* Error at request level [optional]
 */
@property(nonatomic) SystranErrorResponse* error;
/* Array of supported languages pairs 
 */
@property(nonatomic) NSArray<SystranSupportedLanguagePair>* languagePairs;

@end