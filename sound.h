#include <csound.h>
#include <csoundCore.h>


// Data Structures
struct  	libsndStatics__
struct  	lineventStatics__
struct  	musmonStatics__
struct  	onefileStatics__
struct  	sread__
 
// Data Fields
// Attributes
MYFLT(* 	GetSr )(CSOUND *)
 
MYFLT(* 	GetKr )(CSOUND *)
 
uint32_t(* 	GetKsmps )(CSOUND *)
 
uint32_t(* 	GetNchnls )(CSOUND *)
//  	Get number of output channels. More...
 
uint32_t(* 	GetNchnls_i )(CSOUND *)
//  	Get number of input channels. More...
 
MYFLT(* 	Get0dBFS )(CSOUND *)
 
uint64_t(* 	GetKcounter )(CSOUND *)
//  	Get number of control blocks elapsed. More...
 
int64_t(* 	GetCurrentTimeSamples )(CSOUND *)
 
long(* 	GetInputBufferSize )(CSOUND *)
 
long(* 	GetOutputBufferSize )(CSOUND *)
 
MYFLT *(* 	GetInputBuffer )(CSOUND *)
 
MYFLT *(* 	GetOutputBuffer )(CSOUND *)
 
void(* 	SetDebug )(CSOUND *, int d)
//  	Set internal debug mode. More...
 
int(* 	GetDebug )(CSOUND *)
 
int(* 	GetSizeOfMYFLT )(void)
 
void(* 	GetOParms )(CSOUND *, OPARMS *)
 
const char *(* 	GetEnv )(CSOUND *, const char *name)
//  	Get environment variable. More...
 
// Message printout
CS_PRINTF2 void(* 	Message )(CSOUND *, const char *fmt,...)
 
CS_PRINTF3 void(* 	MessageS )(CSOUND *, int attr, const char *fmt,...)
 
void(* 	MessageV )(CSOUND *, int attr, const char *format, va_list args)
 
int(* 	GetMessageLevel )(CSOUND *)
 
void(* 	SetMessageLevel )(CSOUND *, int messageLevel)
 
void(* 	SetMessageCallback )(CSOUND *, void(*csoundMessageCallback)(CSOUND *, int attr, const char *format, va_list valist))
 
// Event and MIDI functionality for opcodes
int(* 	SetReleaseLength )(void *p, int n)
 
MYFLT(* 	SetReleaseLengthSeconds )(void *p, MYFLT n)
 
int(* 	GetMidiChannelNumber )(void *p)
 
MCHNBLK *(* 	GetMidiChannel )(void *p)
 
int(* 	GetMidiNoteNumber )(void *p)
 
int(* 	GetMidiVelocity )(void *p)
 
int(* 	GetReleaseFlag )(void *p)
 
double(* 	GetOffTime )(void *p)
 
MYFLT *(* 	GetPFields )(void *p)
 
int(* 	GetInstrumentNumber )(void *p)
 
int(* 	GetZakBounds )(CSOUND *, MYFLT **)
 
int(* 	GetTieFlag )(CSOUND *)
 
int(* 	GetReinitFlag )(CSOUND *)
 
int(* 	GetStrsmax )(CSOUND *)
//  	Current maximum number of strings, accessible through the strset and strget opcodes. More...
 
char *(* 	GetStrsets )(CSOUND *, long)
 
MYFLT(* 	Pow2 )(CSOUND *, MYFLT a)
 
MYFLT(* 	intpow )(MYFLT, int32)
 
char *(* 	type2string )(int type)
 
// Arguments to opcodes
CS_TYPE *(* 	GetTypeForArg )(void *p)
 
int(* 	GetInputArgCnt )(void *p)
 
char *(* 	GetInputArgName )(void *p, int n)
 
int(* 	GetOutputArgCnt )(void *p)
 
char *(* 	GetOutputArgName )(void *p, int n)
 
char *(* 	GetString )(CSOUND *, MYFLT)
 
int32(* 	strarg2insno )(CSOUND *, void *p, int is_string)
 
char *(* 	strarg2name )(CSOUND *, char *, void *, const char *, int)
 
// Memory allocation
void(* 	AuxAlloc )(CSOUND *, size_t nbytes, AUXCH *auxchp)
 
void *(* 	Malloc )(CSOUND *, size_t nbytes)
 
void *(* 	Calloc )(CSOUND *, size_t nbytes)
 
void *(* 	ReAlloc )(CSOUND *, void *oldp, size_t nbytes)
 
char *(* 	Strdup )(CSOUND *, char *)
 
