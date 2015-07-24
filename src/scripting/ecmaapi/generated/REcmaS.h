// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAS_H
        #define RECMAS_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RS.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaS {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        compare
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCpuCores
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHostId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSystemId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWindowManagerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirectoryList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFileList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFontList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPatternList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RS* getSelf(const QString& fName, QScriptContext* context)
    ;static RS* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumMessageType(QScriptEngine* engine, const RS::MessageType& value)
    ;static  void fromScriptValueEnumMessageType(const QScriptValue& value, RS::MessageType& out)
    ;static  QScriptValue toScriptValueEnumEntityType(QScriptEngine* engine, const RS::EntityType& value)
    ;static  void fromScriptValueEnumEntityType(const QScriptValue& value, RS::EntityType& out)
    ;static  QScriptValue toScriptValueEnumProjectionRenderingHint(QScriptEngine* engine, const RS::ProjectionRenderingHint& value)
    ;static  void fromScriptValueEnumProjectionRenderingHint(const QScriptValue& value, RS::ProjectionRenderingHint& out)
    ;static  QScriptValue toScriptValueEnumSide(QScriptEngine* engine, const RS::Side& value)
    ;static  void fromScriptValueEnumSide(const QScriptValue& value, RS::Side& out)
    ;static  QScriptValue toScriptValueEnumEnding(QScriptEngine* engine, const RS::Ending& value)
    ;static  void fromScriptValueEnumEnding(const QScriptValue& value, RS::Ending& out)
    ;static  QScriptValue toScriptValueEnumVAlign(QScriptEngine* engine, const RS::VAlign& value)
    ;static  void fromScriptValueEnumVAlign(const QScriptValue& value, RS::VAlign& out)
    ;static  QScriptValue toScriptValueEnumHAlign(QScriptEngine* engine, const RS::HAlign& value)
    ;static  void fromScriptValueEnumHAlign(const QScriptValue& value, RS::HAlign& out)
    ;static  QScriptValue toScriptValueEnumTextDrawingDirection(QScriptEngine* engine, const RS::TextDrawingDirection& value)
    ;static  void fromScriptValueEnumTextDrawingDirection(const QScriptValue& value, RS::TextDrawingDirection& out)
    ;static  QScriptValue toScriptValueEnumTextLineSpacingStyle(QScriptEngine* engine, const RS::TextLineSpacingStyle& value)
    ;static  void fromScriptValueEnumTextLineSpacingStyle(const QScriptValue& value, RS::TextLineSpacingStyle& out)
    ;static  QScriptValue toScriptValueEnumFrom(QScriptEngine* engine, const RS::From& value)
    ;static  void fromScriptValueEnumFrom(const QScriptValue& value, RS::From& out)
    ;static  QScriptValue toScriptValueEnumIsoProjectionType(QScriptEngine* engine, const RS::IsoProjectionType& value)
    ;static  void fromScriptValueEnumIsoProjectionType(const QScriptValue& value, RS::IsoProjectionType& out)
    ;static  QScriptValue toScriptValueEnumUnit(QScriptEngine* engine, const RS::Unit& value)
    ;static  void fromScriptValueEnumUnit(const QScriptValue& value, RS::Unit& out)
    ;static  QScriptValue toScriptValueEnumAngleFormat(QScriptEngine* engine, const RS::AngleFormat& value)
    ;static  void fromScriptValueEnumAngleFormat(const QScriptValue& value, RS::AngleFormat& out)
    ;static  QScriptValue toScriptValueEnumLinearFormat(QScriptEngine* engine, const RS::LinearFormat& value)
    ;static  void fromScriptValueEnumLinearFormat(const QScriptValue& value, RS::LinearFormat& out)
    ;static  QScriptValue toScriptValueEnumAngleUnit(QScriptEngine* engine, const RS::AngleUnit& value)
    ;static  void fromScriptValueEnumAngleUnit(const QScriptValue& value, RS::AngleUnit& out)
    ;static  QScriptValue toScriptValueEnumKnownVariable(QScriptEngine* engine, const RS::KnownVariable& value)
    ;static  void fromScriptValueEnumKnownVariable(const QScriptValue& value, RS::KnownVariable& out)
    ;static  QScriptValue toScriptValueEnumBooleanOperation(QScriptEngine* engine, const RS::BooleanOperation& value)
    ;static  void fromScriptValueEnumBooleanOperation(const QScriptValue& value, RS::BooleanOperation& out)
    ;static  QScriptValue toScriptValueEnumFillType(QScriptEngine* engine, const RS::FillType& value)
    ;static  void fromScriptValueEnumFillType(const QScriptValue& value, RS::FillType& out)
    ;static  QScriptValue toScriptValueEnumOrientation(QScriptEngine* engine, const RS::Orientation& value)
    ;static  void fromScriptValueEnumOrientation(const QScriptValue& value, RS::Orientation& out)
    ;static  QScriptValue toScriptValueEnumJoinType(QScriptEngine* engine, const RS::JoinType& value)
    ;static  void fromScriptValueEnumJoinType(const QScriptValue& value, RS::JoinType& out)
    ;static  QScriptValue toScriptValueEnumEndType(QScriptEngine* engine, const RS::EndType& value)
    ;static  void fromScriptValueEnumEndType(const QScriptValue& value, RS::EndType& out)
    ;};
    #endif
    