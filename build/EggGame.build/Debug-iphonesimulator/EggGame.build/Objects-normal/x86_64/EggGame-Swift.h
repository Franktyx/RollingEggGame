// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import SpriteKit;
@import Foundation;
@import CoreFoundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC7EggGame11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SKSpriteNode;
@class SKAction;
@class UILabel;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7EggGame19AssetViewController")
@interface AssetViewController : UIViewController
@property (nonatomic, readonly) CGFloat screenWidth;
@property (nonatomic, readonly) CGFloat screenHeight;
- (SKSpriteNode * __nonnull)initBall:(CGPoint)position size:(CGSize)size;
- (SKSpriteNode * __nonnull)initHen:(CGPoint)position size:(CGSize)size;
- (SKSpriteNode * __nonnull)initBasket:(CGPoint)position size:(CGSize)size actionArray:(NSArray<SKAction *> * __nonnull)actionArray;
- (SKSpriteNode * __nonnull)initFramework;
- (SKSpriteNode * __nonnull)initLeftEdge;
- (SKSpriteNode * __nonnull)initRightEdge;
- (SKSpriteNode * __nonnull)initUpEdge;
- (SKSpriteNode * __nonnull)initTriangle:(NSString * __nonnull)name;
- (SKSpriteNode * __nonnull)initArrow:(CGPoint)position size:(CGSize)size;
- (SKSpriteNode * __nonnull)initDoubleTriangle:(NSString * __nonnull)name;
- (SKSpriteNode * __nonnull)initCloud:(NSString * __nonnull)name;
- (UILabel * __nonnull)initCloudBack;
- (UILabel * __nonnull)initCloudNum;
- (SKSpriteNode * __nonnull)initStick:(NSString * __nonnull)name;
- (SKSpriteNode * __nonnull)initStickRotation:(NSString * __nonnull)name;
- (UILabel * __nonnull)initRectBack;
- (UILabel * __nonnull)initRectNum;
- (UILabel * __nonnull)initStickBack;
- (UILabel * __nonnull)initStickNum;
- (UILabel * __nonnull)initDoubleTriBack;
- (UILabel * __nonnull)initDoubleTriNum;
- (SKSpriteNode * __nonnull)initTrampoline:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initSharpRock:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initFireball:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initExplode:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initWind:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initWindRight:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initBubble:(NSString * __nonnull)name position:(CGPoint)position;
- (SKSpriteNode * __nonnull)initStar:(NSString * __nonnull)name position:(CGPoint)position;
- (SKAction * __nonnull)initExplodeEffect;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;
@class UIImageView;
@class UIButton;
@class UIVisualEffectView;
@class SKView;
@class UIRotationGestureRecognizer;
@class UITouch;
@class UIEvent;
@class SKPhysicsContact;