void(* 	Free )(CSOUND *, void *ptr)
 
// Function tables
int(* 	hfgens )(CSOUND *, FUNC **, const EVTBLK *, int)
 
int(* 	FTAlloc )(CSOUND *, int tableNum, int len)
 
int(* 	FTDelete )(CSOUND *, int tableNum)
 
FUNC *(* 	FTFind )(CSOUND *, MYFLT *argp)
//  	Find tables with power of two size. More...
 
FUNC *(* 	FTFindP )(CSOUND *, MYFLT *argp)
//  	Find any table, except deferred load tables. More...
 
FUNC *(* 	FTnp2Find )(CSOUND *, MYFLT *argp)
//  	Find any table. More...
 
int(* 	GetTable )(CSOUND *, MYFLT **tablePtr, int tableNum)
 
int(* 	TableLength )(CSOUND *, int table)
 
MYFLT(* 	TableGet )(CSOUND *, int table, int index)
 
void(* 	TableSet )(CSOUND *, int table, int index, MYFLT value)
 
void *(* 	GetNamedGens )(CSOUND *)
 
// Global and config variable manipulation
int(* 	CreateGlobalVariable )(CSOUND *, const char *name, size_t nbytes)
 
void *(* 	QueryGlobalVariable )(CSOUND *, const char *name)
 
void *(* 	QueryGlobalVariableNoCheck )(CSOUND *, const char *name)
 
int(* 	DestroyGlobalVariable )(CSOUND *, const char *name)
 
int(* 	CreateConfigurationVariable )(CSOUND *, const char *name, void *p, int type, int flags, void *min, void *max, const char *shortDesc, const char *longDesc)
 
int(* 	SetConfigurationVariable )(CSOUND *, const char *name, void *value)
 
int(* 	ParseConfigurationVariable )(CSOUND *, const char *name, const char *value)
 
csCfgVariable_t *(* 	QueryConfigurationVariable )(CSOUND *, const char *name)
 
csCfgVariable_t **(* 	ListConfigurationVariables )(CSOUND *)
 
int(* 	DeleteConfigurationVariable )(CSOUND *, const char *name)
 
const char *(* 	CfgErrorCodeToString )(int errcode)
 
// FFT support
MYFLT(* 	GetInverseComplexFFTScale )(CSOUND *, int FFTsize)
 
MYFLT(* 	GetInverseRealFFTScale )(CSOUND *, int FFTsize)
 
void(* 	ComplexFFT )(CSOUND *, MYFLT *buf, int FFTsize)
 
void(* 	InverseComplexFFT )(CSOUND *, MYFLT *buf, int FFTsize)
 
void(* 	RealFFT )(CSOUND *, MYFLT *buf, int FFTsize)
 
void(* 	InverseRealFFT )(CSOUND *, MYFLT *buf, int FFTsize)
 
void(* 	RealFFTMult )(CSOUND *, MYFLT *outbuf, MYFLT *buf1, MYFLT *buf2, int FFTsize, MYFLT scaleFac)
 
void(* 	RealFFTnp2 )(CSOUND *, MYFLT *buf, int FFTsize)
 
void(* 	InverseRealFFTnp2 )(CSOUND *, MYFLT *buf, int FFTsize)
 
// PVOC-EX system
int(* 	PVOC_CreateFile )(CSOUND *, const char *, uint32, uint32, uint32, uint32, int32, int, int, float, float *, uint32)
 
int(* 	PVOC_OpenFile )(CSOUND *, const char *, void *, void *)
 
int(* 	PVOC_CloseFile )(CSOUND *, int)
 
int(* 	PVOC_PutFrames )(CSOUND *, int, const float *, int32)
 
int(* 	PVOC_GetFrames )(CSOUND *, int, float *, uint32)
 
int(* 	PVOC_FrameCount )(CSOUND *, int)
 
int(* 	PVOC_fseek )(CSOUND *, int, int)
 
const char *(* 	PVOC_ErrorString )(CSOUND *)
 
int(* 	PVOCEX_LoadFile )(CSOUND *, const char *, PVOCEX_MEMFILE *)
 
// Error messages
CS_NORETURN CS_PRINTF2 void(* 	Die )(CSOUND *, const char *msg,...)
 
CS_PRINTF2 int(* 	InitError )(CSOUND *, const char *msg,...)
 
CS_PRINTF3 int(* 	PerfError )(CSOUND *, OPDS *h, const char *msg,...)
 
CS_PRINTF2 void(* 	Warning )(CSOUND *, const char *msg,...)
 
