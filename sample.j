.class public sample
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; i:boba

.field private static i I

; quantity:ice

.field private static quantity B

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        sample/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        sample/_standardIn LPascalTextIn;

; i=1

	Integer_Const: 1
	putstatic	sample/i I

; i=i*12

	Integer_Const: 12
	imul
	putstatic	sample/i I

; i=i+10

	Integer_Const: 10
	iadd
	putstatic	sample/i I

; quantity=1

	Integer_Const: 1
	putstatic	sample/quantity I

; milk(i<=25)STARTi=i+25;COMPLETE

	Integer_Const: 25
if_icmple

; i=i+25

	Integer_Const: 25
	iadd
	putstatic	sample/i I

; 


; quantity=0

	Integer_Const: 0
	putstatic	sample/quantity I

	getstatic     sample/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
