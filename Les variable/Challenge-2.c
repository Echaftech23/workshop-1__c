<<<<<<< HEAD
[Project]
FileName=Challenge-2.c
Name=Project1
Type=1
Ver=2
ObjFiles=
Includes=
Libs=
PrivateResource=
ResourceIncludes=
MakeIncludes=
Compiler=
CppCompiler=
Linker=
IsCpp=0
Icon=
ExeOutput=
ObjectOutput=
LogOutput=
LogOutputEnabled=0
OverrideOutput=0
OverrideOutputName=
HostApplication=
UseCustomMakefile=0
CustomMakefile=
CommandLine=
Folders=
IncludeVersionInfo=0
SupportXPThemes=0
CompilerSet=0
CompilerSettings=0000000000000000000000000
UnitCount=1

[VersionInfo]
Major=1
Minor=0
Release=0
Build=0
LanguageID=1033
CharsetID=1252
CompanyName=
FileVersion=
FileDescription=Developed using the Dev-C++ IDE
InternalName=
LegalCopyright=
LegalTrademarks=
OriginalFilename=
ProductName=
ProductVersion=
AutoIncBuildNr=0
SyncProduct=1

[Unit1]
FileName=Challenge-2.c
CompileCpp=0
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=
=======
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char lettre;

	printf("Veuillez saisir une lettre : "); 
	scanf("%c", &lettre);
	
	switch (lettre){
	  case 'a':
	  case 'e':
	  case 'i':
	  case 'u':
	  case 'y':
	  case 'o':	
	  case 'A':
	  case 'E':
	  case 'I':
	  case 'U':
	  case 'Y':	
	  case 'O':
	    printf("Le caractere %c est un voyelle.", lettre);
	  	break;
	  default :
	    printf("Le caratere %c n'est pas un voyelle.", lettre);
		break;	   	    
	}
	  	
	
	return 0;
}
>>>>>>> 75b7939c8a1b55c3ff55cfcb7625023b802403df