CS_PRINTF2 void(* 	DebugMsg )(CSOUND *, const char *msg,...)
 
CS_NORETURN void(* 	LongJmp )(CSOUND *, int)
 
CS_PRINTF2 void(* 	ErrorMsg )(CSOUND *, const char *fmt,...)
 
void(* 	ErrMsgV )(CSOUND *, const char *hdr, const char *fmt, va_list)
 
// Random numbers
uint32_t(* 	GetRandomSeedFromTime )(void)
 
void(* 	SeedRandMT )(CsoundRandMTState *p, const uint32_t *initKey, uint32_t keyLength)
 
uint32_t(* 	RandMT )(CsoundRandMTState *p)
 
int(* 	Rand31 )(int *seedVal)
 
int(* 	GetRandSeed )(CSOUND *, int which)
 
// Threads and locks
void *(* 	CreateThread )(uintptr_t(*threadRoutine)(void *), void *userdata)
 
uintptr_t(* 	JoinThread )(void *thread)
 
void *(* 	CreateThreadLock )(void)
 
void(* 	DestroyThreadLock )(void *lock)
 
int(* 	WaitThreadLock )(void *lock, size_t milliseconds)
 
void(* 	NotifyThreadLock )(void *lock)
 
void(* 	WaitThreadLockNoTimeout )(void *lock)
 
void *(* 	Create_Mutex )(int isRecursive)
 
int(* 	LockMutexNoWait )(void *mutex_)
 
void(* 	LockMutex )(void *mutex_)
 
void(* 	UnlockMutex )(void *mutex_)
 
void(* 	DestroyMutex )(void *mutex_)
 
void *(* 	CreateBarrier )(unsigned int max)
 
int(* 	DestroyBarrier )(void *)
 
int(* 	WaitBarrier )(void *)
 
void *(* 	GetCurrentThreadID )(void)
 
void(* 	Sleep )(size_t milliseconds)
 
void(* 	InitTimerStruct )(RTCLOCK *)
 
double(* 	GetRealTime )(RTCLOCK *)
 
double(* 	GetCPUTime )(RTCLOCK *)
 
// Circular lock-free buffer
void *(* 	CreateCircularBuffer )(CSOUND *, int, int)
 
int(* 	ReadCircularBuffer )(CSOUND *, void *, void *, int)
 
int(* 	WriteCircularBuffer )(CSOUND *, void *, const void *, int)
 
void(* 	FlushCircularBuffer )(CSOUND *, void *)
 
void(* 	DestroyCircularBuffer )(CSOUND *, void *)
 
// File access
char *(* 	FindInputFile )(CSOUND *, const char *filename, const char *envList)
 
char *(* 	FindOutputFile )(CSOUND *, const char *filename, const char *envList)
 
void *(* 	SAsndgetset )(CSOUND *, char *, void *, MYFLT *, MYFLT *, MYFLT *, int)
 
void *(* 	sndgetset )(CSOUND *, void *)
 
int(* 	getsndin )(CSOUND *, void *, MYFLT *, int, void *)
 
void(* 	rewriteheader )(void *ofd)
 
SNDMEMFILE *(* 	LoadSoundFile )(CSOUND *, const char *, void *)
 
void(* 	FDRecord )(CSOUND *, FDCH *fdchp)
 
void(* 	FDClose )(CSOUND *, FDCH *fdchp)
 
void *(* 	CreateFileHandle )(CSOUND *, void *, int, const char *)
 
char *(* 	GetFileName )(void *)
 
int(* 	FileClose )(CSOUND *, void *)
 
void *(* 	FileOpen2 )(CSOUND *, void *, int, const char *, void *, const char *, int, int)
 
int(* 	type2csfiletype )(int type, int encoding)
 
void(* 	NotifyFileOpened )(CSOUND *, const char *, int, int, int)
 
int(* 	sftype2csfiletype )(int type)
 
MEMFIL *(* 	ldmemfile2withCB )(CSOUND *, const char *, int, int(*callback)(CSOUND *, MEMFIL *))
 
void *(* 	FileOpenAsync )(CSOUND *, void *, int, const char *, void *, const char *, int, int, int)
 
unsigned int(* 	ReadAsync )(CSOUND *, void *, MYFLT *, int)
 
unsigned int(* 	WriteAsync )(CSOUND *, void *, MYFLT *, int)
 
int(* 	FSeekAsync )(CSOUND *, void *, int, int)
 
char *(* 	getstrformat )(int format)
 
int(* 	sfsampsize )(int format)
 