SWIFT_CLASS("_TtC7EggGame9GameScene")
@interface GameScene : SKScene <SKPhysicsContactDelegate>
@property (nonatomic) NSInteger currentLevel;
@property (nonatomic, readonly) CGFloat screenWidth;
@property (nonatomic, readonly) CGFloat screenHeight;
@property (nonatomic) BOOL keepUpdate;
@property (nonatomic) NSTimeInterval lastYieldTimeInterval;
@property (nonatomic) NSTimeInterval lastUpdateTimeInterval;
@property (nonatomic) NSTimeInterval timeSinceLastUpdate;
@property (nonatomic, strong) SKSpriteNode * __nonnull example;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified ball;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified hen;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified basket;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified rect0;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified rect1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified doubleTri0;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified doubleTri1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified stick0;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified stick1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified stickRotate0;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified stickRotate1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified wind_1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified wind_2;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified wind_3;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified cloud0;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified cloud1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified background;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified star_1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified star_2;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified star_3;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified fireball_1;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified fireball_2;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified fireball_3;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified bubble;
@property (nonatomic, strong) UILabel * __null_unspecified rectBack;
@property (nonatomic, strong) UILabel * __null_unspecified rectNum;
@property (nonatomic, strong) UILabel * __null_unspecified stickBack;
@property (nonatomic, strong) UILabel * __null_unspecified stickNum;
@property (nonatomic, strong) UILabel * __null_unspecified doubleTriBack;
@property (nonatomic, strong) UILabel * __null_unspecified doubleTriNum;
@property (nonatomic, strong) UILabel * __null_unspecified cloudBack;
@property (nonatomic, strong) UILabel * __null_unspecified cloudNum;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified framework;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified redArrow;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified leftEdge;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified rightEdge;
@property (nonatomic, strong) SKSpriteNode * __null_unspecified upEdge;
@property (nonatomic, copy) NSArray<SKAction *> * __nonnull basketAction;
@property (nonatomic, strong) UIView * __null_unspecified bloodLabel;
@property (nonatomic, strong) UIImageView * __null_unspecified bloodOne;
@property (nonatomic, strong) UIImageView * __null_unspecified bloodTwo;
@property (nonatomic, strong) UIImageView * __null_unspecified bloodThree;
@property (nonatomic) NSInteger HP;
@property (nonatomic) CGFloat lastCrackVelocity;
@property (nonatomic, copy) NSString * __null_unspecified lastCollideObject;
@property (nonatomic) CGFloat initialSpeed;
@property (nonatomic) BOOL speedFlag;
@property (nonatomic) BOOL isPlaceRectangle;
@property (nonatomic) BOOL isPlaceStick;
@property (nonatomic, copy) NSString * __nonnull temp;
@property (nonatomic, strong) UIButton * __nonnull menuButton;
@property (nonatomic, strong) UIButton * __nonnull playButton;
@property (nonatomic, strong) UIButton * __nonnull transparentButton_chicken;
@property (nonatomic, strong) UIView * __null_unspecified menuView;
@property (nonatomic, strong) UIButton * __null_unspecified syncProgress;
@property (nonatomic, strong) UIButton * __null_unspecified resetAssetsButton;
@property (nonatomic, strong) UIButton * __null_unspecified returnGameSelectionButton;
@property (nonatomic, strong) UIButton * __null_unspecified transparentButton;
@property (nonatomic, strong) UIVisualEffectView * __null_unspecified blurView;
@property (nonatomic, strong) UIVisualEffectView * __null_unspecified endBlurView;
@property (nonatomic) BOOL star1Removed;
@property (nonatomic) BOOL star2Removed;
@property (nonatomic) BOOL star3Removed;
@property (nonatomic) NSInteger starCollideCount;
@property (nonatomic, strong) UILabel * __null_unspecified mainLabel;
@property (nonatomic, strong) UIButton * __null_unspecified nextLevel;
@property (nonatomic, strong) UIButton * __null_unspecified playAgain;
@property (nonatomic, strong) UIButton * __null_unspecified goToLevelSelection;
@property (nonatomic, strong) UIImageView * __null_unspecified starScoreImageView;
@property (nonatomic, strong) UIImageView * __null_unspecified starImage1;
@property (nonatomic, strong) UIImageView * __null_unspecified starImage2;
@property (nonatomic, strong) UIImageView * __null_unspecified starImage3;
@property (nonatomic, strong) UILabel * __null_unspecified currentScoreLabel;
@property (nonatomic, strong) AssetViewController * __null_unspecified assetViewController;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToView:(SKView * __nonnull)view;
- (void)addTansP_chicken;
- (void)initLevel;
- (void)addHen;
- (void)addBall;
- (void)addBasket;
- (void)initStars;
- (void)addSharpRock;
- (void)addWind;
- (void)addwindRight;
- (void)addTram;
- (void)addFireBall;
- (void)addBubble;
- (void)rotateStick:(UIRotationGestureRecognizer * __nonnull)recognizer;
- (void)tapped;
- (void)update:(CFTimeInterval)currentTime;
- (void)touchesBegan:(NSSet<UITouch *> * __nonnull)touches withEvent:(UIEvent * __nullable)event;
- (void)blowerAction:(SKSpriteNode * __nonnull)blower blowVector:(CGVector)blowVector;
- (CGFloat)distance:(CGPoint)first second:(CGPoint)second;
- (void)moveEGGUp:(SKSpriteNode * __nonnull)blower;
- (void)touchesMoved:(NSSet<UITouch *> * __nonnull)touches withEvent:(UIEvent * __nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * __nonnull)touches withEvent:(UIEvent * __nullable)event;
- (void)checkPartsNumber;
- (void)didBeginContact:(SKPhysicsContact * __nonnull)contact;
- (void)basketDidCollideWithBall:(SKSpriteNode * __nonnull)basket ball:(SKSpriteNode * __nonnull)ball;
- (void)sharpRockDidCollideWithBall;
- (void)bubbleDidCollideWithBall;
- (void)initMenu;
- (void)freezeGame;
- (void)resumeGame;
- (void)goToMenu:(UIButton * __nonnull)sender;
- (void)goBackGame:(UIButton * __nonnull)sender;
- (void)dismissMenuView:(UIButton * __nonnull)sender;
- (void)returnGameSelection:(UIButton * __nonnull)sender;
- (void)resetGame:(UIButton * __nonnull)sender;
- (void)transitToNextScene;
- (void)gameEnd:(BOOL)didWin;
- (void)nextLevel:(UIButton * __nonnull)sender;
- (void)transitionToLevelSelection:(UIButton * __nonnull)sender;
@end

