#import <Foundation/Foundation.h>
#import "SystranObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SystranErrorResponse.h"
#import "SystranLidDetectedLanguage.h"


@protocol SystranLidDocumentResponse
@end

@interface SystranLidDocumentResponse : SystranObject

/* Error at request level [optional]
 */
@property(nonatomic) SystranErrorResponse* error;
/* Array of detected languages 
 */
@property(nonatomic) NSArray<SystranLidDetectedLanguage>* detectedLanguages;

@end