// RT audio IO and callbacks
void(* 	SetPlayopenCallback )(CSOUND *, int(*playopen__)(CSOUND *, const csRtAudioParams *parm))
 
void(* 	SetRtplayCallback )(CSOUND *, void(*rtplay__)(CSOUND *, const MYFLT *outBuf, int nbytes))
 
void(* 	SetRecopenCallback )(CSOUND *, int(*recopen__)(CSOUND *, const csRtAudioParams *parm))
 
void(* 	SetRtrecordCallback )(CSOUND *, int(*rtrecord__)(CSOUND *, MYFLT *inBuf, int nbytes))
 
void(* 	SetRtcloseCallback )(CSOUND *, void(*rtclose__)(CSOUND *))
 
void(* 	SetAudioDeviceListCallback )(CSOUND *csound, int(*audiodevlist__)(CSOUND *, CS_AUDIODEVICE *list, int isOutput))
 
void **(* 	GetRtRecordUserData )(CSOUND *)
 
void **(* 	GetRtPlayUserData )(CSOUND *)
 
int(* 	GetDitherMode )(CSOUND *)
 
// RT MIDI and callbacks
void(* 	SetExternalMidiInOpenCallback )(CSOUND *, int(*func)(CSOUND *, void **, const char *))
 
void(* 	SetExternalMidiReadCallback )(CSOUND *, int(*func)(CSOUND *, void *, unsigned char *, int))
 
void(* 	SetExternalMidiInCloseCallback )(CSOUND *, int(*func)(CSOUND *, void *))
 
void(* 	SetExternalMidiOutOpenCallback )(CSOUND *, int(*func)(CSOUND *, void **, const char *))
 
void(* 	SetExternalMidiWriteCallback )(CSOUND *, int(*func)(CSOUND *, void *, const unsigned char *, int))
 
void(* 	SetExternalMidiOutCloseCallback )(CSOUND *, int(*func)(CSOUND *, void *))
 
void(* 	SetExternalMidiErrorStringCallback )(CSOUND *, const char *(*func)(int))
 
void(* 	SetMIDIDeviceListCallback )(CSOUND *csound, int(*audiodevlist__)(CSOUND *, CS_MIDIDEVICE *list, int isOutput))
 
void(* 	module_list_add )(CSOUND *, char *, char *)
 
// Displays & graphs
void(* 	dispset )(CSOUND *, WINDAT *, MYFLT *, int32, char *, int, char *)
 
void(* 	display )(CSOUND *, WINDAT *)
 
int(* 	dispexit )(CSOUND *)
 
void(* 	dispinit )(CSOUND *)
 
int(* 	SetIsGraphable )(CSOUND *, int isGraphable)
 
void(* 	SetMakeGraphCallback )(CSOUND *, void(*makeGraphCallback)(CSOUND *, WINDAT *p, const char *name))
 
void(* 	SetDrawGraphCallback )(CSOUND *, void(*drawGraphCallback)(CSOUND *, WINDAT *p))
 
void(* 	SetKillGraphCallback )(CSOUND *, void(*killGraphCallback)(CSOUND *, WINDAT *p))
 
void(* 	SetExitGraphCallback )(CSOUND *, int(*exitGraphCallback)(CSOUND *))
 
// Generic callbacks
void(* 	SetYieldCallback )(CSOUND *, int(*yieldCallback)(CSOUND *))
 
int(* 	Set_KeyCallback )(CSOUND *, int(*func)(void *, void *, unsigned int), void *userData, unsigned int typeMask)
 
void(* 	Remove_KeyCallback )(CSOUND *, int(*func)(void *, void *, unsigned int))
 
int(* 	RegisterSenseEventCallback )(CSOUND *, void(*func)(CSOUND *, void *), void *userData)
 
int(* 	RegisterDeinitCallback )(CSOUND *, void *p, int(*func)(CSOUND *, void *))
 
int(* 	RegisterResetCallback )(CSOUND *, void *userData, int(*func)(CSOUND *, void *))
 
void(* 	SetInternalYieldCallback )(CSOUND *, int(*yieldCallback)(CSOUND *))
 
// Opcodes and instruments
int(* 	AppendOpcode )(CSOUND *, const char *opname, int dsblksiz, int flags, int thread, const char *outypes, const char *intypes, int(*iopadr)(CSOUND *, void *), int(*kopadr)(CSOUND *, void *), int(*aopadr)(CSOUND *, void *))
 
int(* 	AppendOpcodes )(CSOUND *, const OENTRY *opcodeList, int n)
 
char *(* 	GetOpcodeName )(void *p)
 