@class CAShapeLayer;
@class UIBezierPath;

SWIFT_CLASS("_TtC7EggGame18GameSelectionScene")
@interface GameSelectionScene : SKScene
@property (nonatomic, strong) UIView * __null_unspecified mainView;
@property (nonatomic, strong) UIButton * __null_unspecified backButton;
@property (nonatomic, readonly) CGFloat screenWidth;
@property (nonatomic, readonly) CGFloat screenHeight;
@property (nonatomic, strong) UIButton * __null_unspecified levelOne;
@property (nonatomic, strong) UILabel * __null_unspecified levelOneLabel;
@property (nonatomic, strong) UIButton * __null_unspecified levelTwo;
@property (nonatomic, strong) UILabel * __null_unspecified levelTwoLabel;
@property (nonatomic, strong) UIButton * __null_unspecified levelThree;
@property (nonatomic, strong) UILabel * __null_unspecified levelThreeLabel;
@property (nonatomic, strong) UIButton * __null_unspecified levelFour;
@property (nonatomic, strong) UILabel * __null_unspecified levelFourLabel;
@property (nonatomic, strong) UIButton * __null_unspecified levelFive;
@property (nonatomic, strong) UILabel * __null_unspecified levelFiveLabel;
@property (nonatomic, strong) CAShapeLayer * __null_unspecified lineLayer;
@property (nonatomic, strong) UIBezierPath * __null_unspecified bezierPath;
@property (nonatomic, strong) CAShapeLayer * __null_unspecified lineLayer2;
@property (nonatomic, strong) CAShapeLayer * __null_unspecified lineLayer3;
@property (nonatomic, strong) CAShapeLayer * __null_unspecified lineLayer4;
@property (nonatomic, strong) UIImageView * __null_unspecified backgroundImageView;
@property (nonatomic, strong) UIView * __null_unspecified navigationLabel;
@property (nonatomic, strong) UIButton * __null_unspecified rightButton;
@property (nonatomic, strong) UIView * __null_unspecified rightButtonView;
@property (nonatomic, strong) UIButton * __null_unspecified leftButton;
@property (nonatomic, strong) UIView * __null_unspecified leftButtonView;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarScoreImageView1;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarScoreImageView2;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarScoreImageView3;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarScoreImageView4;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarScoreImageView5;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarImage1;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarImage2;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarImage3;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarImage4;
@property (nonatomic, strong) UIImageView * __null_unspecified levelStarImage5;
- (void)didMoveToView:(SKView * __nonnull)view;
- (UIBezierPath * __nonnull)drawLineFromPoint:(CGPoint)start toPoint:(CGPoint)end;
- (void)goToLevel:(UIButton * __nonnull)sender;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7EggGame18GameViewController")
@interface GameViewController : UIViewController
@property (nonatomic, readonly) CGFloat screenWidth;
@property (nonatomic, readonly) CGFloat screenHeight;
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7EggGame10Level_Five")
@interface Level_Five : GameScene
- (void)initLevel;
- (void)addHen;
- (void)addBall;
- (void)addBasket;
- (void)initStars;
- (void)addWind;
- (void)addTansP_chicken;
- (void)addBubble;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7EggGame10Level_Four")
@interface Level_Four : GameScene
- (void)initLevel;
- (void)addHen;
- (void)addBall;
- (void)addBasket;
- (void)addTram;
- (void)initStars;
- (void)addWind;
- (void)addTansP_chicken;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7EggGame9Level_One")
@interface Level_One : GameScene
- (void)addHen;
- (void)addBall;
- (void)addBasket;
- (void)initStars;
- (void)initLevel;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7EggGame11Level_Three")
@interface Level_Three : GameScene
- (void)initLevel;
- (void)addHen;
- (void)addBall;
- (void)addBasket;
- (void)initStars;
- (void)addFireBall;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7EggGame9Level_Two")
@interface Level_Two : GameScene
- (void)initLevel;
- (void)addHen;
- (void)addBall;
- (void)addBasket;
- (void)initStars;
- (void)addSharpRock;
- (void)addTram;
- (void)addTansP_chicken;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIView (SWIFT_EXTENSION(EggGame))
- (void)roundCorners:(UIRectCorner)corners radius:(CGFloat)radius;
@end

#pragma clang diagnostic pop
