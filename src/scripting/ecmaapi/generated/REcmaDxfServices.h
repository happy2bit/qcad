// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMADXFSERVICES_H
        #define RECMADXFSERVICES_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDxfServices.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaDxfServices {

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
        reset
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixFontName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixQCad2String
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixDimensionLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        detectQCad2Format
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasDIMZIN
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasDIMAZIN
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasInvalidEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2Compatibility
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad3Compatibility
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2LayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2BlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2Font
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2DimensionLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        collectQCad2Info
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2PatternAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2PatternScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getQCad2PatternName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixQCad2HatchData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCodec
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCodec
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        numberToColor24
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        numberToWeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        widthToNumber
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        colorToNumber24
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stringToVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        variableToString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCodeForVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isVariable2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        escapeUnicode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        parseUnicode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        autoFixLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDxfServices* getSelf(const QString& fName, QScriptContext* context)
    ;static RDxfServices* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    