INSTRTXT **(* 	GetInstrumentList )(CSOUND *)
 
// Events and performance
int(* 	CheckEvents )(CSOUND *)
 
int(* 	insert_score_event )(CSOUND *, EVTBLK *, double)
 
int(* 	insert_score_event_at_sample )(CSOUND *, EVTBLK *, int64_t)
 
int(* 	PerformKsmps )(CSOUND *)
 
// Utilities
int(* 	AddUtility )(CSOUND *, const char *name, int(*UtilFunc)(CSOUND *, int, char **))
 
int(* 	RunUtility )(CSOUND *, const char *name, int argc, char **argv)
 
char **(* 	ListUtilities )(CSOUND *)
 
int(* 	SetUtilityDescription )(CSOUND *, const char *utilName, const char *utilDesc)
 
const char *(* 	GetUtilityDescription )(CSOUND *, const char *utilName)
 
void(* 	SetUtilSr )(CSOUND *, MYFLT)
 
void(* 	SetUtilNchnls )(CSOUND *, int)
 
// Miscellaneous
long(* 	RunCommand )(const char *const *argv, int noWait)
 
int(* 	OpenLibrary )(void **library, const char *libraryPath)
 
int(* 	CloseLibrary )(void *library)
 
void *(* 	GetLibrarySymbol )(void *library, const char *procedureName)
 
char *(* 	LocalizeString )(const char *) __attribute__((format_arg(1)))
 
char *(* 	strtok_r )(char *, char *, char **)
 
double(* 	strtod )(char *, char **)
 
int(* 	sprintf )(char *str, const char *format,...)
 
int(* 	sscanf )(char *str, const char *format,...)
 
MYFLT(* 	system_sr )(CSOUND *, MYFLT)
 
// Score Event s
MYFLT(* 	GetScoreOffsetSeconds )(CSOUND *)
 
void(* 	SetScoreOffsetSeconds )(CSOUND *, MYFLT offset)
 
void(* 	RewindScore )(CSOUND *)
 
void(* 	InputMessage )(CSOUND *, const char *message__)
 
int(* 	ISSTRCOD )(MYFLT)
 
void *(* 	RealFFT2Setup )(CSOUND *csound, int FFTsize, int d)
 
void(* 	RealFFT2 )(CSOUND *csound, void *p, MYFLT *sig)
 
int(* 	ftError )(const FGDATA *, const char *,...)
 
MYFLT(* 	GetA4 )(CSOUND *csound)
 
int(* 	AuxAllocAsync )(CSOUND *, size_t, AUXCH *, AUXASYNC *, aux_cb, void *)
 
void *(* 	GetHostData )(CSOUND *)
 
char *(* 	strNcpy )(char *dst, const char *src, size_t siz)
 
int(* 	GetZaBounds )(CSOUND *, MYFLT **)
 
OENTRY *(* 	find_opcode_new )(CSOUND *, char *, char *, char *)
 
OENTRY *(* 	find_opcode_exact )(CSOUND *, char *, char *, char *)
 
int(* 	GetChannelPtr )(CSOUND *, MYFLT **, const char *, int)
 
int(* 	ListChannels )(CSOUND *, controlChannelInfo_t **)
 
int(* 	GetErrorCnt )(CSOUND *)
 
FUNC *(* 	FTnp2Finde )(CSOUND *, MYFLT *)
 
INSTRTXT *(* 	GetInstrument )(CSOUND *, int, const char *)
 
MYFLT *(* 	AutoCorrelation )(CSOUND *, MYFLT *, MYFLT *, int, MYFLT *, int)
 
void *(* 	LPsetup )(CSOUND *csound, int N, int M)
 
void(* 	LPfree )(CSOUND *csound, void *)
 
MYFLT *(* 	LPred )(CSOUND *, void *, MYFLT *)
 
MYFLT *(* 	LPCeps )(CSOUND *, MYFLT *, MYFLT *, int, int)
 
MYFLT *(* 	CepsLP )(CSOUND *, MYFLT *, MYFLT *, int, int)
 
MYFLT(* 	LPrms )(CSOUND *, void *)
 
void *(* 	CreateThread2 )(uintptr_t(*threadRoutine)(void *), unsigned int, void *userdata)

MYFLT sr = csound->GetSr(csound);

int main(int argc, char **argv)
{
    CSOUND *csound = csoundCreate(NULL);
    int result = csoundCompile(csound, argc, argv);
    if (!result)
      result = csoundPerform(csound);
    csoundDestroy(csound);
    return (result >= 0 ? 0 : result);
}
