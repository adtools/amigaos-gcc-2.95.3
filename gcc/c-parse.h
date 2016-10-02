#ifndef BISON_C_PARSE_H
# define BISON_C_PARSE_H

#ifndef YYSTYPE
typedef union {long itype; tree ttype; enum tree_code code;
	char *filename; int lineno; int ends_in_label; } yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
# define	IDENTIFIER	257
# define	TYPENAME	258
# define	SCSPEC	259
# define	TYPESPEC	260
# define	TYPE_QUAL	261
# define	CONSTANT	262
# define	STRING	263
# define	ELLIPSIS	264
# define	SIZEOF	265
# define	ENUM	266
# define	STRUCT	267
# define	UNION	268
# define	IF	269
# define	ELSE	270
# define	WHILE	271
# define	DO	272
# define	FOR	273
# define	SWITCH	274
# define	CASE	275
# define	DEFAULT	276
# define	BREAK	277
# define	CONTINUE	278
# define	RETURN	279
# define	GOTO	280
# define	ASM_KEYWORD	281
# define	TYPEOF	282
# define	ALIGNOF	283
# define	ATTRIBUTE	284
# define	EXTENSION	285
# define	LABEL	286
# define	REALPART	287
# define	IMAGPART	288
# define	ASSIGN	289
# define	OROR	290
# define	ANDAND	291
# define	EQCOMPARE	292
# define	ARITHCOMPARE	293
# define	LSHIFT	294
# define	RSHIFT	295
# define	UNARY	296
# define	PLUSPLUS	297
# define	MINUSMINUS	298
# define	HYPERUNARY	299
# define	POINTSAT	300
# define	INTERFACE	301
# define	IMPLEMENTATION	302
# define	END	303
# define	SELECTOR	304
# define	DEFS	305
# define	ENCODE	306
# define	CLASSNAME	307
# define	PUBLIC	308
# define	PRIVATE	309
# define	PROTECTED	310
# define	PROTOCOL	311
# define	OBJECTNAME	312
# define	CLASS	313
# define	ALIAS	314
# define	OBJC_STRING	315


extern YYSTYPE yylval;

#endif /* not BISON_C_PARSE_H */
