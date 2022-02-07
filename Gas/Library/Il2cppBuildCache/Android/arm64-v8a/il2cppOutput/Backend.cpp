#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>
struct Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Action>
struct Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.Assembly>[]
struct EntryU5BU5D_tEC9ABEF574392727FF6E25B668876B84634E8133;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// #C.#Jb
struct U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SmartAssembly.Attributes.PoweredByAttribute
struct PoweredByAttribute_t63EC0CE53AE27627F4599C75645F3DFFC2B52CB1;
// System.ResolveEventArgs
struct ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.StackTrace
struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Reflection.TypeFilter
struct TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// #5lb.#4lb/#4mb
struct U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A;
// #5lb.#4lb/#Amb
struct U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA;
// #5lb.#4lb/#Jmb
struct U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D;
// #5lb.#4lb/#Pmb
struct U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A;
// #5lb.#4lb/#enb
struct U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A;
// #5lb.#4lb/#mmb
struct U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// BackEnd.SendQueue/ExceptionEvent
struct ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadImageFormatException_t3BC0184883CA1CB226CDED7E76E91927184C683A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileLoadException_tBC0C288BF22D1EC6368CA47EDC597624C7A804CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23fnb_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23gnb_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23hnb_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23inb_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23jnb_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23knb_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23lnb_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23mnb_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23nnb_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23onb_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23pnb_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23qnb_11_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral098A172DEA459360162609211F3572251217DFE4;
IL2CPP_EXTERN_C String_t* _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0B27BABCCB344AFC5CB815605F482ED4450EA302;
IL2CPP_EXTERN_C String_t* _stringLiteral2E05974F2E21D75753247FF6D6813506443704AD;
IL2CPP_EXTERN_C String_t* _stringLiteral310FBA90755160797797F93AEF47B0B793AC82F8;
IL2CPP_EXTERN_C String_t* _stringLiteral32377A1E6FDBB7827B43E4354B77571D7C18C1CE;
IL2CPP_EXTERN_C String_t* _stringLiteral347AE41DEB51E5C24D439F61C0DEC02AEB379143;
IL2CPP_EXTERN_C String_t* _stringLiteral386578B1EB4F7BD22286B0CB1945CAD7DB57D0A2;
IL2CPP_EXTERN_C String_t* _stringLiteral3C99311BEED2CB6C8889330D8AF3B187629D98B7;
IL2CPP_EXTERN_C String_t* _stringLiteral49B76FD6DA365DA9C951B077663FBD3B44445367;
IL2CPP_EXTERN_C String_t* _stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F;
IL2CPP_EXTERN_C String_t* _stringLiteral57BDAA476BF954DD3805EA032384B02A03D04D5E;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E;
IL2CPP_EXTERN_C String_t* _stringLiteral74130B0DB63B9281760E3CE7DB3A1C8859BA1F02;
IL2CPP_EXTERN_C String_t* _stringLiteral8678B56566DBD8D10E4FC877FCA091CC61474683;
IL2CPP_EXTERN_C String_t* _stringLiteralCA4470BB3CEB453F394923B61657ED246080D5B2;
IL2CPP_EXTERN_C String_t* _stringLiteralE2BBE0E0C1B0C78DB9E5F65037F46002FDD087E8;
IL2CPP_EXTERN_C String_t* _stringLiteralE4B721B44501B18CD5BE78A2A86EAD6264C64FAF;
IL2CPP_EXTERN_C String_t* _stringLiteralECBAC2A6E4282AC00C1FFCB099D87865C91E1C2B;
IL2CPP_EXTERN_C String_t* _stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6;
IL2CPP_EXTERN_C String_t* _stringLiteralF347B4C3A8A9EBF05E398C101E5F88286673457C;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m76C409734741D10DFD35D83B7C00B39319EBC4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m835A28B5C72F97F0FC5CCF0AF2F87F31CD600EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF5B70EDA4CE7F91AB22BE0214CC35E070F610618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBF43EBF1EA6FEEF2D7BF196204EC5687EDC7D21F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SendQueue_U23Ab_mDD516F796CC4B25D2AA92309D5A07C5B2C1D3DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U01_U01_m0023C9C4400D1EE3425B05545A7EA46152A9F3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U01_U01_m92FB62F54A4A91E08B09BF6FD53E8CB39120D3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U23Amb_U23zmb_mCBEE872EFDDB3361E9FFCF0181C4FEC33F9A6371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U23Jmb_U23Emb_m06EFD7AA50AC36BEE1E84D8E73F79CDF89EB5B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U23Jmb_U23Imb_m931D7682A95DA8B36840E44CDBC88657CF085C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U23Jmb_U23or_m3F9D367E4CEA60E064FA439ACDA89378DC96711B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U23Nlb_U23Llb_m89F742766F193AC83A5BF1E2057BBE6C878633A3_RuntimeMethod_var;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3208EB47AB55A24A0E6BFFE8EAC48D1CF20625D1 
{
public:

public:
};


// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_0;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____tail_1;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____head_2;

public:
	inline static int32_t get_offset_of__crossSegmentLock_0() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____crossSegmentLock_0)); }
	inline RuntimeObject * get__crossSegmentLock_0() const { return ____crossSegmentLock_0; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_0() { return &____crossSegmentLock_0; }
	inline void set__crossSegmentLock_0(RuntimeObject * value)
	{
		____crossSegmentLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_0), (void*)value);
	}

	inline static int32_t get_offset_of__tail_1() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____tail_1)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__tail_1() const { return ____tail_1; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__tail_1() { return &____tail_1; }
	inline void set__tail_1(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____tail_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_1), (void*)value);
	}

	inline static int32_t get_offset_of__head_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____head_2)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__head_2() const { return ____head_2; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__head_2() { return &____head_2; }
	inline void set__head_2(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____head_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>
struct Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEC9ABEF574392727FF6E25B668876B84634E8133* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___entries_1)); }
	inline EntryU5BU5D_tEC9ABEF574392727FF6E25B668876B84634E8133* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEC9ABEF574392727FF6E25B668876B84634E8133** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEC9ABEF574392727FF6E25B668876B84634E8133* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}
};


// ?.?
struct U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383  : public RuntimeObject
{
public:

public:
};

struct U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields
{
public:
	// System.Reflection.Assembly ?.?::?
	Assembly_t * ___U01_0;
	// System.String[] ?.?::?
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U01_1;

public:
	inline static int32_t get_offset_of_U01_0() { return static_cast<int32_t>(offsetof(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields, ___U01_0)); }
	inline Assembly_t * get_U01_0() const { return ___U01_0; }
	inline Assembly_t ** get_address_of_U01_0() { return &___U01_0; }
	inline void set_U01_0(Assembly_t * value)
	{
		___U01_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U01_0), (void*)value);
	}

	inline static int32_t get_offset_of_U01_1() { return static_cast<int32_t>(offsetof(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields, ___U01_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U01_1() const { return ___U01_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U01_1() { return &___U01_1; }
	inline void set_U01_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U01_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U01_1), (void*)value);
	}
};


// #5lb.#4lb
struct U234lb_tA7C3346C59537AC4E46707EE2411F64297E9F31D  : public RuntimeObject
{
public:

public:
};


// #Blb.#Alb
struct U23Alb_t631B12300E6781258AF5CBAA059E1290417C8608  : public RuntimeObject
{
public:

public:
};


// #C.#Jb
struct U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> #C.#Jb::#Bb
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ___U23Bb_0;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> #C.#Jb::#Cb
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ___U23Cb_1;

public:
	inline static int32_t get_offset_of_U23Bb_0() { return static_cast<int32_t>(offsetof(U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54, ___U23Bb_0)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get_U23Bb_0() const { return ___U23Bb_0; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of_U23Bb_0() { return &___U23Bb_0; }
	inline void set_U23Bb_0(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		___U23Bb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Bb_0), (void*)value);
	}

	inline static int32_t get_offset_of_U23Cb_1() { return static_cast<int32_t>(offsetof(U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54, ___U23Cb_1)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get_U23Cb_1() const { return ___U23Cb_1; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of_U23Cb_1() { return &___U23Cb_1; }
	inline void set_U23Cb_1(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		___U23Cb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Cb_1), (void*)value);
	}
};


// #Blb.#Nlb
struct U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD  : public RuntimeObject
{
public:

public:
};

struct U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly> #Blb.#Nlb::#Elb
	Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * ___U23Elb_0;

public:
	inline static int32_t get_offset_of_U23Elb_0() { return static_cast<int32_t>(offsetof(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields, ___U23Elb_0)); }
	inline Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * get_U23Elb_0() const { return ___U23Elb_0; }
	inline Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F ** get_address_of_U23Elb_0() { return &___U23Elb_0; }
	inline void set_U23Elb_0(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * value)
	{
		___U23Elb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Elb_0), (void*)value);
	}
};


// #Zlb.#Ylb
struct U23Ylb_t14A80F888E42E80D28B675F6B51DFD8C29DF606F  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t * ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodAddress_3() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___methodAddress_3)); }
	inline int64_t get_methodAddress_3() const { return ___methodAddress_3; }
	inline int64_t* get_address_of_methodAddress_3() { return &___methodAddress_3; }
	inline void set_methodAddress_3(int64_t value)
	{
		___methodAddress_3 = value;
	}

	inline static int32_t get_offset_of_methodIndex_4() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___methodIndex_4)); }
	inline uint32_t get_methodIndex_4() const { return ___methodIndex_4; }
	inline uint32_t* get_address_of_methodIndex_4() { return &___methodIndex_4; }
	inline void set_methodIndex_4(uint32_t value)
	{
		___methodIndex_4 = value;
	}

	inline static int32_t get_offset_of_methodBase_5() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___methodBase_5)); }
	inline MethodBase_t * get_methodBase_5() const { return ___methodBase_5; }
	inline MethodBase_t ** get_address_of_methodBase_5() { return &___methodBase_5; }
	inline void set_methodBase_5(MethodBase_t * value)
	{
		___methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodBase_5), (void*)value);
	}

	inline static int32_t get_offset_of_fileName_6() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___fileName_6)); }
	inline String_t* get_fileName_6() const { return ___fileName_6; }
	inline String_t** get_address_of_fileName_6() { return &___fileName_6; }
	inline void set_fileName_6(String_t* value)
	{
		___fileName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_6), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumber_7() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___lineNumber_7)); }
	inline int32_t get_lineNumber_7() const { return ___lineNumber_7; }
	inline int32_t* get_address_of_lineNumber_7() { return &___lineNumber_7; }
	inline void set_lineNumber_7(int32_t value)
	{
		___lineNumber_7 = value;
	}

	inline static int32_t get_offset_of_columnNumber_8() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___columnNumber_8)); }
	inline int32_t get_columnNumber_8() const { return ___columnNumber_8; }
	inline int32_t* get_address_of_columnNumber_8() { return &___columnNumber_8; }
	inline void set_columnNumber_8(int32_t value)
	{
		___columnNumber_8 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_9() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___internalMethodName_9)); }
	inline String_t* get_internalMethodName_9() const { return ___internalMethodName_9; }
	inline String_t** get_address_of_internalMethodName_9() { return &___internalMethodName_9; }
	inline void set_internalMethodName_9(String_t* value)
	{
		___internalMethodName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalMethodName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___frames_1)); }
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_2() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___captured_traces_2)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_2() const { return ___captured_traces_2; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_2() { return &___captured_traces_2; }
	inline void set_captured_traces_2(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_2), (void*)value);
	}

	inline static int32_t get_offset_of_debug_info_3() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___debug_info_3)); }
	inline bool get_debug_info_3() const { return ___debug_info_3; }
	inline bool* get_address_of_debug_info_3() { return &___debug_info_3; }
	inline void set_debug_info_3(bool value)
	{
		___debug_info_3 = value;
	}
};

struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields
{
public:
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;

public:
	inline static int32_t get_offset_of_isAotidSet_4() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields, ___isAotidSet_4)); }
	inline bool get_isAotidSet_4() const { return ___isAotidSet_4; }
	inline bool* get_address_of_isAotidSet_4() { return &___isAotidSet_4; }
	inline void set_isAotidSet_4(bool value)
	{
		___isAotidSet_4 = value;
	}

	inline static int32_t get_offset_of_aotid_5() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields, ___aotid_5)); }
	inline String_t* get_aotid_5() const { return ___aotid_5; }
	inline String_t** get_address_of_aotid_5() { return &___aotid_5; }
	inline void set_aotid_5(String_t* value)
	{
		___aotid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aotid_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// #5lb.#4lb/#4mb
struct U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A  : public RuntimeObject
{
public:
	// System.Byte[] #5lb.#4lb/#4mb::#Smb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U23Smb_2;
	// System.Byte[] #5lb.#4lb/#4mb::#Tmb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U23Tmb_3;
	// #5lb.#4lb/#Pmb #5lb.#4lb/#4mb::#Umb
	U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * ___U23Umb_4;
	// System.Int32 #5lb.#4lb/#4mb::#amb
	int32_t ___U23amb_5;
	// System.Int32 #5lb.#4lb/#4mb::#Vmb
	int32_t ___U23Vmb_6;
	// System.Int32 #5lb.#4lb/#4mb::#Wmb
	int32_t ___U23Wmb_7;
	// System.Int32 #5lb.#4lb/#4mb::#Xmb
	int32_t ___U23Xmb_8;
	// System.Int32 #5lb.#4lb/#4mb::#4b
	int32_t ___U234b_9;
	// System.Int32 #5lb.#4lb/#4mb::#Ymb
	int32_t ___U23Ymb_10;
	// System.Byte #5lb.#4lb/#4mb::#Zmb
	uint8_t ___U23Zmb_11;
	// System.Int32 #5lb.#4lb/#4mb::#0mb
	int32_t ___U230mb_12;

public:
	inline static int32_t get_offset_of_U23Smb_2() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Smb_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U23Smb_2() const { return ___U23Smb_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U23Smb_2() { return &___U23Smb_2; }
	inline void set_U23Smb_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U23Smb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Smb_2), (void*)value);
	}

	inline static int32_t get_offset_of_U23Tmb_3() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Tmb_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U23Tmb_3() const { return ___U23Tmb_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U23Tmb_3() { return &___U23Tmb_3; }
	inline void set_U23Tmb_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U23Tmb_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Tmb_3), (void*)value);
	}

	inline static int32_t get_offset_of_U23Umb_4() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Umb_4)); }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * get_U23Umb_4() const { return ___U23Umb_4; }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A ** get_address_of_U23Umb_4() { return &___U23Umb_4; }
	inline void set_U23Umb_4(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * value)
	{
		___U23Umb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Umb_4), (void*)value);
	}

	inline static int32_t get_offset_of_U23amb_5() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23amb_5)); }
	inline int32_t get_U23amb_5() const { return ___U23amb_5; }
	inline int32_t* get_address_of_U23amb_5() { return &___U23amb_5; }
	inline void set_U23amb_5(int32_t value)
	{
		___U23amb_5 = value;
	}

	inline static int32_t get_offset_of_U23Vmb_6() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Vmb_6)); }
	inline int32_t get_U23Vmb_6() const { return ___U23Vmb_6; }
	inline int32_t* get_address_of_U23Vmb_6() { return &___U23Vmb_6; }
	inline void set_U23Vmb_6(int32_t value)
	{
		___U23Vmb_6 = value;
	}

	inline static int32_t get_offset_of_U23Wmb_7() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Wmb_7)); }
	inline int32_t get_U23Wmb_7() const { return ___U23Wmb_7; }
	inline int32_t* get_address_of_U23Wmb_7() { return &___U23Wmb_7; }
	inline void set_U23Wmb_7(int32_t value)
	{
		___U23Wmb_7 = value;
	}

	inline static int32_t get_offset_of_U23Xmb_8() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Xmb_8)); }
	inline int32_t get_U23Xmb_8() const { return ___U23Xmb_8; }
	inline int32_t* get_address_of_U23Xmb_8() { return &___U23Xmb_8; }
	inline void set_U23Xmb_8(int32_t value)
	{
		___U23Xmb_8 = value;
	}

	inline static int32_t get_offset_of_U234b_9() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U234b_9)); }
	inline int32_t get_U234b_9() const { return ___U234b_9; }
	inline int32_t* get_address_of_U234b_9() { return &___U234b_9; }
	inline void set_U234b_9(int32_t value)
	{
		___U234b_9 = value;
	}

	inline static int32_t get_offset_of_U23Ymb_10() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Ymb_10)); }
	inline int32_t get_U23Ymb_10() const { return ___U23Ymb_10; }
	inline int32_t* get_address_of_U23Ymb_10() { return &___U23Ymb_10; }
	inline void set_U23Ymb_10(int32_t value)
	{
		___U23Ymb_10 = value;
	}

	inline static int32_t get_offset_of_U23Zmb_11() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U23Zmb_11)); }
	inline uint8_t get_U23Zmb_11() const { return ___U23Zmb_11; }
	inline uint8_t* get_address_of_U23Zmb_11() { return &___U23Zmb_11; }
	inline void set_U23Zmb_11(uint8_t value)
	{
		___U23Zmb_11 = value;
	}

	inline static int32_t get_offset_of_U230mb_12() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A, ___U230mb_12)); }
	inline int32_t get_U230mb_12() const { return ___U230mb_12; }
	inline int32_t* get_address_of_U230mb_12() { return &___U230mb_12; }
	inline void set_U230mb_12(int32_t value)
	{
		___U230mb_12 = value;
	}
};

struct U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields
{
public:
	// System.Int32[] #5lb.#4lb/#4mb::#Qmb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U23Qmb_0;
	// System.Int32[] #5lb.#4lb/#4mb::#Rmb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U23Rmb_1;
	// System.Int32[] #5lb.#4lb/#4mb::#1mb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U231mb_13;

public:
	inline static int32_t get_offset_of_U23Qmb_0() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields, ___U23Qmb_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U23Qmb_0() const { return ___U23Qmb_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U23Qmb_0() { return &___U23Qmb_0; }
	inline void set_U23Qmb_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U23Qmb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Qmb_0), (void*)value);
	}

	inline static int32_t get_offset_of_U23Rmb_1() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields, ___U23Rmb_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U23Rmb_1() const { return ___U23Rmb_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U23Rmb_1() { return &___U23Rmb_1; }
	inline void set_U23Rmb_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U23Rmb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Rmb_1), (void*)value);
	}

	inline static int32_t get_offset_of_U231mb_13() { return static_cast<int32_t>(offsetof(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields, ___U231mb_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U231mb_13() const { return ___U231mb_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U231mb_13() { return &___U231mb_13; }
	inline void set_U231mb_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U231mb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U231mb_13), (void*)value);
	}
};


// #5lb.#4lb/#Amb
struct U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA  : public RuntimeObject
{
public:
	// System.Byte[] #5lb.#4lb/#Amb::#nmb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U23nmb_0;
	// System.Int32 #5lb.#4lb/#Amb::#omb
	int32_t ___U23omb_1;
	// System.Int32 #5lb.#4lb/#Amb::#pmb
	int32_t ___U23pmb_2;
	// System.UInt32 #5lb.#4lb/#Amb::#qmb
	uint32_t ___U23qmb_3;
	// System.Int32 #5lb.#4lb/#Amb::#rmb
	int32_t ___U23rmb_4;

public:
	inline static int32_t get_offset_of_U23nmb_0() { return static_cast<int32_t>(offsetof(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA, ___U23nmb_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U23nmb_0() const { return ___U23nmb_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U23nmb_0() { return &___U23nmb_0; }
	inline void set_U23nmb_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U23nmb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23nmb_0), (void*)value);
	}

	inline static int32_t get_offset_of_U23omb_1() { return static_cast<int32_t>(offsetof(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA, ___U23omb_1)); }
	inline int32_t get_U23omb_1() const { return ___U23omb_1; }
	inline int32_t* get_address_of_U23omb_1() { return &___U23omb_1; }
	inline void set_U23omb_1(int32_t value)
	{
		___U23omb_1 = value;
	}

	inline static int32_t get_offset_of_U23pmb_2() { return static_cast<int32_t>(offsetof(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA, ___U23pmb_2)); }
	inline int32_t get_U23pmb_2() const { return ___U23pmb_2; }
	inline int32_t* get_address_of_U23pmb_2() { return &___U23pmb_2; }
	inline void set_U23pmb_2(int32_t value)
	{
		___U23pmb_2 = value;
	}

	inline static int32_t get_offset_of_U23qmb_3() { return static_cast<int32_t>(offsetof(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA, ___U23qmb_3)); }
	inline uint32_t get_U23qmb_3() const { return ___U23qmb_3; }
	inline uint32_t* get_address_of_U23qmb_3() { return &___U23qmb_3; }
	inline void set_U23qmb_3(uint32_t value)
	{
		___U23qmb_3 = value;
	}

	inline static int32_t get_offset_of_U23rmb_4() { return static_cast<int32_t>(offsetof(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA, ___U23rmb_4)); }
	inline int32_t get_U23rmb_4() const { return ___U23rmb_4; }
	inline int32_t* get_address_of_U23rmb_4() { return &___U23rmb_4; }
	inline void set_U23rmb_4(int32_t value)
	{
		___U23rmb_4 = value;
	}
};


// #5lb.#4lb/#Jmb
struct U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D  : public RuntimeObject
{
public:
	// System.Byte[] #5lb.#4lb/#Jmb::#nmb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U23nmb_0;
	// System.Int32 #5lb.#4lb/#Jmb::#Bmb
	int32_t ___U23Bmb_1;
	// System.Int32 #5lb.#4lb/#Jmb::#Cmb
	int32_t ___U23Cmb_2;

public:
	inline static int32_t get_offset_of_U23nmb_0() { return static_cast<int32_t>(offsetof(U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D, ___U23nmb_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U23nmb_0() const { return ___U23nmb_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U23nmb_0() { return &___U23nmb_0; }
	inline void set_U23nmb_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U23nmb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23nmb_0), (void*)value);
	}

	inline static int32_t get_offset_of_U23Bmb_1() { return static_cast<int32_t>(offsetof(U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D, ___U23Bmb_1)); }
	inline int32_t get_U23Bmb_1() const { return ___U23Bmb_1; }
	inline int32_t* get_address_of_U23Bmb_1() { return &___U23Bmb_1; }
	inline void set_U23Bmb_1(int32_t value)
	{
		___U23Bmb_1 = value;
	}

	inline static int32_t get_offset_of_U23Cmb_2() { return static_cast<int32_t>(offsetof(U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D, ___U23Cmb_2)); }
	inline int32_t get_U23Cmb_2() const { return ___U23Cmb_2; }
	inline int32_t* get_address_of_U23Cmb_2() { return &___U23Cmb_2; }
	inline void set_U23Cmb_2(int32_t value)
	{
		___U23Cmb_2 = value;
	}
};


// #5lb.#4lb/#Pmb
struct U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A  : public RuntimeObject
{
public:
	// System.Int16[] #5lb.#4lb/#Pmb::#Kmb
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___U23Kmb_0;

public:
	inline static int32_t get_offset_of_U23Kmb_0() { return static_cast<int32_t>(offsetof(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A, ___U23Kmb_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_U23Kmb_0() const { return ___U23Kmb_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_U23Kmb_0() { return &___U23Kmb_0; }
	inline void set_U23Kmb_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___U23Kmb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Kmb_0), (void*)value);
	}
};

struct U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields
{
public:
	// #5lb.#4lb/#Pmb #5lb.#4lb/#Pmb::#Lmb
	U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * ___U23Lmb_1;
	// #5lb.#4lb/#Pmb #5lb.#4lb/#Pmb::#Mmb
	U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * ___U23Mmb_2;

public:
	inline static int32_t get_offset_of_U23Lmb_1() { return static_cast<int32_t>(offsetof(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields, ___U23Lmb_1)); }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * get_U23Lmb_1() const { return ___U23Lmb_1; }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A ** get_address_of_U23Lmb_1() { return &___U23Lmb_1; }
	inline void set_U23Lmb_1(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * value)
	{
		___U23Lmb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Lmb_1), (void*)value);
	}

	inline static int32_t get_offset_of_U23Mmb_2() { return static_cast<int32_t>(offsetof(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields, ___U23Mmb_2)); }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * get_U23Mmb_2() const { return ___U23Mmb_2; }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A ** get_address_of_U23Mmb_2() { return &___U23Mmb_2; }
	inline void set_U23Mmb_2(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * value)
	{
		___U23Mmb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Mmb_2), (void*)value);
	}
};


// #5lb.#4lb/#bnb
struct U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5  : public RuntimeObject
{
public:

public:
};

struct U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields
{
public:
	// System.Int32[] #5lb.#4lb/#bnb::#1mb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U231mb_0;
	// System.Byte[] #5lb.#4lb/#bnb::#5mb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U235mb_1;
	// System.Int16[] #5lb.#4lb/#bnb::#6mb
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___U236mb_2;
	// System.Byte[] #5lb.#4lb/#bnb::#7mb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U237mb_3;
	// System.Int16[] #5lb.#4lb/#bnb::#8mb
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___U238mb_4;
	// System.Byte[] #5lb.#4lb/#bnb::#9mb
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U239mb_5;

public:
	inline static int32_t get_offset_of_U231mb_0() { return static_cast<int32_t>(offsetof(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields, ___U231mb_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U231mb_0() const { return ___U231mb_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U231mb_0() { return &___U231mb_0; }
	inline void set_U231mb_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U231mb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U231mb_0), (void*)value);
	}

	inline static int32_t get_offset_of_U235mb_1() { return static_cast<int32_t>(offsetof(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields, ___U235mb_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U235mb_1() const { return ___U235mb_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U235mb_1() { return &___U235mb_1; }
	inline void set_U235mb_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U235mb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U235mb_1), (void*)value);
	}

	inline static int32_t get_offset_of_U236mb_2() { return static_cast<int32_t>(offsetof(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields, ___U236mb_2)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_U236mb_2() const { return ___U236mb_2; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_U236mb_2() { return &___U236mb_2; }
	inline void set_U236mb_2(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___U236mb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U236mb_2), (void*)value);
	}

	inline static int32_t get_offset_of_U237mb_3() { return static_cast<int32_t>(offsetof(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields, ___U237mb_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U237mb_3() const { return ___U237mb_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U237mb_3() { return &___U237mb_3; }
	inline void set_U237mb_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U237mb_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U237mb_3), (void*)value);
	}

	inline static int32_t get_offset_of_U238mb_4() { return static_cast<int32_t>(offsetof(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields, ___U238mb_4)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_U238mb_4() const { return ___U238mb_4; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_U238mb_4() { return &___U238mb_4; }
	inline void set_U238mb_4(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___U238mb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U238mb_4), (void*)value);
	}

	inline static int32_t get_offset_of_U239mb_5() { return static_cast<int32_t>(offsetof(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields, ___U239mb_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U239mb_5() const { return ___U239mb_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U239mb_5() { return &___U239mb_5; }
	inline void set_U239mb_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U239mb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U239mb_5), (void*)value);
	}
};


// #5lb.#4lb/#mmb
struct U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374  : public RuntimeObject
{
public:
	// System.Int32 #5lb.#4lb/#mmb::#amb
	int32_t ___U23amb_4;
	// System.Int32 #5lb.#4lb/#mmb::#bmb
	int32_t ___U23bmb_5;
	// System.Int32 #5lb.#4lb/#mmb::#cmb
	int32_t ___U23cmb_6;
	// System.Int32 #5lb.#4lb/#mmb::#dmb
	int32_t ___U23dmb_7;
	// System.Int32 #5lb.#4lb/#mmb::#emb
	int32_t ___U23emb_8;
	// System.Boolean #5lb.#4lb/#mmb::#fmb
	bool ___U23fmb_9;
	// #5lb.#4lb/#Amb #5lb.#4lb/#mmb::#a1
	U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * ___U23a1_10;
	// #5lb.#4lb/#Jmb #5lb.#4lb/#mmb::#gmb
	U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * ___U23gmb_11;
	// #5lb.#4lb/#4mb #5lb.#4lb/#mmb::#hmb
	U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * ___U23hmb_12;
	// #5lb.#4lb/#Pmb #5lb.#4lb/#mmb::#imb
	U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * ___U23imb_13;
	// #5lb.#4lb/#Pmb #5lb.#4lb/#mmb::#jmb
	U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * ___U23jmb_14;

public:
	inline static int32_t get_offset_of_U23amb_4() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23amb_4)); }
	inline int32_t get_U23amb_4() const { return ___U23amb_4; }
	inline int32_t* get_address_of_U23amb_4() { return &___U23amb_4; }
	inline void set_U23amb_4(int32_t value)
	{
		___U23amb_4 = value;
	}

	inline static int32_t get_offset_of_U23bmb_5() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23bmb_5)); }
	inline int32_t get_U23bmb_5() const { return ___U23bmb_5; }
	inline int32_t* get_address_of_U23bmb_5() { return &___U23bmb_5; }
	inline void set_U23bmb_5(int32_t value)
	{
		___U23bmb_5 = value;
	}

	inline static int32_t get_offset_of_U23cmb_6() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23cmb_6)); }
	inline int32_t get_U23cmb_6() const { return ___U23cmb_6; }
	inline int32_t* get_address_of_U23cmb_6() { return &___U23cmb_6; }
	inline void set_U23cmb_6(int32_t value)
	{
		___U23cmb_6 = value;
	}

	inline static int32_t get_offset_of_U23dmb_7() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23dmb_7)); }
	inline int32_t get_U23dmb_7() const { return ___U23dmb_7; }
	inline int32_t* get_address_of_U23dmb_7() { return &___U23dmb_7; }
	inline void set_U23dmb_7(int32_t value)
	{
		___U23dmb_7 = value;
	}

	inline static int32_t get_offset_of_U23emb_8() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23emb_8)); }
	inline int32_t get_U23emb_8() const { return ___U23emb_8; }
	inline int32_t* get_address_of_U23emb_8() { return &___U23emb_8; }
	inline void set_U23emb_8(int32_t value)
	{
		___U23emb_8 = value;
	}

	inline static int32_t get_offset_of_U23fmb_9() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23fmb_9)); }
	inline bool get_U23fmb_9() const { return ___U23fmb_9; }
	inline bool* get_address_of_U23fmb_9() { return &___U23fmb_9; }
	inline void set_U23fmb_9(bool value)
	{
		___U23fmb_9 = value;
	}

	inline static int32_t get_offset_of_U23a1_10() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23a1_10)); }
	inline U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * get_U23a1_10() const { return ___U23a1_10; }
	inline U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA ** get_address_of_U23a1_10() { return &___U23a1_10; }
	inline void set_U23a1_10(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * value)
	{
		___U23a1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23a1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U23gmb_11() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23gmb_11)); }
	inline U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * get_U23gmb_11() const { return ___U23gmb_11; }
	inline U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D ** get_address_of_U23gmb_11() { return &___U23gmb_11; }
	inline void set_U23gmb_11(U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * value)
	{
		___U23gmb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23gmb_11), (void*)value);
	}

	inline static int32_t get_offset_of_U23hmb_12() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23hmb_12)); }
	inline U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * get_U23hmb_12() const { return ___U23hmb_12; }
	inline U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A ** get_address_of_U23hmb_12() { return &___U23hmb_12; }
	inline void set_U23hmb_12(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * value)
	{
		___U23hmb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23hmb_12), (void*)value);
	}

	inline static int32_t get_offset_of_U23imb_13() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23imb_13)); }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * get_U23imb_13() const { return ___U23imb_13; }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A ** get_address_of_U23imb_13() { return &___U23imb_13; }
	inline void set_U23imb_13(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * value)
	{
		___U23imb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23imb_13), (void*)value);
	}

	inline static int32_t get_offset_of_U23jmb_14() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374, ___U23jmb_14)); }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * get_U23jmb_14() const { return ___U23jmb_14; }
	inline U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A ** get_address_of_U23jmb_14() { return &___U23jmb_14; }
	inline void set_U23jmb_14(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * value)
	{
		___U23jmb_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23jmb_14), (void*)value);
	}
};

struct U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields
{
public:
	// System.Int32[] #5lb.#4lb/#mmb::#6lb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U236lb_0;
	// System.Int32[] #5lb.#4lb/#mmb::#7lb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U237lb_1;
	// System.Int32[] #5lb.#4lb/#mmb::#8lb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U238lb_2;
	// System.Int32[] #5lb.#4lb/#mmb::#9lb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U239lb_3;

public:
	inline static int32_t get_offset_of_U236lb_0() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields, ___U236lb_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U236lb_0() const { return ___U236lb_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U236lb_0() { return &___U236lb_0; }
	inline void set_U236lb_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U236lb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U236lb_0), (void*)value);
	}

	inline static int32_t get_offset_of_U237lb_1() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields, ___U237lb_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U237lb_1() const { return ___U237lb_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U237lb_1() { return &___U237lb_1; }
	inline void set_U237lb_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U237lb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U237lb_1), (void*)value);
	}

	inline static int32_t get_offset_of_U238lb_2() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields, ___U238lb_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U238lb_2() const { return ___U238lb_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U238lb_2() { return &___U238lb_2; }
	inline void set_U238lb_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U238lb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U238lb_2), (void*)value);
	}

	inline static int32_t get_offset_of_U239lb_3() { return static_cast<int32_t>(offsetof(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields, ___U239lb_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U239lb_3() const { return ___U239lb_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U239lb_3() { return &___U239lb_3; }
	inline void set_U239lb_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U239lb_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U239lb_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// SmartAssembly.Attributes.PoweredByAttribute
struct PoweredByAttribute_t63EC0CE53AE27627F4599C75645F3DFFC2B52CB1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ResolveEventArgs
struct ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;
	// System.Reflection.Assembly System.ResolveEventArgs::m_Requesting
	Assembly_t * ___m_Requesting_2;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Requesting_2() { return static_cast<int32_t>(offsetof(ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D, ___m_Requesting_2)); }
	inline Assembly_t * get_m_Requesting_2() const { return ___m_Requesting_2; }
	inline Assembly_t ** get_address_of_m_Requesting_2() { return &___m_Requesting_2; }
	inline void set_m_Requesting_2(Assembly_t * value)
	{
		___m_Requesting_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Requesting_2), (void*)value);
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// #Blb.#Nlb/#Wlb
struct U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA 
{
public:
	// System.String #Blb.#Nlb/#Wlb::#eI
	String_t* ___U23eI_0;
	// System.Version #Blb.#Nlb/#Wlb::#Rlb
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U23Rlb_1;
	// System.String #Blb.#Nlb/#Wlb::#Slb
	String_t* ___U23Slb_2;
	// System.String #Blb.#Nlb/#Wlb::#Tlb
	String_t* ___U23Tlb_3;

public:
	inline static int32_t get_offset_of_U23eI_0() { return static_cast<int32_t>(offsetof(U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA, ___U23eI_0)); }
	inline String_t* get_U23eI_0() const { return ___U23eI_0; }
	inline String_t** get_address_of_U23eI_0() { return &___U23eI_0; }
	inline void set_U23eI_0(String_t* value)
	{
		___U23eI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23eI_0), (void*)value);
	}

	inline static int32_t get_offset_of_U23Rlb_1() { return static_cast<int32_t>(offsetof(U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA, ___U23Rlb_1)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_U23Rlb_1() const { return ___U23Rlb_1; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_U23Rlb_1() { return &___U23Rlb_1; }
	inline void set_U23Rlb_1(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___U23Rlb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Rlb_1), (void*)value);
	}

	inline static int32_t get_offset_of_U23Slb_2() { return static_cast<int32_t>(offsetof(U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA, ___U23Slb_2)); }
	inline String_t* get_U23Slb_2() const { return ___U23Slb_2; }
	inline String_t** get_address_of_U23Slb_2() { return &___U23Slb_2; }
	inline void set_U23Slb_2(String_t* value)
	{
		___U23Slb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Slb_2), (void*)value);
	}

	inline static int32_t get_offset_of_U23Tlb_3() { return static_cast<int32_t>(offsetof(U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA, ___U23Tlb_3)); }
	inline String_t* get_U23Tlb_3() const { return ___U23Tlb_3; }
	inline String_t** get_address_of_U23Tlb_3() { return &___U23Tlb_3; }
	inline void set_U23Tlb_3(String_t* value)
	{
		___U23Tlb_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23Tlb_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of #Blb.#Nlb/#Wlb
struct U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_pinvoke
{
	char* ___U23eI_0;
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U23Rlb_1;
	char* ___U23Slb_2;
	char* ___U23Tlb_3;
};
// Native definition for COM marshalling of #Blb.#Nlb/#Wlb
struct U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_com
{
	Il2CppChar* ___U23eI_0;
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U23Rlb_1;
	Il2CppChar* ___U23Slb_2;
	Il2CppChar* ___U23Tlb_3;
};

// #gA.#rnb/#slb
struct U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4__padding[12];
	};

public:
};


// #gA.#rnb/#snb
struct U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638__padding[16];
	};

public:
};


// #gA.#rnb/#tnb
struct U23tnb_t888C52E1A71D4291C386C5F96FF627FD744E969F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U23tnb_t888C52E1A71D4291C386C5F96FF627FD744E969F__padding[76];
	};

public:
};


// #gA.#rnb/#unb
struct U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524__padding[116];
	};

public:
};


// #gA.#rnb/#vnb
struct U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB__padding[120];
	};

public:
};


// #gA.#rnb
struct U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB  : public RuntimeObject
{
public:

public:
};

struct U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields
{
public:
	// System.Int64 #gA.#rnb::#fnb
	int64_t ___U23fnb_0;
	// System.Int64 #gA.#rnb::#gnb
	int64_t ___U23gnb_1;
	// #gA.#rnb/#snb #gA.#rnb::#hnb
	U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  ___U23hnb_2;
	// #gA.#rnb/#unb #gA.#rnb::#inb
	U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524  ___U23inb_3;
	// #gA.#rnb/#slb #gA.#rnb::#jnb
	U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4  ___U23jnb_4;
	// #gA.#rnb/#snb #gA.#rnb::#knb
	U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  ___U23knb_5;
	// #gA.#rnb/#vnb #gA.#rnb::#lnb
	U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB  ___U23lnb_6;
	// #gA.#rnb/#tnb #gA.#rnb::#mnb
	U23tnb_t888C52E1A71D4291C386C5F96FF627FD744E969F  ___U23mnb_7;
	// #gA.#rnb/#snb #gA.#rnb::#nnb
	U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  ___U23nnb_8;
	// #gA.#rnb/#slb #gA.#rnb::#onb
	U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4  ___U23onb_9;
	// #gA.#rnb/#unb #gA.#rnb::#pnb
	U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524  ___U23pnb_10;
	// #gA.#rnb/#vnb #gA.#rnb::#qnb
	U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB  ___U23qnb_11;

public:
	inline static int32_t get_offset_of_U23fnb_0() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23fnb_0)); }
	inline int64_t get_U23fnb_0() const { return ___U23fnb_0; }
	inline int64_t* get_address_of_U23fnb_0() { return &___U23fnb_0; }
	inline void set_U23fnb_0(int64_t value)
	{
		___U23fnb_0 = value;
	}

	inline static int32_t get_offset_of_U23gnb_1() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23gnb_1)); }
	inline int64_t get_U23gnb_1() const { return ___U23gnb_1; }
	inline int64_t* get_address_of_U23gnb_1() { return &___U23gnb_1; }
	inline void set_U23gnb_1(int64_t value)
	{
		___U23gnb_1 = value;
	}

	inline static int32_t get_offset_of_U23hnb_2() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23hnb_2)); }
	inline U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  get_U23hnb_2() const { return ___U23hnb_2; }
	inline U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638 * get_address_of_U23hnb_2() { return &___U23hnb_2; }
	inline void set_U23hnb_2(U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  value)
	{
		___U23hnb_2 = value;
	}

	inline static int32_t get_offset_of_U23inb_3() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23inb_3)); }
	inline U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524  get_U23inb_3() const { return ___U23inb_3; }
	inline U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524 * get_address_of_U23inb_3() { return &___U23inb_3; }
	inline void set_U23inb_3(U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524  value)
	{
		___U23inb_3 = value;
	}

	inline static int32_t get_offset_of_U23jnb_4() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23jnb_4)); }
	inline U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4  get_U23jnb_4() const { return ___U23jnb_4; }
	inline U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4 * get_address_of_U23jnb_4() { return &___U23jnb_4; }
	inline void set_U23jnb_4(U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4  value)
	{
		___U23jnb_4 = value;
	}

	inline static int32_t get_offset_of_U23knb_5() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23knb_5)); }
	inline U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  get_U23knb_5() const { return ___U23knb_5; }
	inline U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638 * get_address_of_U23knb_5() { return &___U23knb_5; }
	inline void set_U23knb_5(U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  value)
	{
		___U23knb_5 = value;
	}

	inline static int32_t get_offset_of_U23lnb_6() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23lnb_6)); }
	inline U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB  get_U23lnb_6() const { return ___U23lnb_6; }
	inline U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB * get_address_of_U23lnb_6() { return &___U23lnb_6; }
	inline void set_U23lnb_6(U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB  value)
	{
		___U23lnb_6 = value;
	}

	inline static int32_t get_offset_of_U23mnb_7() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23mnb_7)); }
	inline U23tnb_t888C52E1A71D4291C386C5F96FF627FD744E969F  get_U23mnb_7() const { return ___U23mnb_7; }
	inline U23tnb_t888C52E1A71D4291C386C5F96FF627FD744E969F * get_address_of_U23mnb_7() { return &___U23mnb_7; }
	inline void set_U23mnb_7(U23tnb_t888C52E1A71D4291C386C5F96FF627FD744E969F  value)
	{
		___U23mnb_7 = value;
	}

	inline static int32_t get_offset_of_U23nnb_8() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23nnb_8)); }
	inline U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  get_U23nnb_8() const { return ___U23nnb_8; }
	inline U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638 * get_address_of_U23nnb_8() { return &___U23nnb_8; }
	inline void set_U23nnb_8(U23snb_t87C4BE9D5FA26BB93E39E321109E9BFCDC698638  value)
	{
		___U23nnb_8 = value;
	}

	inline static int32_t get_offset_of_U23onb_9() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23onb_9)); }
	inline U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4  get_U23onb_9() const { return ___U23onb_9; }
	inline U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4 * get_address_of_U23onb_9() { return &___U23onb_9; }
	inline void set_U23onb_9(U23slb_t7663DD8AE468BDD6EE478056480FD244DAD3F5B4  value)
	{
		___U23onb_9 = value;
	}

	inline static int32_t get_offset_of_U23pnb_10() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23pnb_10)); }
	inline U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524  get_U23pnb_10() const { return ___U23pnb_10; }
	inline U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524 * get_address_of_U23pnb_10() { return &___U23pnb_10; }
	inline void set_U23pnb_10(U23unb_t25AB7BF035C697D34EBE8EBC2E5659B0164DF524  value)
	{
		___U23pnb_10 = value;
	}

	inline static int32_t get_offset_of_U23qnb_11() { return static_cast<int32_t>(offsetof(U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB_StaticFields, ___U23qnb_11)); }
	inline U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB  get_U23qnb_11() const { return ___U23qnb_11; }
	inline U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB * get_address_of_U23qnb_11() { return &___U23qnb_11; }
	inline void set_U23qnb_11(U23vnb_tC9EC4DE47B9E00A816003D5AFB91EB783A836CDB  value)
	{
		___U23qnb_11 = value;
	}
};


// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_6;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_7;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_8;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_10;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_11;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_5() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_5)); }
	inline int32_t get_m_state_5() const { return ___m_state_5; }
	inline int32_t* get_address_of_m_state_5() { return &___m_state_5; }
	inline void set_m_state_5(int32_t value)
	{
		___m_state_5 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_6() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_6)); }
	inline int32_t get_m_threadIDExecutingCallbacks_6() const { return ___m_threadIDExecutingCallbacks_6; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_6() { return &___m_threadIDExecutingCallbacks_6; }
	inline void set_m_threadIDExecutingCallbacks_6(int32_t value)
	{
		___m_threadIDExecutingCallbacks_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_8() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_8)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_8() const { return ___m_linkingRegistrations_8; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_8() { return &___m_linkingRegistrations_8; }
	inline void set_m_linkingRegistrations_8(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_10)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_10() const { return ___m_executingCallback_10; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_10() { return &___m_executingCallback_10; }
	inline void set_m_executingCallback_10(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_11)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_11() const { return ___m_timer_11; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_11() { return &___m_timer_11; }
	inline void set_m_timer_11(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_11), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_9;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_12;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_9)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_9() const { return ___s_LinkedTokenCancelDelegate_9; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_9() { return &___s_LinkedTokenCancelDelegate_9; }
	inline void set_s_LinkedTokenCancelDelegate_9(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_12)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_12() const { return ___s_timerCallback_12; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_12() { return &___s_timerCallback_12; }
	inline void set_s_timerCallback_12(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_12), (void*)value);
	}
};


// System.Security.Cryptography.CipherMode
struct CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.Security.Cryptography.PaddingMode
struct PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// BackEnd.SendQueue
struct SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90  : public RuntimeObject
{
public:

public:
};

struct SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields
{
public:
	// System.Threading.Tasks.Task BackEnd.SendQueue::#G
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U23G_0;
	// #C.#Jb BackEnd.SendQueue::#ub
	U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * ___U23ub_1;
	// System.Threading.ManualResetEvent BackEnd.SendQueue::#vb
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___U23vb_2;
	// System.Threading.CancellationTokenSource BackEnd.SendQueue::#wb
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___U23wb_3;
	// System.Object BackEnd.SendQueue::#K
	RuntimeObject * ___U23K_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) BackEnd.SendQueue::#xb
	bool ___U23xb_5;
	// System.Boolean BackEnd.SendQueue::#yb
	bool ___U23yb_6;
	// BackEnd.SendQueue/ExceptionEvent BackEnd.SendQueue::#zb
	ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * ___U23zb_7;

public:
	inline static int32_t get_offset_of_U23G_0() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23G_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U23G_0() const { return ___U23G_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U23G_0() { return &___U23G_0; }
	inline void set_U23G_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U23G_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23G_0), (void*)value);
	}

	inline static int32_t get_offset_of_U23ub_1() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23ub_1)); }
	inline U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * get_U23ub_1() const { return ___U23ub_1; }
	inline U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 ** get_address_of_U23ub_1() { return &___U23ub_1; }
	inline void set_U23ub_1(U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * value)
	{
		___U23ub_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23ub_1), (void*)value);
	}

	inline static int32_t get_offset_of_U23vb_2() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23vb_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_U23vb_2() const { return ___U23vb_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_U23vb_2() { return &___U23vb_2; }
	inline void set_U23vb_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___U23vb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23vb_2), (void*)value);
	}

	inline static int32_t get_offset_of_U23wb_3() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23wb_3)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_U23wb_3() const { return ___U23wb_3; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_U23wb_3() { return &___U23wb_3; }
	inline void set_U23wb_3(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___U23wb_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23wb_3), (void*)value);
	}

	inline static int32_t get_offset_of_U23K_4() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23K_4)); }
	inline RuntimeObject * get_U23K_4() const { return ___U23K_4; }
	inline RuntimeObject ** get_address_of_U23K_4() { return &___U23K_4; }
	inline void set_U23K_4(RuntimeObject * value)
	{
		___U23K_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23K_4), (void*)value);
	}

	inline static int32_t get_offset_of_U23xb_5() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23xb_5)); }
	inline bool get_U23xb_5() const { return ___U23xb_5; }
	inline bool* get_address_of_U23xb_5() { return &___U23xb_5; }
	inline void set_U23xb_5(bool value)
	{
		___U23xb_5 = value;
	}

	inline static int32_t get_offset_of_U23yb_6() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23yb_6)); }
	inline bool get_U23yb_6() const { return ___U23yb_6; }
	inline bool* get_address_of_U23yb_6() { return &___U23yb_6; }
	inline void set_U23yb_6(bool value)
	{
		___U23yb_6 = value;
	}

	inline static int32_t get_offset_of_U23zb_7() { return static_cast<int32_t>(offsetof(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields, ___U23zb_7)); }
	inline ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * get_U23zb_7() const { return ___U23zb_7; }
	inline ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 ** get_address_of_U23zb_7() { return &___U23zb_7; }
	inline void set_U23zb_7(ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * value)
	{
		___U23zb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23zb_7), (void*)value);
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskStatus
struct TaskStatus_t550D7DA3655E0A44C7B2925539A4025FB6BA9EF2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskStatus_t550D7DA3655E0A44C7B2925539A4025FB6BA9EF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_3), (void*)value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fqname_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scopename_6), (void*)value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeNameIgnoreCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};

// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___IVValue_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeyValue_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// #5lb.#4lb/#enb
struct U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A  : public MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.BadImageFormatException
struct BadImageFormatException_t3BC0184883CA1CB226CDED7E76E91927184C683A  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.BadImageFormatException::_fileName
	String_t* ____fileName_17;
	// System.String System.BadImageFormatException::_fusionLog
	String_t* ____fusionLog_18;

public:
	inline static int32_t get_offset_of__fileName_17() { return static_cast<int32_t>(offsetof(BadImageFormatException_t3BC0184883CA1CB226CDED7E76E91927184C683A, ____fileName_17)); }
	inline String_t* get__fileName_17() const { return ____fileName_17; }
	inline String_t** get_address_of__fileName_17() { return &____fileName_17; }
	inline void set__fileName_17(String_t* value)
	{
		____fileName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_17), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_18() { return static_cast<int32_t>(offsetof(BadImageFormatException_t3BC0184883CA1CB226CDED7E76E91927184C683A, ____fusionLog_18)); }
	inline String_t* get__fusionLog_18() const { return ____fusionLog_18; }
	inline String_t** get_address_of__fusionLog_18() { return &____fusionLog_18; }
	inline void set__fusionLog_18(String_t* value)
	{
		____fusionLog_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_18), (void*)value);
	}
};


// System.Security.Cryptography.DES
struct DES_t4ACC4972FAAE56B5E5EE9C258CC1432F2D041BF4  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:

public:
};

struct DES_t4ACC4972FAAE56B5E5EE9C258CC1432F2D041BF4_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(DES_t4ACC4972FAAE56B5E5EE9C258CC1432F2D041BF4_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(DES_t4ACC4972FAAE56B5E5EE9C258CC1432F2D041BF4_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089  : public MulticastDelegate_t
{
public:

public:
};


// System.Security.Cryptography.Rijndael
struct Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:

public:
};

struct Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// BackEnd.SendQueue/ExceptionEvent
struct ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40  : public DES_t4ACC4972FAAE56B5E5EE9C258CC1432F2D041BF4
{
public:

public:
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileLoadException
struct FileLoadException_tBC0C288BF22D1EC6368CA47EDC597624C7A804CC  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:
	// System.String System.IO.FileLoadException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileLoadException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileLoadException_tBC0C288BF22D1EC6368CA47EDC597624C7A804CC, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileLoadException_tBC0C288BF22D1EC6368CA47EDC597624C7A804CC, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E  : public Rijndael_t6882B7836066EA54F6DDDCC26E7F1CAAB99100B2
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * m_Items[1];

public:
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m6C847EC789F8A8C9A5F3DD390BCDB42F494CD8B9_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_get_IsEmpty_m00CFC7F76647C3E49D255A3570C9AEC901EF0BAA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolveEventHandler__ctor_m15F12272A52F4A22BB4FC6FA60E14CCC5B06A141 (ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.AppDomain::add_ResourceResolve(System.ResolveEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_ResourceResolve_mC0AF8B5EB02DA9352C59501A422A407C20D79CE4 (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m3B24B1EFB2FF6E40186586C3BE135D335BBF3A0A (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.ResolveEventArgs::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResolveEventArgs_get_Name_mC105BF1144527EE2FBA2CE14883C02167E7C7768_inline (ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean ?.?::?()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U01_U01_m92FB62F54A4A91E08B09BF6FD53E8CB39120D3B5 (const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::.ctor()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m581BD3EF23F0FB83F2D4B5AAC86FD945894BDFD7 (StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mB961FACC934247ED58EC21A6291E2018BD570650 (RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DESCryptoServiceProvider__ctor_m7AD8E1619BAA1EBC6FA81C815FA6D2786AA232F9 (DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_GetCallingAssembly_m61DDCAA0C8FDC4A912E67501AE887105F986E570 (const RuntimeMethod* method);
// System.Boolean #5lb.#4lb::#0lb(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U234lb_U230lb_m569F439E188B4C488144DC52885638BA17F8E7DF (Assembly_t * p0, Assembly_t * p1, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#enb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23enb__ctor_m851FE4AF3C0F98788DCDD6C4F8FD1E1A7FC5091C (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#enb::#dnb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * __this, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#enb::#cnb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#mmb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23mmb__ctor_m2C5228236605748A8CBB3ADCC0421FF43F130227 (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#mmb::#lmb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23mmb_U23lmb_mE729F2161943B38A8E7F657D4B8B3360582CE6B2 (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Security.Cryptography.ICryptoTransform #5lb.#4lb::#2lb(System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U234lb_U232lb_m05F0250674D6F48BFA6B3E5E05A54DCE7DFAF7B4 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p1, bool p2, const RuntimeMethod* method);
// System.Byte[] #5lb.#4lb::#3lb(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method);
// System.Security.Cryptography.ICryptoTransform #5lb.#4lb::#1lb(System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U234lb_U231lb_m28B8F2D34869870C9C3D05AC8CA80E8A78A4224D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p1, bool p2, const RuntimeMethod* method);
// System.Void #Blb.#Nlb::#Klb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Nlb_U23Klb_m46D9295FA321F65F8D0B021D1A052375FD88ECC6 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::.ctor()
inline void ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, const RuntimeMethod*))ConcurrentQueue_1__ctor_m6C847EC789F8A8C9A5F3DD390BCDB42F494CD8B9_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_IsEmpty()
inline bool ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, const RuntimeMethod*))ConcurrentQueue_1_get_IsEmpty_m00CFC7F76647C3E49D255A3570C9AEC901EF0BAA_gshared)(__this, method);
}
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared)(__this, ___result0, method);
}
// System.Void System.AppDomain::add_AssemblyResolve(System.ResolveEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_AssemblyResolve_mE0AB921A30FB539ED972978972D5E62F4C0E055A (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___value0, const RuntimeMethod* method);
// System.Void #Blb.#Nlb/#Wlb::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Wlb__ctor_m135F6B78DD9073734977C54CA9FF3273691010A2 (U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA * __this, String_t* ___U23Xlb0, const RuntimeMethod* method);
// System.String #Blb.#Nlb/#Wlb::#Ulb(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U23Wlb_U23Ulb_m80F143033430A1C0423ADAAB80D97EABB56462D2 (U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA * __this, bool ___U23Vlb0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inArray0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m76C409734741D10DFD35D83B7C00B39319EBC4EC (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>::get_Item(!0)
inline Assembly_t * Dictionary_2_get_Item_mF5B70EDA4CE7F91AB22BE0214CC35E070F610618 (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Assembly_t * (*) (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m341D7789563BB7BC7C61896E45EF40EBDCF1A726 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___rawAssembly0, const RuntimeMethod* method);
// System.String System.IO.Path::GetTempPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_OpenWrite_mA2DA8B05D02F9D0EC99EA6E8FB8E35E7301883B9 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean #Blb.#Nlb::#Flb(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Nlb_U23Flb_m51D53CF221170E5D15ADD2A95AE345B16BB22F85 (String_t* ___U23Glb0, String_t* ___U23Hlb1, int32_t ___U23Ilb2, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::LoadFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_LoadFile_m1EB640BBEC0A5E0F624BDC4EE2DB80E7ED15E3A0 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mBF43EBF1EA6FEEF2D7BF196204EC5687EDC7D21F (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * __this, String_t* ___key0, Assembly_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F *, String_t*, Assembly_t *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>::.ctor()
inline void Dictionary_2__ctor_m835A28B5C72F97F0FC5CCF0AF2F87F31CD600EB5 (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void ?.?::?()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U01_U01_m644AA5D2B8416DFA9951FB33EC652636BE3CA49D (const RuntimeMethod* method);
// System.Void #Blb.#Alb::#zlb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Alb_U23zlb_mC6F6FC1E40EB0529E09D11DBC21634204B61EF66 (const RuntimeMethod* method);
// System.Void #Zlb.#Ylb::#zlb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Ylb_U23zlb_mC9222A6DADCBFB1F4295A1046A24065EB915235C (const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m322B3FEDAED081C1EA55F6E2922007475E7CAAED (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void #C.#Jb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jb__ctor_m5E7369D0F515D3E7D1663290CF1EACB9D880322A (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Action,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task__ctor_m9F9FB6798D8BE38C03E6749AB35C319BC2C082C5 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_m0F8585ACF2990DAD4D7BE963AC277AED127DD96D (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Int32 #C.#Jb::#Eb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jb_U23Eb_m6023A949C222EC2E53E59DD2FAFDA44E2115808D (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Boolean #C.#Jb::#Db()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Jb_U23Db_m8C02EC6DEAAA5E7B7425665D7EE86E7A0E9FF92E (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Action #C.#Jb::#Fb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * U23Jb_U23Fb_m15CB25FFB83A6435370A4CF654F027252A7B45EC (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void BackEnd.SendQueue/ExceptionEvent::Invoke(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionEvent_Invoke_m3766B0D020EEF8F6198C1CF3B90AC5B4C2C24275 (ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Boolean #C.#Jb::#Gb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Jb_U23Gb_mDA7207FAC5799037384EE573C28DCAEBC53126EF (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Int32 #C.#Jb::#Hb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jb_U23Hb_m53D8B7786352CCAF7C5A0FC99B382609B0098B3B (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Action #C.#Jb::#Ib()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * U23Jb_U23Ib_m3CCA946D5C9FD1C41EA6F19C1F68DC6BE1E7AD04 (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Amb::#smb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, int32_t p0, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Amb::#tmb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, int32_t p0, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Pmb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4 (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Pmb::#Omb(#5lb.#4lb/#Amb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Pmb_U23Omb_m2D154F74B5566641E263C3EDF8B6344A13C44606 (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * __this, U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * p0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Jmb::#Dmb(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb_U23Dmb_m59533C48A4C96F82D54D95C1161D8DD78D22B605 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Amb::#vmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23vmb_mF2F34639227F0A85C8D8ABA48859720796F32D2B (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Amb::#ymb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23ymb_m29733D6383E6E040D1EE1369AE10D0A3C37ED958 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Pmb::#Nmb(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Pmb_U23Nmb_mBB757100430265F3C3170F7B55096039DBB6BDE1 (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method);
// System.Int16 #5lb.#4lb/#bnb::#anb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D (int32_t p0, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Amb::#umb()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U23Amb_U23umb_m31DB15CB70BD20AAFD754A4E22097E768F54160F_inline (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m27461F2CC712138C855A9C1CDCB211CC5BDBAC9A (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, bool ___writable1, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Amb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb__ctor_m3367012C5DDC94FCADFEB1E59C9E744D1A376FD5 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Jmb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb__ctor_mD5FD0EDF8A87E38CCA8DF242D02A610EBC0C08E0 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Amb::#zmb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb_U23zmb_mCBEE872EFDDB3361E9FFCF0181C4FEC33F9A6371 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Jmb::#Gmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Gmb_m6E8DDF32A3C8946F7B480B7D191571C9D6E1E843 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Jmb::#or(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb_U23or_m3F9D367E4CEA60E064FA439ACDA89378DC96711B (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Jmb::#Emb(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb_U23Emb_m06EFD7AA50AC36BEE1E84D8E73F79CDF89EB5B25 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#Amb::#wmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb_U23wmb_mB9B8BA1A10E56BF63533B3FDFD3B206A35742CF5 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method);
// System.Void #5lb.#4lb/#4mb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U234mb__ctor_mE1A14DCEFB0B35AF96A77BB667B2C2C12F289465 (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Jmb::#Fmb(#5lb.#4lb/#Amb,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Fmb_m3266D3A3CAE45E5187C6D1F580E933F96516D167 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean #5lb.#4lb/#Amb::#xmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Amb_U23xmb_mF7DF26B903E592BAD2D770460D2C21CD2750E3D9 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method);
// System.Boolean #5lb.#4lb/#4mb::#TF(#5lb.#4lb/#Amb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U234mb_U23TF_mE2709D893E2123D30159ED1FCA43A56F8AA5F365 (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * p0, const RuntimeMethod* method);
// #5lb.#4lb/#Pmb #5lb.#4lb/#4mb::#2mb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * U234mb_U232mb_mE65556041932BBE51D0E6D72BD699F69D79D8842 (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, const RuntimeMethod* method);
// #5lb.#4lb/#Pmb #5lb.#4lb/#4mb::#3mb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * U234mb_U233mb_m5B32D66CEB78C6179DB6575C605864B6608D0F7F (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, const RuntimeMethod* method);
// System.Boolean #5lb.#4lb/#mmb::#kmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23mmb_U23kmb_mB8714F201C6C17E624D96EC835B53D2144978ABC (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Jmb::#Imb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Imb_m931D7682A95DA8B36840E44CDBC88657CF085C48 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean #5lb.#4lb/#mmb::#TF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23mmb_U23TF_mBE4006B4D8FB17C77FADDD347EDFB5774AFF3EE6 (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, const RuntimeMethod* method);
// System.Int32 #5lb.#4lb/#Jmb::#Hmb()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Hmb_m6AF3D3E45AD27B4222D643094214C58CE2B86FA9_inline (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Inequality_mCF079498CD00AA720348D8F7CABEBC8DDA798B0F (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v10, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v21, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, String_t* ___version0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MoveFileEx(char*, char*, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ?.?::?()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U01_U01_m644AA5D2B8416DFA9951FB33EC652636BE3CA49D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U01_U01_m0023C9C4400D1EE3425B05545A7EA46152A9F3A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_0;
		L_0 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * L_1 = (ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 *)il2cpp_codegen_object_new(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089_il2cpp_TypeInfo_var);
		ResolveEventHandler__ctor_m15F12272A52F4A22BB4FC6FA60E14CCC5B06A141(L_1, NULL, (intptr_t)((intptr_t)U01_U01_m0023C9C4400D1EE3425B05545A7EA46152A9F3A6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		AppDomain_add_ResourceResolve_mC0AF8B5EB02DA9352C59501A422A407C20D79CE4(L_0, L_1, /*hidden argument*/NULL);
		goto IL_001b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	} // end catch (depth: 1)

IL_001b:
	{
		return;
	}
}
// System.Reflection.Assembly ?.?::?(System.Object,System.ResolveEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * U01_U01_m0023C9C4400D1EE3425B05545A7EA46152A9F3A6 (RuntimeObject * p0, ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D * p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral310FBA90755160797797F93AEF47B0B793AC82F8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		Assembly_t * L_0 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_0();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_1();
		V_1 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2((RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			Assembly_t * L_3;
			L_3 = Assembly_Load_m3B24B1EFB2FF6E40186586C3BE135D335BBF3A0A(_stringLiteral310FBA90755160797797F93AEF47B0B793AC82F8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
			((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->set_U01_0(L_3);
			Assembly_t * L_4 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_0();
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
			Assembly_t * L_5 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_0();
			NullCheck(L_5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
			L_6 = VirtFuncInvoker0< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(20 /* System.String[] System.Reflection.Assembly::GetManifestResourceNames() */, L_5);
			((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->set_U01_1(L_6);
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x41, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)(RuntimeObject *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D * L_8 = p1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ResolveEventArgs_get_Name_mC105BF1144527EE2FBA2CE14883C02167E7C7768_inline(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		V_2 = 0;
		goto IL_006e;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_1();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = U01_U01_m92FB62F54A4A91E08B09BF6FD53E8CB39120D3B5(/*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0064;
		}
	}
	{
		return (Assembly_t *)NULL;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		Assembly_t * L_17 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_0();
		return L_17;
	}

IL_006a:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_19 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = ((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->get_U01_1();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		return (Assembly_t *)NULL;
	}
}
// System.Boolean ?.?::?()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U01_U01_m92FB62F54A4A91E08B09BF6FD53E8CB39120D3B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U01_U01_m92FB62F54A4A91E08B09BF6FD53E8CB39120D3B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * L_0 = (StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 *)il2cpp_codegen_object_new(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_il2cpp_TypeInfo_var);
			StackTrace__ctor_m581BD3EF23F0FB83F2D4B5AAC86FD945894BDFD7(L_0, /*hidden argument*/NULL);
			NullCheck(L_0);
			StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* L_1;
			L_1 = VirtFuncInvoker0< StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* >::Invoke(6 /* System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::GetFrames() */, L_0);
			V_0 = L_1;
			V_1 = 2;
			goto IL_0030;
		}

IL_000f:
		{
			StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* L_2 = V_0;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			NullCheck(L_5);
			MethodBase_t * L_6;
			L_6 = VirtFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_5);
			NullCheck(L_6);
			Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * L_7;
			L_7 = VirtFuncInvoker0< Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * >::Invoke(15 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_6);
			NullCheck(L_7);
			Assembly_t * L_8;
			L_8 = VirtFuncInvoker0< Assembly_t * >::Invoke(9 /* System.Reflection.Assembly System.Reflection.Module::get_Assembly() */, L_7);
			Assembly_t * L_9;
			L_9 = il2cpp_codegen_get_executing_assembly(U01_U01_m92FB62F54A4A91E08B09BF6FD53E8CB39120D3B5_RuntimeMethod_var);
			if ((!(((RuntimeObject*)(Assembly_t *)L_8) == ((RuntimeObject*)(Assembly_t *)L_9))))
			{
				goto IL_002c;
			}
		}

IL_0028:
		{
			V_2 = (bool)1;
			goto IL_003f;
		}

IL_002c:
		{
			int32_t L_10 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_0030:
		{
			int32_t L_11 = V_1;
			StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* L_12 = V_0;
			NullCheck(L_12);
			if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
			{
				goto IL_000f;
			}
		}

IL_0036:
		{
			V_2 = (bool)0;
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		throw e;
	}

CATCH_003a:
	{ // begin catch(System.Object)
		V_2 = (bool)1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void ?.?::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U01__cctor_m580FFB3A9DCEBA3727B9BE0A9286A6E466A7BF07 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->set_U01_0((Assembly_t *)NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		((U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_StaticFields*)il2cpp_codegen_static_fields_for(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var))->set_U01_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean #5lb.#4lb::#0lb(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U234lb_U230lb_m569F439E188B4C488144DC52885638BA17F8E7DF (Assembly_t * p0, Assembly_t * p1, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Security.Cryptography.ICryptoTransform #5lb.#4lb::#1lb(System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U234lb_U231lb_m28B8F2D34869870C9C3D05AC8CA80E8A78A4224D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p1, bool p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B4_0 = NULL;
	{
		RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E * L_0 = (RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E *)il2cpp_codegen_object_new(RijndaelManaged_tD1B1F2A2FFA25C00142012CF301D52F46943A86E_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_mB961FACC934247ED58EC21A6291E2018BD570650(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = p2;
			if (L_1)
			{
				goto IL_0013;
			}
		}

IL_0009:
		{
			SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * L_2 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = p0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = p1;
			NullCheck(L_2);
			RuntimeObject* L_5;
			L_5 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_2, L_3, L_4);
			G_B4_0 = L_5;
			goto IL_001b;
		}

IL_0013:
		{
			SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * L_6 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = p0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = p1;
			NullCheck(L_6);
			RuntimeObject* L_9;
			L_9 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(11 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_6, L_7, L_8);
			G_B4_0 = L_9;
		}

IL_001b:
		{
			V_1 = G_B4_0;
			IL2CPP_LEAVE(0x28, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		{
			SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0027:
		{
			IL2CPP_END_FINALLY(30)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		RuntimeObject* L_12 = V_1;
		return L_12;
	}
}
// System.Security.Cryptography.ICryptoTransform #5lb.#4lb::#2lb(System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U234lb_U232lb_m05F0250674D6F48BFA6B3E5E05A54DCE7DFAF7B4 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p1, bool p2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B4_0 = NULL;
	{
		DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * L_0 = (DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 *)il2cpp_codegen_object_new(DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40_il2cpp_TypeInfo_var);
		DESCryptoServiceProvider__ctor_m7AD8E1619BAA1EBC6FA81C815FA6D2786AA232F9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = p2;
			if (L_1)
			{
				goto IL_0013;
			}
		}

IL_0009:
		{
			DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * L_2 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = p0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = p1;
			NullCheck(L_2);
			RuntimeObject* L_5;
			L_5 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_2, L_3, L_4);
			G_B4_0 = L_5;
			goto IL_001b;
		}

IL_0013:
		{
			DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * L_6 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = p0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = p1;
			NullCheck(L_6);
			RuntimeObject* L_9;
			L_9 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(11 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_6, L_7, L_8);
			G_B4_0 = L_9;
		}

IL_001b:
		{
			V_1 = G_B4_0;
			IL2CPP_LEAVE(0x28, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		{
			DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			DESCryptoServiceProvider_t388757BDCC2CA0DF7C68BD637624ABF602228A40 * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0027:
		{
			IL2CPP_END_FINALLY(30)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		RuntimeObject* L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] #5lb.#4lb::#3lb(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23fnb_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23gnb_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23hnb_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23nnb_8_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Assembly_t * V_1 = NULL;
	U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_11 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_12 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_18 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_19 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_20 = NULL;
	RuntimeObject* V_21 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_22 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_23 = NULL;
	RuntimeObject* V_24 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Assembly_t * L_0;
		L_0 = Assembly_GetCallingAssembly_m61DDCAA0C8FDC4A912E67501AE887105F986E570(/*hidden argument*/NULL);
		V_0 = L_0;
		Assembly_t * L_1;
		L_1 = il2cpp_codegen_get_executing_assembly(U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468_RuntimeMethod_var);
		V_1 = L_1;
		Assembly_t * L_2 = V_0;
		Assembly_t * L_3 = V_1;
		if ((((RuntimeObject*)(Assembly_t *)L_2) == ((RuntimeObject*)(Assembly_t *)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		Assembly_t * L_4 = V_1;
		Assembly_t * L_5 = V_0;
		bool L_6;
		L_6 = U234lb_U230lb_m569F439E188B4C488144DC52885638BA17F8E7DF(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001b;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_001b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = p0;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_8 = (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A *)il2cpp_codegen_object_new(U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A_il2cpp_TypeInfo_var);
		U23enb__ctor_m851FE4AF3C0F98788DCDD6C4F8FD1E1A7FC5091C(L_8, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_9;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)67324752)))))
		{
			goto IL_011f;
		}
	}
	{
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(L_13, /*hidden argument*/NULL);
		V_5 = ((int16_t)((int16_t)L_14));
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)67324752)))))
		{
			goto IL_006e;
		}
	}
	{
		int16_t L_20 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_21 = V_6;
		if (L_21)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_22 = V_7;
		if ((((int32_t)L_22) == ((int32_t)8)))
		{
			goto IL_0079;
		}
	}

IL_006e:
	{
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_23 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)));
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57BDAA476BF954DD3805EA032384B02A03D04D5E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468_RuntimeMethod_var)));
	}

IL_0079:
	{
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_24, /*hidden argument*/NULL);
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_26, /*hidden argument*/NULL);
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_28, /*hidden argument*/NULL);
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_30, /*hidden argument*/NULL);
		V_8 = L_31;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(L_34, /*hidden argument*/NULL);
		V_10 = L_35;
		int32_t L_36 = V_9;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_37 = V_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_12 = L_38;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_39 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_12;
		int32_t L_41 = V_9;
		NullCheck(L_39);
		int32_t L_42;
		L_42 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_39, L_40, 0, L_41);
	}

IL_00c0:
	{
		int32_t L_43 = V_10;
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_44 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_13 = L_45;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_46 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_13;
		int32_t L_48 = V_10;
		NullCheck(L_46);
		int32_t L_49;
		L_49 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_46, L_47, 0, L_48);
	}

IL_00da:
	{
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_50 = V_2;
		NullCheck(L_50);
		int64_t L_51;
		L_51 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_50);
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_52 = V_2;
		NullCheck(L_52);
		int64_t L_53;
		L_53 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_52);
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_51, (int64_t)L_53))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_51, (int64_t)L_53))));
		V_11 = L_54;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_55 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = V_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = V_11;
		NullCheck(L_57);
		NullCheck(L_55);
		int32_t L_58;
		L_58 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_55, L_56, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_59 = V_11;
		U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * L_60 = (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 *)il2cpp_codegen_object_new(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		U23mmb__ctor_m2C5228236605748A8CBB3ADCC0421FF43F130227(L_60, L_59, /*hidden argument*/NULL);
		int32_t L_61 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_3 = L_62;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = V_3;
		NullCheck(L_64);
		NullCheck(L_60);
		int32_t L_65;
		L_65 = U23mmb_U23lmb_mE729F2161943B38A8E7F657D4B8B3360582CE6B2(L_60, L_63, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))), /*hidden argument*/NULL);
		V_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		goto IL_0257;
	}

IL_011f:
	{
		int32_t L_66 = V_4;
		V_14 = ((int32_t)((int32_t)L_66>>(int32_t)((int32_t)24)));
		int32_t L_67 = V_4;
		int32_t L_68 = V_14;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)((int32_t)((int32_t)L_68<<(int32_t)((int32_t)24)))));
		int32_t L_69 = V_4;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)8223355)))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_70 = V_14;
		if ((!(((uint32_t)L_70) == ((uint32_t)1))))
		{
			goto IL_0198;
		}
	}
	{
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_71, /*hidden argument*/NULL);
		V_15 = L_72;
		int32_t L_73 = V_15;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_73);
		V_3 = L_74;
		V_16 = 0;
		goto IL_0192;
	}

IL_0156:
	{
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_75 = V_2;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_75, /*hidden argument*/NULL);
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_77 = V_2;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F(L_77, /*hidden argument*/NULL);
		V_17 = L_78;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_76);
		V_18 = L_79;
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_80 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = V_18;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = V_18;
		NullCheck(L_82);
		NullCheck(L_80);
		int32_t L_83;
		L_83 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_80, L_81, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = V_18;
		U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * L_85 = (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 *)il2cpp_codegen_object_new(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		U23mmb__ctor_m2C5228236605748A8CBB3ADCC0421FF43F130227(L_85, L_84, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = V_3;
		int32_t L_87 = V_16;
		int32_t L_88 = V_17;
		NullCheck(L_85);
		int32_t L_89;
		L_89 = U23mmb_U23lmb_mE729F2161943B38A8E7F657D4B8B3360582CE6B2(L_85, L_86, L_87, L_88, /*hidden argument*/NULL);
		int32_t L_90 = V_16;
		int32_t L_91 = V_17;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)L_91));
	}

IL_0192:
	{
		int32_t L_92 = V_16;
		int32_t L_93 = V_15;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_0156;
		}
	}

IL_0198:
	{
		int32_t L_94 = V_14;
		if ((!(((uint32_t)L_94) == ((uint32_t)2))))
		{
			goto IL_01f1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = L_95;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_97 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23fnb_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_96, L_97, /*hidden argument*/NULL);
		V_19 = L_96;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_99 = L_98;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_100 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23gnb_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_99, L_100, /*hidden argument*/NULL);
		V_20 = L_99;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = V_19;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_102 = V_20;
		RuntimeObject* L_103;
		L_103 = U234lb_U232lb_m05F0250674D6F48BFA6B3E5E05A54DCE7DFAF7B4(L_101, L_102, (bool)1, /*hidden argument*/NULL);
		V_21 = L_103;
	}

IL_01cf:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_104 = V_21;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_105 = p0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_106 = p0;
		NullCheck(L_106);
		NullCheck(L_104);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107;
		L_107 = InterfaceFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(0 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E_il2cpp_TypeInfo_var, L_104, L_105, 4, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))), (int32_t)4)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_108;
		L_108 = U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468(L_107, /*hidden argument*/NULL);
		V_3 = L_108;
		IL2CPP_LEAVE(0x1F1, FINALLY_01e5);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e5;
	}

FINALLY_01e5:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_109 = V_21;
			if (!L_109)
			{
				goto IL_01f0;
			}
		}

IL_01e9:
		{
			RuntimeObject* L_110 = V_21;
			NullCheck(L_110);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_110);
		}

IL_01f0:
		{
			IL2CPP_END_FINALLY(485)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(485)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F1, IL_01f1)
	}

IL_01f1:
	{
		int32_t L_111 = V_14;
		if ((!(((uint32_t)L_111) == ((uint32_t)3))))
		{
			goto IL_0257;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_112 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_113 = L_112;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_114 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23nnb_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_113, L_114, /*hidden argument*/NULL);
		V_22 = L_113;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_115 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_116 = L_115;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_117 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23hnb_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_116, L_117, /*hidden argument*/NULL);
		V_23 = L_116;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_118 = V_22;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_119 = V_23;
		RuntimeObject* L_120;
		L_120 = U234lb_U231lb_m28B8F2D34869870C9C3D05AC8CA80E8A78A4224D(L_118, L_119, (bool)1, /*hidden argument*/NULL);
		V_24 = L_120;
	}

IL_022a:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_121 = V_24;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_122 = p0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_123 = p0;
		NullCheck(L_123);
		NullCheck(L_121);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_124;
		L_124 = InterfaceFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(0 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E_il2cpp_TypeInfo_var, L_121, L_122, 4, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length))), (int32_t)4)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_125;
		L_125 = U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468(L_124, /*hidden argument*/NULL);
		V_3 = L_125;
		IL2CPP_LEAVE(0x257, FINALLY_0240);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0240;
	}

FINALLY_0240:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_126 = V_24;
			if (!L_126)
			{
				goto IL_024b;
			}
		}

IL_0244:
		{
			RuntimeObject* L_127 = V_24;
			NullCheck(L_127);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_127);
		}

IL_024b:
		{
			IL2CPP_END_FINALLY(576)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(576)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x257, IL_0257)
	}

IL_024c:
	{
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_128 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)));
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(L_128, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32377A1E6FDBB7827B43E4354B77571D7C18C1CE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468_RuntimeMethod_var)));
	}

IL_0257:
	{
		U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * L_129 = V_2;
		NullCheck(L_129);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_129);
		V_2 = (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A *)NULL;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = V_3;
		return L_130;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #Blb.#Alb::#zlb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Alb_U23zlb_mC6F6FC1E40EB0529E09D11DBC21634204B61EF66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
		U23Nlb_U23Klb_m46D9295FA321F65F8D0B021D1A052375FD88ECC6(/*hidden argument*/NULL);
		goto IL_000a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0007;
		}
		throw e;
	}

CATCH_0007:
	{ // begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000a;
	} // end catch (depth: 1)

IL_000a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #C.#Jb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jb__ctor_m5E7369D0F515D3E7D1663290CF1EACB9D880322A (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *)il2cpp_codegen_object_new(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01(L_0, /*hidden argument*/ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01_RuntimeMethod_var);
		__this->set_U23Bb_0(L_0);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_1 = (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *)il2cpp_codegen_object_new(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01(L_1, /*hidden argument*/ConcurrentQueue_1__ctor_mA4B113144F0E30BBDBC30D082DFEB8D45C7BAE01_RuntimeMethod_var);
		__this->set_U23Cb_1(L_1);
		return;
	}
}
// System.Boolean #C.#Jb::#Db()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Jb_U23Db_m8C02EC6DEAAA5E7B7425665D7EE86E7A0E9FF92E (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = __this->get_U23Bb_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F(L_0, /*hidden argument*/ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 #C.#Jb::#Eb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jb_U23Eb_m6023A949C222EC2E53E59DD2FAFDA44E2115808D (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = __this->get_U23Bb_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274(L_0, /*hidden argument*/ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		return L_1;
	}
}
// System.Action #C.#Jb::#Fb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * U23Jb_U23Fb_m15CB25FFB83A6435370A4CF654F027252A7B45EC (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	{
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL;
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = __this->get_U23Bb_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1(L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_0), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL;
	}

IL_0013:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean #C.#Jb::#Gb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Jb_U23Gb_mDA7207FAC5799037384EE573C28DCAEBC53126EF (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = __this->get_U23Cb_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F(L_0, /*hidden argument*/ConcurrentQueue_1_get_IsEmpty_mD4E1AF1F0B2B1372AB8F0B10E51EB7CA2CC5748F_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 #C.#Jb::#Hb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jb_U23Hb_m53D8B7786352CCAF7C5A0FC99B382609B0098B3B (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = __this->get_U23Cb_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274(L_0, /*hidden argument*/ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		return L_1;
	}
}
// System.Action #C.#Jb::#Ib()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * U23Jb_U23Ib_m3CCA946D5C9FD1C41EA6F19C1F68DC6BE1E7AD04 (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	{
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL;
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_0 = __this->get_U23Cb_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1(L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_0), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mC81993FCA69614F6D4AC8B8909824D8AC7DFBEF1_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL;
	}

IL_0013:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean #Blb.#Nlb::#Flb(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Nlb_U23Flb_m51D53CF221170E5D15ADD2A95AE345B16BB22F85 (String_t* ___U23Glb0, String_t* ___U23Hlb1, int32_t ___U23Ilb2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32"), "MoveFileEx", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___U23Glb0' to native representation
	char* ____U23Glb0_marshaled = NULL;
	____U23Glb0_marshaled = il2cpp_codegen_marshal_string(___U23Glb0);

	// Marshaling of parameter '___U23Hlb1' to native representation
	char* ____U23Hlb1_marshaled = NULL;
	____U23Hlb1_marshaled = il2cpp_codegen_marshal_string(___U23Hlb1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MoveFileEx)(____U23Glb0_marshaled, ____U23Hlb1_marshaled, ___U23Ilb2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____U23Glb0_marshaled, ____U23Hlb1_marshaled, ___U23Ilb2);
	#endif

	// Marshaling cleanup of parameter '___U23Glb0' native representation
	il2cpp_codegen_marshal_free(____U23Glb0_marshaled);
	____U23Glb0_marshaled = NULL;

	// Marshaling cleanup of parameter '___U23Hlb1' native representation
	il2cpp_codegen_marshal_free(____U23Hlb1_marshaled);
	____U23Hlb1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void #Blb.#Nlb::#Klb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Nlb_U23Klb_m46D9295FA321F65F8D0B021D1A052375FD88ECC6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Nlb_U23Llb_m89F742766F193AC83A5BF1E2057BBE6C878633A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_0;
		L_0 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * L_1 = (ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 *)il2cpp_codegen_object_new(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089_il2cpp_TypeInfo_var);
		ResolveEventHandler__ctor_m15F12272A52F4A22BB4FC6FA60E14CCC5B06A141(L_1, NULL, (intptr_t)((intptr_t)U23Nlb_U23Llb_m89F742766F193AC83A5BF1E2057BBE6C878633A3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		AppDomain_add_AssemblyResolve_mE0AB921A30FB539ED972978972D5E62F4C0E055A(L_0, L_1, /*hidden argument*/NULL);
		goto IL_001b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	} // end catch (depth: 1)

IL_001b:
	{
		return;
	}
}
// System.Reflection.Assembly #Blb.#Nlb::#Llb(System.Object,System.ResolveEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * U23Nlb_U23Llb_m89F742766F193AC83A5BF1E2057BBE6C878633A3 (RuntimeObject * ___U23Mlb0, ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D * ___U23Pp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m76C409734741D10DFD35D83B7C00B39319EBC4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF5B70EDA4CE7F91AB22BE0214CC35E070F610618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBF43EBF1EA6FEEF2D7BF196204EC5687EDC7D21F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Nlb_U23Llb_m89F742766F193AC83A5BF1E2057BBE6C878633A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E05974F2E21D75753247FF6D6813506443704AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C99311BEED2CB6C8889330D8AF3B187629D98B7);
		s_Il2CppMethodInitialized = true;
	}
	U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * V_10 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_11 = NULL;
	Assembly_t * V_12 = NULL;
	int32_t V_13 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_14 = NULL;
	Assembly_t * V_15 = NULL;
	String_t* V_16 = NULL;
	String_t* V_17 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	{
		ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D * L_0 = ___U23Pp1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ResolveEventArgs_get_Name_mC105BF1144527EE2FBA2CE14883C02167E7C7768_inline(L_0, /*hidden argument*/NULL);
		U23Wlb__ctor_m135F6B78DD9073734977C54CA9FF3273691010A2((U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA *)(&V_0), L_1, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = U23Wlb_U23Ulb_m80F143033430A1C0423ADAAB80D97EABB56462D2((U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA *)(&V_0), (bool)0, /*hidden argument*/NULL);
		V_1 = L_2;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_4 = V_1;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(_stringLiteral2E05974F2E21D75753247FF6D6813506443704AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9;
		L_9 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(_stringLiteral2E05974F2E21D75753247FF6D6813506443704AD, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_4 = L_10;
		V_5 = (bool)0;
		V_6 = (bool)0;
		V_7 = 0;
		goto IL_006b;
	}

IL_004f:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_3;
		int32_t L_12 = V_7;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_3;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		goto IL_0074;
	}

IL_0065:
	{
		int32_t L_21 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2));
	}

IL_006b:
	{
		int32_t L_22 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))), (int32_t)1)))))
		{
			goto IL_004f;
		}
	}

IL_0074:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00ca;
		}
	}
	{
		U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA  L_26 = V_0;
		String_t* L_27 = L_26.get_U23Tlb_3();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00ca;
		}
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_29;
		L_29 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA  L_30 = V_0;
		String_t* L_31 = L_30.get_U23eI_0();
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32;
		L_32 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		V_8 = 0;
		goto IL_00c1;
	}

IL_00a5:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_3;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00bb;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = V_3;
		int32_t L_41 = V_8;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		String_t* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_4 = L_43;
		goto IL_00ca;
	}

IL_00bb:
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)2));
	}

IL_00c1:
	{
		int32_t L_45 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = V_3;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))), (int32_t)1)))))
		{
			goto IL_00a5;
		}
	}

IL_00ca:
	{
		String_t* L_47 = V_4;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_024a;
		}
	}
	{
		String_t* L_49 = V_4;
		NullCheck(L_49);
		Il2CppChar L_50;
		L_50 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_49, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0126;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_51, ((int32_t)93), /*hidden argument*/NULL);
		V_9 = L_52;
		String_t* L_53 = V_4;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		String_t* L_55;
		L_55 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_53, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_56 = L_55;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_56, ((int32_t)122), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_57) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		NullCheck(L_56);
		int32_t L_58;
		L_58 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_56, ((int32_t)116), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_59 = V_4;
		int32_t L_60 = V_9;
		NullCheck(L_59);
		String_t* L_61;
		L_61 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_59, ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_61;
	}

IL_0126:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
		Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_62 = ((U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields*)il2cpp_codegen_static_fields_for(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var))->get_U23Elb_0();
		V_10 = L_62;
		Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_63 = V_10;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_63, /*hidden argument*/NULL);
	}

IL_0134:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
			Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_64 = ((U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields*)il2cpp_codegen_static_fields_for(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var))->get_U23Elb_0();
			String_t* L_65 = V_4;
			NullCheck(L_64);
			bool L_66;
			L_66 = Dictionary_2_ContainsKey_m76C409734741D10DFD35D83B7C00B39319EBC4EC(L_64, L_65, /*hidden argument*/Dictionary_2_ContainsKey_m76C409734741D10DFD35D83B7C00B39319EBC4EC_RuntimeMethod_var);
			if (!L_66)
			{
				goto IL_0155;
			}
		}

IL_0142:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
			Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_67 = ((U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields*)il2cpp_codegen_static_fields_for(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var))->get_U23Elb_0();
			String_t* L_68 = V_4;
			NullCheck(L_67);
			Assembly_t * L_69;
			L_69 = Dictionary_2_get_Item_mF5B70EDA4CE7F91AB22BE0214CC35E070F610618(L_67, L_68, /*hidden argument*/Dictionary_2_get_Item_mF5B70EDA4CE7F91AB22BE0214CC35E070F610618_RuntimeMethod_var);
			V_12 = L_69;
			IL2CPP_LEAVE(0x24C, FINALLY_0242);
		}

IL_0155:
		{
			Assembly_t * L_70;
			L_70 = il2cpp_codegen_get_executing_assembly(U23Nlb_U23Llb_m89F742766F193AC83A5BF1E2057BBE6C878633A3_RuntimeMethod_var);
			String_t* L_71 = V_4;
			NullCheck(L_70);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_72;
			L_72 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, String_t* >::Invoke(13 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_70, L_71);
			V_11 = L_72;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_73 = V_11;
			if (!L_73)
			{
				goto IL_0240;
			}
		}

IL_016a:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_74 = V_11;
			NullCheck(L_74);
			int64_t L_75;
			L_75 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_74);
			V_13 = ((int32_t)((int32_t)L_75));
			int32_t L_76 = V_13;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_76);
			V_14 = L_77;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_78 = V_11;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = V_14;
			int32_t L_80 = V_13;
			NullCheck(L_78);
			int32_t L_81;
			L_81 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_78, L_79, 0, L_80);
			bool L_82 = V_5;
			if (!L_82)
			{
				goto IL_0197;
			}
		}

IL_018e:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = V_14;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84;
			L_84 = U234lb_U233lb_m813A903C9FD67E10CDD248BF5E57B6D467EDF468(L_83, /*hidden argument*/NULL);
			V_14 = L_84;
		}

IL_0197:
		{
			V_15 = (Assembly_t *)NULL;
			bool L_85 = V_6;
			if (L_85)
			{
				goto IL_01b5;
			}
		}

IL_019e:
		try
		{ // begin try (depth: 2)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = V_14;
			Assembly_t * L_87;
			L_87 = Assembly_Load_m341D7789563BB7BC7C61896E45EF40EBDCF1A726(L_86, /*hidden argument*/NULL);
			V_15 = L_87;
			goto IL_01b5;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileLoadException_tBC0C288BF22D1EC6368CA47EDC597624C7A804CC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a9;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BadImageFormatException_t3BC0184883CA1CB226CDED7E76E91927184C683A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01af;
			}
			throw e;
		}

CATCH_01a9:
		{ // begin catch(System.IO.FileLoadException)
			V_6 = (bool)1;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b5;
		} // end catch (depth: 2)

CATCH_01af:
		{ // begin catch(System.BadImageFormatException)
			V_6 = (bool)1;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b5;
		} // end catch (depth: 2)

IL_01b5:
		{
			bool L_88 = V_6;
			if (!L_88)
			{
				goto IL_022c;
			}
		}

IL_01b9:
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
				String_t* L_89;
				L_89 = Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83(/*hidden argument*/NULL);
				String_t* L_90 = V_4;
				String_t* L_91;
				L_91 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3C99311BEED2CB6C8889330D8AF3B187629D98B7, L_89, L_90, /*hidden argument*/NULL);
				V_16 = L_91;
				String_t* L_92 = V_16;
				DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_93;
				L_93 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_92, /*hidden argument*/NULL);
				String_t* L_94 = V_16;
				U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA  L_95 = V_0;
				String_t* L_96 = L_95.get_U23eI_0();
				String_t* L_97;
				L_97 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_94, L_96, _stringLiteral0A104D015A90F9AC5C50E8ABB0FEEDEC8E32B0A4, /*hidden argument*/NULL);
				V_17 = L_97;
				String_t* L_98 = V_17;
				bool L_99;
				L_99 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_98, /*hidden argument*/NULL);
				if (L_99)
				{
					goto IL_021e;
				}
			}

IL_01f1:
			{
				String_t* L_100 = V_17;
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_101;
				L_101 = File_OpenWrite_mA2DA8B05D02F9D0EC99EA6E8FB8E35E7301883B9(L_100, /*hidden argument*/NULL);
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_102 = L_101;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = V_14;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = V_14;
				NullCheck(L_104);
				NullCheck(L_102);
				VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length))));
				NullCheck(L_102);
				VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_102);
				String_t* L_105 = V_17;
				IL2CPP_RUNTIME_CLASS_INIT(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
				bool L_106;
				L_106 = U23Nlb_U23Flb_m51D53CF221170E5D15ADD2A95AE345B16BB22F85(L_105, (String_t*)NULL, 4, /*hidden argument*/NULL);
				String_t* L_107 = V_16;
				bool L_108;
				L_108 = U23Nlb_U23Flb_m51D53CF221170E5D15ADD2A95AE345B16BB22F85(L_107, (String_t*)NULL, 4, /*hidden argument*/NULL);
			}

IL_021e:
			{
				String_t* L_109 = V_17;
				Assembly_t * L_110;
				L_110 = Assembly_LoadFile_m1EB640BBEC0A5E0F624BDC4EE2DB80E7ED15E3A0(L_109, /*hidden argument*/NULL);
				V_15 = L_110;
				goto IL_022c;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0229;
			}
			throw e;
		}

CATCH_0229:
		{ // begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_022c;
		} // end catch (depth: 2)

IL_022c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
			Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_111 = ((U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields*)il2cpp_codegen_static_fields_for(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var))->get_U23Elb_0();
			String_t* L_112 = V_4;
			Assembly_t * L_113 = V_15;
			NullCheck(L_111);
			Dictionary_2_set_Item_mBF43EBF1EA6FEEF2D7BF196204EC5687EDC7D21F(L_111, L_112, L_113, /*hidden argument*/Dictionary_2_set_Item_mBF43EBF1EA6FEEF2D7BF196204EC5687EDC7D21F_RuntimeMethod_var);
			Assembly_t * L_114 = V_15;
			V_12 = L_114;
			IL2CPP_LEAVE(0x24C, FINALLY_0242);
		}

IL_0240:
		{
			IL2CPP_LEAVE(0x24A, FINALLY_0242);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0242;
	}

FINALLY_0242:
	{ // begin finally (depth: 1)
		Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_115 = V_10;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_115, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(578)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(578)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24C, IL_024c)
		IL2CPP_JUMP_TBL(0x24A, IL_024a)
	}

IL_024a:
	{
		return (Assembly_t *)NULL;
	}

IL_024c:
	{
		Assembly_t * L_116 = V_12;
		return L_116;
	}
}
// System.Void #Blb.#Nlb::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Nlb__cctor_m83B29C0598A5020B9CBC60073447469E3002D0C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m835A28B5C72F97F0FC5CCF0AF2F87F31CD600EB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F * L_0 = (Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F *)il2cpp_codegen_object_new(Dictionary_2_t0FCD4C9D7979B6B32F10DDB5947D80C90C75BA0F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m835A28B5C72F97F0FC5CCF0AF2F87F31CD600EB5(L_0, /*hidden argument*/Dictionary_2__ctor_m835A28B5C72F97F0FC5CCF0AF2F87F31CD600EB5_RuntimeMethod_var);
		((U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_StaticFields*)il2cpp_codegen_static_fields_for(U23Nlb_t06066C49F9A4DAF7A162678DEB75A078C56327BD_il2cpp_TypeInfo_var))->set_U23Elb_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #Zlb.#Ylb::#zlb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Ylb_U23zlb_mC9222A6DADCBFB1F4295A1046A24065EB915235C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(U01_t3C4387516576FDD0AE2AAF6F60E896CDE41C5383_il2cpp_TypeInfo_var);
		U01_U01_m644AA5D2B8416DFA9951FB33EC652636BE3CA49D(/*hidden argument*/NULL);
		goto IL_000a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0007;
		}
		throw e;
	}

CATCH_0007:
	{ // begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000a;
	} // end catch (depth: 1)

IL_000a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_mECEB066D5F36E9525FCF8DDC41AD6C2B598E8783 (const RuntimeMethod* method)
{
	{
		U23Alb_U23zlb_mC6F6FC1E40EB0529E09D11DBC21634204B61EF66(/*hidden argument*/NULL);
		U23Ylb_U23zlb_mC9222A6DADCBFB1F4295A1046A24065EB915235C(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SmartAssembly.Attributes.PoweredByAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoweredByAttribute__ctor_mA11CC6057260B517AB4CA56CF5E7CA6994AFF388 (PoweredByAttribute_t63EC0CE53AE27627F4599C75645F3DFFC2B52CB1 * __this, String_t* p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean BackEnd.SendQueue::get_IsInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendQueue_get_IsInitialize_m092B27A34A43F5A475473953E73321D79B3BB3F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23K_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		bool L_2 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23xb_5();
		il2cpp_codegen_memory_barrier();
		V_2 = L_2;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Void BackEnd.SendQueue::StartSendQueue(System.Boolean,BackEnd.SendQueue/ExceptionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue_StartSendQueue_m90D5D8D8C4D4D171F2CF7B24F784DA17B9AA16A2 (bool ___isEnableLog0, ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * ___exceptionEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_U23Ab_mDD516F796CC4B25D2AA92309D5A07C5B2C1D3DD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B27BABCCB344AFC5CB815605F482ED4450EA302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386578B1EB4F7BD22286B0CB1945CAD7DB57D0A2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23K_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23xb_5(1);
			bool L_2 = ___isEnableLog0;
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23yb_6(L_2);
			ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_3 = ___exceptionEvent1;
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23zb_7(L_3);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23vb_2();
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_4, /*hidden argument*/NULL);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_6 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
			CancellationTokenSource__ctor_mC30FDC4F672A8495141CC213126B7FEA2A1BDCEB(L_6, /*hidden argument*/NULL);
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23wb_3(L_6);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_7 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23wb_3();
			NullCheck(L_7);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_8;
			L_8 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23G_0();
			if (!L_9)
			{
				goto IL_0064;
			}
		}

IL_004b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23G_0();
			NullCheck(L_10);
			int32_t L_11;
			L_11 = Task_get_Status_m322B3FEDAED081C1EA55F6E2922007475E7CAAED(L_10, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)3))))
			{
				goto IL_0064;
			}
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral386578B1EB4F7BD22286B0CB1945CAD7DB57D0A2, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}

IL_0064:
		{
			U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_12 = (U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 *)il2cpp_codegen_object_new(U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54_il2cpp_TypeInfo_var);
			U23Jb__ctor_m5E7369D0F515D3E7D1663290CF1EACB9D880322A(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23ub_1(L_12);
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23G_0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, NULL, (intptr_t)((intptr_t)SendQueue_U23Ab_mDD516F796CC4B25D2AA92309D5A07C5B2C1D3DD6_RuntimeMethod_var), /*hidden argument*/NULL);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_14 = V_2;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15 = (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)il2cpp_codegen_object_new(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task__ctor_m9F9FB6798D8BE38C03E6749AB35C319BC2C082C5(L_15, L_13, L_14, /*hidden argument*/NULL);
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23G_0(L_15);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23G_0();
			NullCheck(L_16);
			Task_Start_m0F8585ACF2990DAD4D7BE963AC277AED127DD96D(L_16, /*hidden argument*/NULL);
			bool L_17 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23yb_6();
			if (!L_17)
			{
				goto IL_00a6;
			}
		}

IL_009c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0B27BABCCB344AFC5CB815605F482ED4450EA302, /*hidden argument*/NULL);
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			bool L_18 = V_1;
			if (!L_18)
			{
				goto IL_00b1;
			}
		}

IL_00ab:
		{
			RuntimeObject * L_19 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_19, /*hidden argument*/NULL);
		}

IL_00b1:
		{
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		return;
	}
}
// System.Void BackEnd.SendQueue::StopSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue_StopSendQueue_m614E15341C1F13E52603889491375072034AB433 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74130B0DB63B9281760E3CE7DB3A1C8859BA1F02);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23K_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			bool L_2 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23xb_5();
			il2cpp_codegen_memory_barrier();
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x65, FINALLY_005b);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_3 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23vb_2();
			NullCheck(L_3);
			bool L_4;
			L_4 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_3, /*hidden argument*/NULL);
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23G_0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)NULL);
			il2cpp_codegen_memory_barrier();
			((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23xb_5(0);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_5 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23wb_3();
			NullCheck(L_5);
			CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(L_5, /*hidden argument*/NULL);
			bool L_6 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23yb_6();
			if (!L_6)
			{
				goto IL_0059;
			}
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral74130B0DB63B9281760E3CE7DB3A1C8859BA1F02, /*hidden argument*/NULL);
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x65, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(91)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		return;
	}
}
// System.Void BackEnd.SendQueue::PauseSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue_PauseSendQueue_mF85A26D89EC546B2A5C5AE18A08668D78FCCE201 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBAC2A6E4282AC00C1FFCB099D87865C91E1C2B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23K_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			bool L_2 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23xb_5();
			il2cpp_codegen_memory_barrier();
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23G_0();
			if (L_3)
			{
				goto IL_002e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23vb_2();
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_4, /*hidden argument*/NULL);
			bool L_6 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23yb_6();
			if (!L_6)
			{
				goto IL_004a;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralECBAC2A6E4282AC00C1FFCB099D87865C91E1C2B, /*hidden argument*/NULL);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(76)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		return;
	}
}
// System.Void BackEnd.SendQueue::ResumeSendQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue_ResumeSendQueue_m4B677302A69305237952BA0426E54AF2448FF813 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4B721B44501B18CD5BE78A2A86EAD6264C64FAF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23K_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			bool L_2 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23xb_5();
			il2cpp_codegen_memory_barrier();
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23G_0();
			if (L_3)
			{
				goto IL_002e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23vb_2();
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_4, /*hidden argument*/NULL);
			bool L_6 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23yb_6();
			if (!L_6)
			{
				goto IL_004a;
			}
		}

IL_0040:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE4B721B44501B18CD5BE78A2A86EAD6264C64FAF, /*hidden argument*/NULL);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(76)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		return;
	}
}
// System.Void BackEnd.SendQueue::#Ab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue_U23Ab_mDD516F796CC4B25D2AA92309D5A07C5B2C1D3DD6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0091;
		}

IL_0007:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23vb_2();
			NullCheck(L_0);
			bool L_1;
			L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_0);
			if (L_1)
			{
				goto IL_001c;
			}
		}

IL_0013:
		{
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(((int32_t)10), /*hidden argument*/NULL);
			goto IL_0091;
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_2 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23ub_1();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = U23Jb_U23Eb_m6023A949C222EC2E53E59DD2FAFDA44E2115808D(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			goto IL_0087;
		}

IL_0029:
		{
		}

IL_002a:
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
				U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_4 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23ub_1();
				NullCheck(L_4);
				bool L_5;
				L_5 = U23Jb_U23Db_m8C02EC6DEAAA5E7B7425665D7EE86E7A0E9FF92E(L_4, /*hidden argument*/NULL);
				if (!L_5)
				{
					goto IL_004a;
				}
			}

IL_0036:
			{
				IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
				U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_6 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23ub_1();
				NullCheck(L_6);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
				L_7 = U23Jb_U23Fb_m15CB25FFB83A6435370A4CF654F027252A7B45EC(L_6, /*hidden argument*/NULL);
				V_1 = L_7;
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_1;
				if (!L_8)
				{
					goto IL_004a;
				}
			}

IL_0044:
			{
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
				NullCheck(L_9);
				Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_9, /*hidden argument*/NULL);
			}

IL_004a:
			{
				goto IL_007d;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_004c;
			}
			throw e;
		}

CATCH_004c:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
				bool L_10 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23yb_6();
				if (!L_10)
				{
					goto IL_0069;
				}
			}

IL_0054:
			{
				Exception_t * L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
				String_t* L_13;
				L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2BBE0E0C1B0C78DB9E5F65037F46002FDD087E8)), L_12, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
			}

IL_0069:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
				ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_14 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23zb_7();
				if (!L_14)
				{
					goto IL_007b;
				}
			}

IL_0070:
			{
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
				ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_15 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23zb_7();
				Exception_t * L_16 = V_2;
				NullCheck(L_15);
				ExceptionEvent_Invoke_m3766B0D020EEF8F6198C1CF3B90AC5B4C2C24275(L_15, L_16, /*hidden argument*/NULL);
			}

IL_007b:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_007d;
			}
		} // end catch (depth: 2)

IL_007d:
		{
			int32_t L_17 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
		}

IL_0087:
		{
			int32_t L_18 = V_0;
			if ((((int32_t)L_18) > ((int32_t)0)))
			{
				goto IL_0029;
			}
		}

IL_008b:
		{
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
		}

IL_0091:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			bool L_19 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23xb_5();
			il2cpp_codegen_memory_barrier();
			if (L_19)
			{
				goto IL_0007;
			}
		}

IL_009d:
		{
			goto IL_00d0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009f;
		}
		throw e;
	}

CATCH_009f:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
			bool L_20 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23yb_6();
			if (!L_20)
			{
				goto IL_00bc;
			}
		}

IL_00a7:
		{
			Exception_t * L_21 = V_3;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			String_t* L_23;
			L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF347B4C3A8A9EBF05E398C101E5F88286673457C)), L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		}

IL_00bc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
			ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_24 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23zb_7();
			if (!L_24)
			{
				goto IL_00ce;
			}
		}

IL_00c3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
			ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_25 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23zb_7();
			Exception_t * L_26 = V_3;
			NullCheck(L_25);
			ExceptionEvent_Invoke_m3766B0D020EEF8F6198C1CF3B90AC5B4C2C24275(L_25, L_26, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d0;
		}
	} // end catch (depth: 1)

IL_00d0:
	{
		return;
	}
}
// System.Void BackEnd.SendQueue::Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue_Poll_m0224FA16E610254927A1B7B6421A1B4D21C7ED43 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		bool L_0 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23xb_5();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4C60F4EDD69F60C6BB2C33D877B0033EDBEDDA5F, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_1 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23ub_1();
			NullCheck(L_1);
			bool L_2;
			L_2 = U23Jb_U23Gb_mDA7207FAC5799037384EE573C28DCAEBC53126EF(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_004a;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_3 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23ub_1();
			NullCheck(L_3);
			int32_t L_4;
			L_4 = U23Jb_U23Hb_m53D8B7786352CCAF7C5A0FC99B382609B0098B3B(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			goto IL_0046;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
			U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 * L_5 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->get_U23ub_1();
			NullCheck(L_5);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
			L_6 = U23Jb_U23Ib_m3CCA946D5C9FD1C41EA6F19C1F68DC6BE1E7AD04(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_1;
			NullCheck(L_8);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			int32_t L_9 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		}

IL_0046:
		{
			int32_t L_10 = V_0;
			if ((((int32_t)L_10) > ((int32_t)0)))
			{
				goto IL_002e;
			}
		}

IL_004a:
		{
			goto IL_006c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004c;
		}
		throw e;
	}

CATCH_004c:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_11 = V_2;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
			ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_13 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23zb_7();
			if (!L_13)
			{
				goto IL_006a;
			}
		}

IL_005f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var)));
			ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * L_14 = ((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))))->get_U23zb_7();
			Exception_t * L_15 = V_2;
			NullCheck(L_14);
			ExceptionEvent_Invoke_m3766B0D020EEF8F6198C1CF3B90AC5B4C2C24275(L_14, L_15, /*hidden argument*/NULL);
		}

IL_006a:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_006c;
		}
	} // end catch (depth: 1)

IL_006c:
	{
		return;
	}
}
// System.Void BackEnd.SendQueue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueue__cctor_m7C6AE85AC64FAA4293031520B4E2F58049BD7EC6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23G_0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)NULL);
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23ub_1((U23Jb_t49AFA82208B20111DFDD94836757128AC9655E54 *)NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)0, /*hidden argument*/NULL);
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23vb_2(L_0);
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23wb_3((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)NULL);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23K_4(L_1);
		il2cpp_codegen_memory_barrier();
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23xb_5(0);
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23yb_6((bool)1);
		((SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_StaticFields*)il2cpp_codegen_static_fields_for(SendQueue_tE41728F2A02640582628EDC97EDE964FB8621C90_il2cpp_TypeInfo_var))->set_U23zb_7((ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #5lb.#4lb/#4mb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U234mb__ctor_mE1A14DCEFB0B35AF96A77BB667B2C2C12F289465 (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean #5lb.#4lb/#4mb::#TF(#5lb.#4lb/#Amb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U234mb_U23TF_mE2709D893E2123D30159ED1FCA43A56F8AA5F365 (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;

IL_0000:
	{
		int32_t L_0 = __this->get_U23amb_5();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_00b7;
			}
			case 3:
			{
				goto IL_0139;
			}
			case 4:
			{
				goto IL_01a4;
			}
			case 5:
			{
				goto IL_01da;
			}
		}
	}
	{
		goto IL_0000;
	}

IL_0027:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_2 = p0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_2, 5, /*hidden argument*/NULL);
		__this->set_U23Vmb_6(L_3);
		int32_t L_4 = __this->get_U23Vmb_6();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_003f:
	{
		int32_t L_5 = __this->get_U23Vmb_6();
		__this->set_U23Vmb_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)257))));
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_6 = p0;
		NullCheck(L_6);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_6, 5, /*hidden argument*/NULL);
		__this->set_U23amb_5(1);
	}

IL_005f:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_7 = p0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_7, 5, /*hidden argument*/NULL);
		__this->set_U23Wmb_7(L_8);
		int32_t L_9 = __this->get_U23Wmb_7();
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0077:
	{
		int32_t L_10 = __this->get_U23Wmb_7();
		__this->set_U23Wmb_7(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_11 = p0;
		NullCheck(L_11);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_11, 5, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_U23Vmb_6();
		int32_t L_13 = __this->get_U23Wmb_7();
		__this->set_U234b_9(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)));
		int32_t L_14 = __this->get_U234b_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->set_U23Tmb_3(L_15);
		__this->set_U23amb_5(2);
	}

IL_00b7:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_16 = p0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_16, 4, /*hidden argument*/NULL);
		__this->set_U23Xmb_8(L_17);
		int32_t L_18 = __this->get_U23Xmb_8();
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_00cf:
	{
		int32_t L_19 = __this->get_U23Xmb_8();
		__this->set_U23Xmb_8(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)4)));
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_20 = p0;
		NullCheck(L_20);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_20, 4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		__this->set_U23Smb_2(L_21);
		__this->set_U230mb_12(0);
		__this->set_U23amb_5(3);
		goto IL_0139;
	}

IL_0101:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_22 = p0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_22, 3, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_010f;
		}
	}
	{
		return (bool)0;
	}

IL_010f:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_25 = p0;
		NullCheck(L_25);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_25, 3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_U23Smb_2();
		IL2CPP_RUNTIME_CLASS_INIT(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ((U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields*)il2cpp_codegen_static_fields_for(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var))->get_U231mb_13();
		int32_t L_28 = __this->get_U230mb_12();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)((int32_t)((uint8_t)L_31)));
		int32_t L_32 = __this->get_U230mb_12();
		__this->set_U230mb_12(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
	}

IL_0139:
	{
		int32_t L_33 = __this->get_U230mb_12();
		int32_t L_34 = __this->get_U23Xmb_8();
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0101;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_U23Smb_2();
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_36 = (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)il2cpp_codegen_object_new(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4(L_36, L_35, /*hidden argument*/NULL);
		__this->set_U23Umb_4(L_36);
		__this->set_U23Smb_2((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_U230mb_12(0);
		__this->set_U23amb_5(4);
		goto IL_01a4;
	}

IL_016f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = __this->get_U23Tmb_3();
		int32_t L_38 = __this->get_U230mb_12();
		V_3 = L_38;
		int32_t L_39 = V_3;
		__this->set_U230mb_12(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		int32_t L_40 = V_3;
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)((uint8_t)L_41));
		V_4 = (uint8_t)L_42;
		__this->set_U23Zmb_11((uint8_t)L_42);
		uint8_t L_43 = V_4;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)L_43);
		int32_t L_44 = __this->get_U230mb_12();
		int32_t L_45 = __this->get_U234b_9();
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_01a4;
		}
	}
	{
		return (bool)1;
	}

IL_01a4:
	{
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_46 = __this->get_U23Umb_4();
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_47 = p0;
		NullCheck(L_46);
		int32_t L_48;
		L_48 = U23Pmb_U23Omb_m2D154F74B5566641E263C3EDF8B6344A13C44606(L_46, L_47, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		V_2 = L_49;
		if (!((int32_t)((int32_t)L_49&(int32_t)((int32_t)-16))))
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_01bd;
		}
	}
	{
		return (bool)0;
	}

IL_01bd:
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)17))))
		{
			goto IL_01c9;
		}
	}
	{
		__this->set_U23Zmb_11((uint8_t)0);
	}

IL_01c9:
	{
		int32_t L_52 = V_2;
		__this->set_U23Ymb_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)16))));
		__this->set_U23amb_5(5);
	}

IL_01da:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = ((U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields*)il2cpp_codegen_static_fields_for(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var))->get_U23Rmb_1();
		int32_t L_54 = __this->get_U23Ymb_10();
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_5 = L_56;
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_57 = p0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59;
		L_59 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_57, L_58, /*hidden argument*/NULL);
		V_6 = L_59;
		int32_t L_60 = V_6;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_01f9;
		}
	}
	{
		return (bool)0;
	}

IL_01f9:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_61 = p0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_61, L_62, /*hidden argument*/NULL);
		int32_t L_63 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = ((U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields*)il2cpp_codegen_static_fields_for(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var))->get_U23Qmb_0();
		int32_t L_65 = __this->get_U23Ymb_10();
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_67));
		goto IL_0232;
	}

IL_0214:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = __this->get_U23Tmb_3();
		int32_t L_69 = __this->get_U230mb_12();
		V_3 = L_69;
		int32_t L_70 = V_3;
		__this->set_U230mb_12(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)));
		int32_t L_71 = V_3;
		uint8_t L_72 = __this->get_U23Zmb_11();
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (uint8_t)L_72);
	}

IL_0232:
	{
		int32_t L_73 = V_6;
		int32_t L_74 = L_73;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1));
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		int32_t L_75 = __this->get_U230mb_12();
		int32_t L_76 = __this->get_U234b_9();
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_024c;
		}
	}
	{
		return (bool)1;
	}

IL_024c:
	{
		__this->set_U23amb_5(4);
		goto IL_0000;
	}
}
// #5lb.#4lb/#Pmb #5lb.#4lb/#4mb::#2mb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * U234mb_U232mb_mE65556041932BBE51D0E6D72BD699F69D79D8842 (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t L_0 = __this->get_U23Vmb_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_U23Tmb_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4 = __this->get_U23Vmb_6();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_6 = (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)il2cpp_codegen_object_new(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// #5lb.#4lb/#Pmb #5lb.#4lb/#4mb::#3mb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * U234mb_U233mb_m5B32D66CEB78C6179DB6575C605864B6608D0F7F (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t L_0 = __this->get_U23Wmb_7();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_U23Tmb_3();
		int32_t L_3 = __this->get_U23Vmb_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		int32_t L_5 = __this->get_U23Wmb_7();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_2, L_3, (RuntimeArray *)(RuntimeArray *)L_4, 0, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_7 = (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)il2cpp_codegen_object_new(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4(L_7, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void #5lb.#4lb/#4mb::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U234mb__cctor_m8A2014D854FEC0DA95224314F895462B3DC28A06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23jnb_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23mnb_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23onb_9_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23onb_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields*)il2cpp_codegen_static_fields_for(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var))->set_U23Qmb_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23jnb_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields*)il2cpp_codegen_static_fields_for(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var))->set_U23Rmb_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23mnb_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_StaticFields*)il2cpp_codegen_static_fields_for(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var))->set_U231mb_13(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 #5lb.#4lb/#Amb::#smb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, int32_t p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U23rmb_4();
		int32_t L_1 = p0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_2 = __this->get_U23omb_1();
		int32_t L_3 = __this->get_U23pmb_2();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		uint32_t L_4 = __this->get_U23qmb_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_U23nmb_0();
		int32_t L_6 = __this->get_U23omb_1();
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->set_U23omb_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_U23nmb_0();
		int32_t L_12 = __this->get_U23omb_1();
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->set_U23omb_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_0;
		NullCheck(L_11);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = __this->get_U23rmb_4();
		__this->set_U23qmb_3(((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)255)))<<(int32_t)8))))<<(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)31))))))));
		int32_t L_18 = __this->get_U23rmb_4();
		__this->set_U23rmb_4(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)16))));
	}

IL_007e:
	{
		uint32_t L_19 = __this->get_U23qmb_3();
		int32_t L_20 = p0;
		return ((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_19))&(int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)31))))), (int32_t)1))))))));
	}
}
// System.Void #5lb.#4lb/#Amb::#tmb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, int32_t p0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U23qmb_3();
		int32_t L_1 = p0;
		__this->set_U23qmb_3(((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)L_1&(int32_t)((int32_t)31))))));
		int32_t L_2 = __this->get_U23rmb_4();
		int32_t L_3 = p0;
		__this->set_U23rmb_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		return;
	}
}
// System.Int32 #5lb.#4lb/#Amb::#umb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23umb_m31DB15CB70BD20AAFD754A4E22097E768F54160F (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23rmb_4();
		return L_0;
	}
}
// System.Int32 #5lb.#4lb/#Amb::#vmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23vmb_mF2F34639227F0A85C8D8ABA48859720796F32D2B (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23pmb_2();
		int32_t L_1 = __this->get_U23omb_1();
		int32_t L_2 = __this->get_U23rmb_4();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)((int32_t)((int32_t)L_2>>(int32_t)3))));
	}
}
// System.Void #5lb.#4lb/#Amb::#wmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb_U23wmb_mB9B8BA1A10E56BF63533B3FDFD3B206A35742CF5 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U23qmb_3();
		int32_t L_1 = __this->get_U23rmb_4();
		__this->set_U23qmb_3(((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)7))&(int32_t)((int32_t)31))))));
		int32_t L_2 = __this->get_U23rmb_4();
		__this->set_U23rmb_4(((int32_t)((int32_t)L_2&(int32_t)((int32_t)-8))));
		return;
	}
}
// System.Boolean #5lb.#4lb/#Amb::#xmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23Amb_U23xmb_mF7DF26B903E592BAD2D770460D2C21CD2750E3D9 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23omb_1();
		int32_t L_1 = __this->get_U23pmb_2();
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 #5lb.#4lb/#Amb::#ymb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Amb_U23ymb_m29733D6383E6E040D1EE1369AE10D0A3C37ED958 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0004:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		p1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		uint32_t L_3 = __this->get_U23qmb_3();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)((uint8_t)L_3)));
		uint32_t L_4 = __this->get_U23qmb_3();
		__this->set_U23qmb_3(((int32_t)((uint32_t)L_4>>8)));
		int32_t L_5 = __this->get_U23rmb_4();
		__this->set_U23rmb_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)8)));
		int32_t L_6 = p2;
		p2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_8 = __this->get_U23rmb_4();
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = p2;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}

IL_0045:
	{
		int32_t L_10 = p2;
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_004a:
	{
		int32_t L_12 = __this->get_U23pmb_2();
		int32_t L_13 = __this->get_U23omb_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
		int32_t L_14 = p2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_1;
		p2 = L_16;
	}

IL_005f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_U23nmb_0();
		int32_t L_18 = __this->get_U23omb_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = p2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_17, L_18, (RuntimeArray *)(RuntimeArray *)L_19, L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = __this->get_U23omb_1();
		int32_t L_23 = p2;
		__this->set_U23omb_1(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23)));
		int32_t L_24 = __this->get_U23omb_1();
		int32_t L_25 = __this->get_U23pmb_2();
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))&(int32_t)1)))
		{
			goto IL_00bd;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_U23nmb_0();
		int32_t L_27 = __this->get_U23omb_1();
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->set_U23omb_1(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		int32_t L_29 = V_2;
		NullCheck(L_26);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		__this->set_U23qmb_3(((int32_t)((int32_t)L_31&(int32_t)((int32_t)255))));
		__this->set_U23rmb_4(8);
	}

IL_00bd:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = p2;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33));
	}
}
// System.Void #5lb.#4lb/#Amb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb__ctor_m3367012C5DDC94FCADFEB1E59C9E744D1A376FD5 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void #5lb.#4lb/#Amb::#zmb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Amb_U23zmb_mCBEE872EFDDB3361E9FFCF0181C4FEC33F9A6371 (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U23omb_1();
		int32_t L_1 = __this->get_U23pmb_2();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U23Amb_U23zmb_mCBEE872EFDDB3361E9FFCF0181C4FEC33F9A6371_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		int32_t L_5 = p1;
		if ((((int32_t)0) > ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = p1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = p0;
		NullCheck(L_9);
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_10 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U23Amb_U23zmb_mCBEE872EFDDB3361E9FFCF0181C4FEC33F9A6371_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_11 = p2;
		if (!((int32_t)((int32_t)L_11&(int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_12 = __this->get_U23qmb_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = p0;
		int32_t L_14 = p1;
		int32_t L_15 = L_14;
		p1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = __this->get_U23rmb_4();
		__this->set_U23qmb_3(((int32_t)((int32_t)L_12|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31))))))));
		int32_t L_19 = __this->get_U23rmb_4();
		__this->set_U23rmb_4(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)8)));
	}

IL_0064:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = p0;
		__this->set_U23nmb_0(L_20);
		int32_t L_21 = p1;
		__this->set_U23omb_1(L_21);
		int32_t L_22 = V_0;
		__this->set_U23pmb_2(L_22);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #5lb.#4lb/#Jmb::#or(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb_U23or_m3F9D367E4CEA60E064FA439ACDA89378DC96711B (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, int32_t p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U23Cmb_2();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_U23Cmb_2(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U23Jmb_U23or_m3F9D367E4CEA60E064FA439ACDA89378DC96711B_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_U23nmb_0();
		int32_t L_5 = __this->get_U23Bmb_1();
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->set_U23Bmb_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = V_0;
		int32_t L_8 = p0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)((uint8_t)L_8)));
		int32_t L_9 = __this->get_U23Bmb_1();
		__this->set_U23Bmb_1(((int32_t)((int32_t)L_9&(int32_t)((int32_t)32767))));
		return;
	}
}
// System.Void #5lb.#4lb/#Jmb::#Dmb(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb_U23Dmb_m59533C48A4C96F82D54D95C1161D8DD78D22B605 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0042;
	}

IL_0002:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U23nmb_0();
		int32_t L_1 = __this->get_U23Bmb_1();
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->set_U23Bmb_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_U23nmb_0();
		int32_t L_5 = p0;
		int32_t L_6 = L_5;
		p0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_8);
		int32_t L_9 = __this->get_U23Bmb_1();
		__this->set_U23Bmb_1(((int32_t)((int32_t)L_9&(int32_t)((int32_t)32767))));
		int32_t L_10 = p0;
		p0 = ((int32_t)((int32_t)L_10&(int32_t)((int32_t)32767)));
	}

IL_0042:
	{
		int32_t L_11 = p1;
		int32_t L_12 = L_11;
		p1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void #5lb.#4lb/#Jmb::#Emb(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb_U23Emb_m06EFD7AA50AC36BEE1E84D8E73F79CDF89EB5B25 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U23Cmb_2();
		int32_t L_1 = p0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		V_2 = L_2;
		__this->set_U23Cmb_2(L_2);
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U23Jmb_U23Emb_m06EFD7AA50AC36BEE1E84D8E73F79CDF89EB5B25_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_5 = __this->get_U23Bmb_1();
		int32_t L_6 = p1;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6))&(int32_t)((int32_t)32767)));
		int32_t L_7 = p0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_10 = __this->get_U23Bmb_1();
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_12 = p0;
		int32_t L_13 = p1;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0092;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_U23nmb_0();
		int32_t L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_U23nmb_0();
		int32_t L_17 = __this->get_U23Bmb_1();
		int32_t L_18 = p0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_14, L_15, (RuntimeArray *)(RuntimeArray *)L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_U23Bmb_1();
		int32_t L_20 = p0;
		__this->set_U23Bmb_1(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		return;
	}

IL_006e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_U23nmb_0();
		int32_t L_22 = __this->get_U23Bmb_1();
		V_2 = L_22;
		int32_t L_23 = V_2;
		__this->set_U23Bmb_1(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		int32_t L_24 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_U23nmb_0();
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		NullCheck(L_25);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)L_29);
	}

IL_0092:
	{
		int32_t L_30 = p0;
		int32_t L_31 = L_30;
		p0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_009c:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = p0;
		int32_t L_34 = p1;
		U23Jmb_U23Dmb_m59533C48A4C96F82D54D95C1161D8DD78D22B605(__this, L_32, L_33, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 #5lb.#4lb/#Jmb::#Fmb(#5lb.#4lb/#Amb,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Fmb_m3266D3A3CAE45E5187C6D1F580E933F96516D167 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * p0, int32_t p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p1;
		int32_t L_1 = __this->get_U23Cmb_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_1)), /*hidden argument*/NULL);
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_3 = p0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = U23Amb_U23vmb_mF2F34639227F0A85C8D8ABA48859720796F32D2B(L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_2, L_4, /*hidden argument*/NULL);
		p1 = L_5;
		int32_t L_6 = __this->get_U23Bmb_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_6));
		int32_t L_7 = p1;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_005d;
		}
	}
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_9 = p0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_U23nmb_0();
		int32_t L_11 = __this->get_U23Bmb_1();
		int32_t L_12 = V_1;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = U23Amb_U23ymb_m29733D6383E6E040D1EE1369AE10D0A3C37ED958(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_16 = V_0;
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_17 = p0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_U23nmb_0();
		int32_t L_19 = p1;
		int32_t L_20 = V_1;
		NullCheck(L_17);
		int32_t L_21;
		L_21 = U23Amb_U23ymb_m29733D6383E6E040D1EE1369AE10D0A3C37ED958(L_17, L_18, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_21));
		goto IL_0071;
	}

IL_005d:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_22 = p0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_U23nmb_0();
		int32_t L_24 = __this->get_U23Bmb_1();
		int32_t L_25 = p1;
		NullCheck(L_22);
		int32_t L_26;
		L_26 = U23Amb_U23ymb_m29733D6383E6E040D1EE1369AE10D0A3C37ED958(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
	}

IL_0071:
	{
		int32_t L_27 = __this->get_U23Bmb_1();
		int32_t L_28 = V_0;
		__this->set_U23Bmb_1(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28))&(int32_t)((int32_t)32767))));
		int32_t L_29 = __this->get_U23Cmb_2();
		int32_t L_30 = V_0;
		__this->set_U23Cmb_2(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
		int32_t L_31 = V_0;
		return L_31;
	}
}
// System.Int32 #5lb.#4lb/#Jmb::#Gmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Gmb_m6E8DDF32A3C8946F7B480B7D191571C9D6E1E843 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23Cmb_2();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_0));
	}
}
// System.Int32 #5lb.#4lb/#Jmb::#Hmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Hmb_m6AF3D3E45AD27B4222D643094214C58CE2B86FA9 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23Cmb_2();
		return L_0;
	}
}
// System.Int32 #5lb.#4lb/#Jmb::#Imb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Imb_m931D7682A95DA8B36840E44CDBC88657CF085C48 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U23Bmb_1();
		V_0 = L_0;
		int32_t L_1 = p2;
		int32_t L_2 = __this->get_U23Cmb_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = __this->get_U23Cmb_2();
		p2 = L_3;
		goto IL_0030;
	}

IL_001a:
	{
		int32_t L_4 = __this->get_U23Bmb_1();
		int32_t L_5 = __this->get_U23Cmb_2();
		int32_t L_6 = p2;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)L_6))&(int32_t)((int32_t)32767)));
	}

IL_0030:
	{
		int32_t L_7 = p2;
		V_1 = L_7;
		int32_t L_8 = p2;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_U23nmb_0();
		int32_t L_12 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = p0;
		int32_t L_14 = p1;
		int32_t L_15 = V_2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_12)), (RuntimeArray *)(RuntimeArray *)L_13, L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = p1;
		int32_t L_17 = V_2;
		p1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
		int32_t L_18 = V_0;
		p2 = L_18;
	}

IL_0057:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_U23nmb_0();
		int32_t L_20 = V_0;
		int32_t L_21 = p2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = p0;
		int32_t L_23 = p1;
		int32_t L_24 = p2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), (RuntimeArray *)(RuntimeArray *)L_22, L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = __this->get_U23Cmb_2();
		int32_t L_26 = V_1;
		__this->set_U23Cmb_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)));
		int32_t L_27 = __this->get_U23Cmb_2();
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_28 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U23Jmb_U23Imb_m931D7682A95DA8B36840E44CDBC88657CF085C48_RuntimeMethod_var)));
	}

IL_0085:
	{
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Void #5lb.#4lb/#Jmb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Jmb__ctor_mD5FD0EDF8A87E38CCA8DF242D02A610EBC0C08E0 (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->set_U23nmb_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #5lb.#4lb/#Pmb::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Pmb__cctor_mBEEFCC8B72CBD83C0CBC09C2E1E23DF8AAC87D81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)8);
	}

IL_0017:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)144))))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_002a;
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)9));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)256))))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003c;
	}

IL_0034:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)7);
	}

IL_003c:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)280))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_004e;
	}

IL_0046:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)8);
	}

IL_004e:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)288))))
		{
			goto IL_0046;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_18 = (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)il2cpp_codegen_object_new(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4(L_18, L_17, /*hidden argument*/NULL);
		((U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields*)il2cpp_codegen_static_fields_for(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var))->set_U23Lmb_1(L_18);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_19;
		V_1 = 0;
		goto IL_0075;
	}

IL_006d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)5);
	}

IL_0075:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)32))))
		{
			goto IL_006d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_0;
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_25 = (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)il2cpp_codegen_object_new(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4(L_25, L_24, /*hidden argument*/NULL);
		((U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields*)il2cpp_codegen_static_fields_for(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var))->set_U23Mmb_2(L_25);
		return;
	}
}
// System.Void #5lb.#4lb/#Pmb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Pmb__ctor_mC3024562D4A64CD3F20906EABD776F24E8535DF4 (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = p0;
		U23Pmb_U23Nmb_mBB757100430265F3C3170F7B55096039DBB6BDE1(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void #5lb.#4lb/#Pmb::#Nmb(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Pmb_U23Nmb_mBB757100430265F3C3170F7B55096039DBB6BDE1 (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_1;
		V_5 = 0;
		goto IL_0033;
	}

IL_0015:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = p0;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		int32_t L_6 = V_6;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_0;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_12 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = p0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		V_2 = 0;
		V_3 = ((int32_t)512);
		V_7 = 1;
		goto IL_008e;
	}

IL_0047:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_1;
		int32_t L_15 = V_7;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		int32_t L_17 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = V_0;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)L_21<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_22))&(int32_t)((int32_t)31)))))));
		int32_t L_23 = V_7;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)10))))
		{
			goto IL_0088;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = V_1;
		int32_t L_25 = V_7;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_8 = ((int32_t)((int32_t)L_27&(int32_t)((int32_t)130944)));
		int32_t L_28 = V_2;
		V_9 = ((int32_t)((int32_t)L_28&(int32_t)((int32_t)130944)));
		int32_t L_29 = V_3;
		int32_t L_30 = V_9;
		int32_t L_31 = V_8;
		int32_t L_32 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31))>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_32))&(int32_t)((int32_t)31)))))));
	}

IL_0088:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008e:
	{
		int32_t L_34 = V_7;
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_35 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_36 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_35);
		__this->set_U23Kmb_0(L_36);
		V_4 = ((int32_t)512);
		V_10 = ((int32_t)15);
		goto IL_010d;
	}

IL_00ad:
	{
		int32_t L_37 = V_2;
		V_11 = ((int32_t)((int32_t)L_37&(int32_t)((int32_t)130944)));
		int32_t L_38 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = V_0;
		int32_t L_40 = V_10;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = V_10;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)((int32_t)((int32_t)L_42<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_43))&(int32_t)((int32_t)31)))))));
		int32_t L_44 = V_2;
		V_12 = ((int32_t)((int32_t)L_44&(int32_t)((int32_t)130944)));
		goto IL_0101;
	}

IL_00d1:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = __this->get_U23Kmb_0();
		int32_t L_46 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var);
		int16_t L_47;
		L_47 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_4;
		int32_t L_49 = V_10;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int16_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)((-L_48))<<(int32_t)4))|(int32_t)L_49)))));
		int32_t L_50 = V_4;
		int32_t L_51 = V_10;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)((int32_t)9)))&(int32_t)((int32_t)31)))))));
		int32_t L_52 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)((int32_t)128)));
	}

IL_0101:
	{
		int32_t L_53 = V_12;
		int32_t L_54 = V_11;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_55 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1));
	}

IL_010d:
	{
		int32_t L_56 = V_10;
		if ((((int32_t)L_56) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00ad;
		}
	}
	{
		V_13 = 0;
		goto IL_01c6;
	}

IL_011b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = p0;
		int32_t L_58 = V_13;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_14 = L_60;
		int32_t L_61 = V_14;
		if (!L_61)
		{
			goto IL_01c0;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_1;
		int32_t L_63 = V_14;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_2 = L_65;
		int32_t L_66 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var);
		int16_t L_67;
		L_67 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(L_66, /*hidden argument*/NULL);
		V_15 = L_67;
		int32_t L_68 = V_14;
		if ((((int32_t)L_68) > ((int32_t)((int32_t)9))))
		{
			goto IL_0163;
		}
	}

IL_013b:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_69 = __this->get_U23Kmb_0();
		int32_t L_70 = V_15;
		int32_t L_71 = V_13;
		int32_t L_72 = V_14;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (int16_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_71<<(int32_t)4))|(int32_t)L_72)))));
		int32_t L_73 = V_15;
		int32_t L_74 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)31)))))));
		int32_t L_75 = V_15;
		if ((((int32_t)L_75) < ((int32_t)((int32_t)512))))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_01b0;
	}

IL_0163:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_76 = __this->get_U23Kmb_0();
		int32_t L_77 = V_15;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)((int32_t)L_77&(int32_t)((int32_t)511)));
		int16_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_16 = L_79;
		int32_t L_80 = V_16;
		V_17 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80&(int32_t)((int32_t)15)))&(int32_t)((int32_t)31)))));
		int32_t L_81 = V_16;
		V_16 = ((-((int32_t)((int32_t)L_81>>(int32_t)4))));
	}

IL_0187:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_82 = __this->get_U23Kmb_0();
		int32_t L_83 = V_16;
		int32_t L_84 = V_15;
		int32_t L_85 = V_13;
		int32_t L_86 = V_14;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_83|(int32_t)((int32_t)((int32_t)L_84>>(int32_t)((int32_t)9)))))), (int16_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_85<<(int32_t)4))|(int32_t)L_86)))));
		int32_t L_87 = V_15;
		int32_t L_88 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_88&(int32_t)((int32_t)31)))))));
		int32_t L_89 = V_15;
		int32_t L_90 = V_17;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_0187;
		}
	}

IL_01b0:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = V_1;
		int32_t L_92 = V_14;
		int32_t L_93 = V_2;
		int32_t L_94 = V_14;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_92), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_94))&(int32_t)((int32_t)31))))))));
	}

IL_01c0:
	{
		int32_t L_95 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_01c6:
	{
		int32_t L_96 = V_13;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = p0;
		NullCheck(L_97);
		if ((((int32_t)L_96) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length))))))
		{
			goto IL_011b;
		}
	}
	{
		return;
	}
}
// System.Int32 #5lb.#4lb/#Pmb::#Omb(#5lb.#4lb/#Amb)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23Pmb_U23Omb_m2D154F74B5566641E263C3EDF8B6344A13C44606 (U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * __this, U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * p0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_0 = p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_0, ((int32_t)9), /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		V_0 = L_2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_U23Kmb_0();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int16_t L_7 = L_6;
		V_1 = L_7;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_8 = p0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_8, ((int32_t)((int32_t)L_9&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		return ((int32_t)((int32_t)L_10>>(int32_t)4));
	}

IL_002b:
	{
		int32_t L_11 = V_1;
		V_2 = ((-((int32_t)((int32_t)L_11>>(int32_t)4))));
		int32_t L_12 = V_1;
		V_3 = ((int32_t)((int32_t)L_12&(int32_t)((int32_t)15)));
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_13 = p0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_13, L_14, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		V_0 = L_16;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = __this->get_U23Kmb_0();
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)L_19>>(int32_t)((int32_t)9)))));
		int16_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_22 = p0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_22, ((int32_t)((int32_t)L_23&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		return ((int32_t)((int32_t)L_24>>(int32_t)4));
	}

IL_005d:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_25 = p0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = U23Amb_U23umb_m31DB15CB70BD20AAFD754A4E22097E768F54160F_inline(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_27 = p0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29;
		L_29 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = __this->get_U23Kmb_0();
		int32_t L_31 = V_2;
		int32_t L_32 = V_0;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)((int32_t)L_31|(int32_t)((int32_t)((int32_t)L_32>>(int32_t)((int32_t)9)))));
		int16_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_1 = L_34;
		int32_t L_35 = V_1;
		int32_t L_36 = V_4;
		if ((((int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)15)))) > ((int32_t)L_36)))
		{
			goto IL_0092;
		}
	}
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_37 = p0;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_37, ((int32_t)((int32_t)L_38&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_39 = V_1;
		return ((int32_t)((int32_t)L_39>>(int32_t)4));
	}

IL_0092:
	{
		return (-1);
	}

IL_0094:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_40 = p0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = U23Amb_U23umb_m31DB15CB70BD20AAFD754A4E22097E768F54160F_inline(L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_42 = p0;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44;
		L_44 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_42, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = __this->get_U23Kmb_0();
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int16_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_1 = L_48;
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_50 = V_1;
		int32_t L_51 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_50&(int32_t)((int32_t)15)))) > ((int32_t)L_51)))
		{
			goto IL_00c8;
		}
	}
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_52 = p0;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_52, ((int32_t)((int32_t)L_53&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_54 = V_1;
		return ((int32_t)((int32_t)L_54>>(int32_t)4));
	}

IL_00c8:
	{
		return (-1);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int16 #5lb.#4lb/#bnb::#anb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D (int32_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U235mb_1();
		int32_t L_1 = p0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)15)));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U235mb_1();
		int32_t L_5 = p0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5>>(int32_t)4))&(int32_t)((int32_t)15)));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U235mb_1();
		int32_t L_9 = p0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)8))&(int32_t)((int32_t)15)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U235mb_1();
		int32_t L_13 = p0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)L_13>>(int32_t)((int32_t)12)));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)12)))|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))|(int32_t)L_15))));
	}
}
// System.Void #5lb.#4lb/#bnb::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23bnb__cctor_m838907C028BD3125ECE6EB530B11E15886B4F889 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23knb_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23mnb_7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23mnb_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->set_U231mb_0(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23knb_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->set_U235mb_1(L_4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)286));
		((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->set_U236mb_2(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)286));
		((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->set_U237mb_3(L_7);
		V_0 = 0;
		goto IL_006e;
	}

IL_0050:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U236mb_2();
		int32_t L_9 = V_0;
		int32_t L_10 = V_0;
		int16_t L_11;
		L_11 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_10))<<(int32_t)8)), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int16_t)L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U237mb_3();
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)8);
	}

IL_006e:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)144))))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_009a;
	}

IL_0078:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U236mb_2();
		int32_t L_17 = V_0;
		int32_t L_18 = V_0;
		int16_t L_19;
		L_19 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_18))<<(int32_t)7)), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int16_t)L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U237mb_3();
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)9));
	}

IL_009a:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)256))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00c6;
	}

IL_00a4:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U236mb_2();
		int32_t L_25 = V_0;
		int32_t L_26 = V_0;
		int16_t L_27;
		L_27 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)-256), (int32_t)L_26))<<(int32_t)((int32_t)9))), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int16_t)L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U237mb_3();
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)7);
	}

IL_00c6:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)280))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00ee;
	}

IL_00d0:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U236mb_2();
		int32_t L_33 = V_0;
		int32_t L_34 = V_0;
		int16_t L_35;
		L_35 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)-88), (int32_t)L_34))<<(int32_t)8)), /*hidden argument*/NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int16_t)L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U237mb_3();
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)8);
	}

IL_00ee:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)286))))
		{
			goto IL_00d0;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->set_U238mb_4(L_40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->set_U239mb_5(L_41);
		V_0 = 0;
		goto IL_012e;
	}

IL_0112:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_42 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U238mb_4();
		int32_t L_43 = V_0;
		int32_t L_44 = V_0;
		int16_t L_45;
		L_45 = U23bnb_U23anb_mCBF5AD421C1BD35C9867563B6E087428A1D9882D(((int32_t)((int32_t)L_44<<(int32_t)((int32_t)11))), /*hidden argument*/NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (int16_t)L_45);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = ((U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_StaticFields*)il2cpp_codegen_static_fields_for(U23bnb_t369A3969002DFD1D161AEAA69EBA0773AB70AED5_il2cpp_TypeInfo_var))->get_U239mb_5();
		int32_t L_47 = V_0;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (uint8_t)5);
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_012e:
	{
		int32_t L_49 = V_0;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)30))))
		{
			goto IL_0112;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 #5lb.#4lb/#enb::#cnb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, __this);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, __this);
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)8))));
	}
}
// System.Int32 #5lb.#4lb/#enb::#dnb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23enb_U23dnb_mCE4329BBAE2450152CFEE3086D7CC4B34504101F (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = U23enb_U23cnb_m885B515A5A2A292F67AD22BE7A1EF47821DDFC2F(__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))));
	}
}
// System.Void #5lb.#4lb/#enb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23enb__ctor_m851FE4AF3C0F98788DCDD6C4F8FD1E1A7FC5091C (U23enb_t3A3D221653771E3862F9347E3E5157A4EA4FFF5A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = p0;
		MemoryStream__ctor_m27461F2CC712138C855A9C1CDCB211CC5BDBAC9A(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void #5lb.#4lb/#mmb::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23mmb__ctor_m2C5228236605748A8CBB3ADCC0421FF43F130227 (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_0 = (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA *)il2cpp_codegen_object_new(U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA_il2cpp_TypeInfo_var);
		U23Amb__ctor_m3367012C5DDC94FCADFEB1E59C9E744D1A376FD5(L_0, /*hidden argument*/NULL);
		__this->set_U23a1_10(L_0);
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_1 = (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D *)il2cpp_codegen_object_new(U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D_il2cpp_TypeInfo_var);
		U23Jmb__ctor_mD5FD0EDF8A87E38CCA8DF242D02A610EBC0C08E0(L_1, /*hidden argument*/NULL);
		__this->set_U23gmb_11(L_1);
		__this->set_U23amb_4(2);
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_2 = __this->get_U23a1_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = p0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = p0;
		NullCheck(L_4);
		NullCheck(L_2);
		U23Amb_U23zmb_mCBEE872EFDDB3361E9FFCF0181C4FEC33F9A6371(L_2, L_3, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean #5lb.#4lb/#mmb::#kmb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23mmb_U23kmb_mB8714F201C6C17E624D96EC835B53D2144978ABC (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_0 = __this->get_U23gmb_11();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = U23Jmb_U23Gmb_m6E8DDF32A3C8946F7B480B7D191571C9D6E1E843(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_01a8;
	}

IL_0011:
	{
		int32_t L_2 = __this->get_U23amb_4();
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)7)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_0104;
			}
			case 3:
			{
				goto IL_0136;
			}
		}
	}
	{
		goto IL_01a8;
	}

IL_0035:
	{
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_4 = __this->get_U23gmb_11();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		U23Jmb_U23or_m3F9D367E4CEA60E064FA439ACDA89378DC96711B(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		V_0 = L_7;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)258))))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)1;
	}

IL_004f:
	{
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_8 = __this->get_U23imb_13();
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_9 = __this->get_U23a1_10();
		NullCheck(L_8);
		int32_t L_10;
		L_10 = U23Pmb_U23Omb_m2D154F74B5566641E263C3EDF8B6344A13C44606(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		V_1 = L_11;
		if (!((int32_t)((int32_t)L_11&(int32_t)((int32_t)-256))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)257))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0078:
	{
		__this->set_U23jmb_14((U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)NULL);
		__this->set_U23imb_13((U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A *)NULL);
		__this->set_U23amb_4(2);
		return (bool)1;
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = ((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->get_U236lb_0();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)257)));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->set_U23cmb_6(L_17);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = ((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->get_U237lb_1();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)257)));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->set_U23bmb_5(L_21);
	}

IL_00b5:
	{
		int32_t L_22 = __this->get_U23bmb_5();
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00fc;
		}
	}
	{
		__this->set_U23amb_4(8);
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_23 = __this->get_U23a1_10();
		int32_t L_24 = __this->get_U23bmb_5();
		NullCheck(L_23);
		int32_t L_25;
		L_25 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		return (bool)0;
	}

IL_00dd:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_27 = __this->get_U23a1_10();
		int32_t L_28 = __this->get_U23bmb_5();
		NullCheck(L_27);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = __this->get_U23cmb_6();
		int32_t L_30 = V_3;
		__this->set_U23cmb_6(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
	}

IL_00fc:
	{
		__this->set_U23amb_4(((int32_t)9));
	}

IL_0104:
	{
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_31 = __this->get_U23jmb_14();
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_32 = __this->get_U23a1_10();
		NullCheck(L_31);
		int32_t L_33;
		L_33 = U23Pmb_U23Omb_m2D154F74B5566641E263C3EDF8B6344A13C44606(L_31, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		return (bool)0;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = ((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->get_U238lb_2();
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		__this->set_U23dmb_7(L_38);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = ((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->get_U239lb_3();
		int32_t L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		__this->set_U23bmb_5(L_42);
	}

IL_0136:
	{
		int32_t L_43 = __this->get_U23bmb_5();
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_0181;
		}
	}
	{
		__this->set_U23amb_4(((int32_t)10));
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_44 = __this->get_U23a1_10();
		int32_t L_45 = __this->get_U23bmb_5();
		NullCheck(L_44);
		int32_t L_46;
		L_46 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_44, L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		int32_t L_47 = V_4;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		return (bool)0;
	}

IL_0161:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_48 = __this->get_U23a1_10();
		int32_t L_49 = __this->get_U23bmb_5();
		NullCheck(L_48);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_48, L_49, /*hidden argument*/NULL);
		int32_t L_50 = __this->get_U23dmb_7();
		int32_t L_51 = V_4;
		__this->set_U23dmb_7(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51)));
	}

IL_0181:
	{
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_52 = __this->get_U23gmb_11();
		int32_t L_53 = __this->get_U23cmb_6();
		int32_t L_54 = __this->get_U23dmb_7();
		NullCheck(L_52);
		U23Jmb_U23Emb_m06EFD7AA50AC36BEE1E84D8E73F79CDF89EB5B25(L_52, L_53, L_54, /*hidden argument*/NULL);
		int32_t L_55 = V_0;
		int32_t L_56 = __this->get_U23cmb_6();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56));
		__this->set_U23amb_4(7);
	}

IL_01a8:
	{
		int32_t L_57 = V_0;
		if ((((int32_t)L_57) >= ((int32_t)((int32_t)258))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean #5lb.#4lb/#mmb::#TF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U23mmb_U23TF_mBE4006B4D8FB17C77FADDD347EDFB5774AFF3EE6 (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U23amb_4();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_00dc;
			}
			case 2:
			{
				goto IL_010b;
			}
			case 3:
			{
				goto IL_0131;
			}
			case 4:
			{
				goto IL_0177;
			}
			case 5:
			{
				goto IL_01b5;
			}
			case 6:
			{
				goto IL_01b5;
			}
			case 7:
			{
				goto IL_01b5;
			}
			case 8:
			{
				goto IL_01b5;
			}
			case 9:
			{
				goto IL_01be;
			}
			case 10:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_01be;
	}

IL_0040:
	{
		bool L_2 = __this->get_U23fmb_9();
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		__this->set_U23amb_4(((int32_t)12));
		return (bool)0;
	}

IL_0052:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_3 = __this->get_U23a1_10();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_3, 3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0065:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_6 = __this->get_U23a1_10();
		NullCheck(L_6);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_6, 3, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		if (!((int32_t)((int32_t)L_7&(int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		__this->set_U23fmb_9((bool)1);
	}

IL_007d:
	{
		int32_t L_8 = V_0;
		V_2 = ((int32_t)((int32_t)L_8>>(int32_t)1));
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0095;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_00c8;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_0095:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_10 = __this->get_U23a1_10();
		NullCheck(L_10);
		U23Amb_U23wmb_mB9B8BA1A10E56BF63533B3FDFD3B206A35742CF5(L_10, /*hidden argument*/NULL);
		__this->set_U23amb_4(3);
		goto IL_00da;
	}

IL_00a9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var);
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_11 = ((U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields*)il2cpp_codegen_static_fields_for(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var))->get_U23Lmb_1();
		__this->set_U23imb_13(L_11);
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_12 = ((U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_StaticFields*)il2cpp_codegen_static_fields_for(U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A_il2cpp_TypeInfo_var))->get_U23Mmb_2();
		__this->set_U23jmb_14(L_12);
		__this->set_U23amb_4(7);
		goto IL_00da;
	}

IL_00c8:
	{
		U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * L_13 = (U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A *)il2cpp_codegen_object_new(U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A_il2cpp_TypeInfo_var);
		U234mb__ctor_mE1A14DCEFB0B35AF96A77BB667B2C2C12F289465(L_13, /*hidden argument*/NULL);
		__this->set_U23hmb_12(L_13);
		__this->set_U23amb_4(6);
	}

IL_00da:
	{
		return (bool)1;
	}

IL_00dc:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_14 = __this->get_U23a1_10();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_14, ((int32_t)16), /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		V_2 = L_16;
		__this->set_U23emb_8(L_16);
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		return (bool)0;
	}

IL_00f7:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_18 = __this->get_U23a1_10();
		NullCheck(L_18);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_18, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_U23amb_4(4);
	}

IL_010b:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_19 = __this->get_U23a1_10();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = U23Amb_U23smb_mA32EF256484ADCC51B282A80F9FF6864F3CCB634(L_19, ((int32_t)16), /*hidden argument*/NULL);
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_011d;
		}
	}
	{
		return (bool)0;
	}

IL_011d:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_21 = __this->get_U23a1_10();
		NullCheck(L_21);
		U23Amb_U23tmb_m7453E781A7A487B49B3C2361D2CD49BBA026FA16(L_21, ((int32_t)16), /*hidden argument*/NULL);
		__this->set_U23amb_4(5);
	}

IL_0131:
	{
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_22 = __this->get_U23gmb_11();
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_23 = __this->get_U23a1_10();
		int32_t L_24 = __this->get_U23emb_8();
		NullCheck(L_22);
		int32_t L_25;
		L_25 = U23Jmb_U23Fmb_m3266D3A3CAE45E5187C6D1F580E933F96516D167(L_22, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		int32_t L_26 = __this->get_U23emb_8();
		int32_t L_27 = V_3;
		__this->set_U23emb_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)));
		int32_t L_28 = __this->get_U23emb_8();
		if (L_28)
		{
			goto IL_0168;
		}
	}
	{
		__this->set_U23amb_4(2);
		return (bool)1;
	}

IL_0168:
	{
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_29 = __this->get_U23a1_10();
		NullCheck(L_29);
		bool L_30;
		L_30 = U23Amb_U23xmb_mF7DF26B903E592BAD2D770460D2C21CD2750E3D9(L_29, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
	}

IL_0177:
	{
		U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * L_31 = __this->get_U23hmb_12();
		U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * L_32 = __this->get_U23a1_10();
		NullCheck(L_31);
		bool L_33;
		L_33 = U234mb_U23TF_mE2709D893E2123D30159ED1FCA43A56F8AA5F365(L_31, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_018c;
		}
	}
	{
		return (bool)0;
	}

IL_018c:
	{
		U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * L_34 = __this->get_U23hmb_12();
		NullCheck(L_34);
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_35;
		L_35 = U234mb_U232mb_mE65556041932BBE51D0E6D72BD699F69D79D8842(L_34, /*hidden argument*/NULL);
		__this->set_U23imb_13(L_35);
		U234mb_t06D5CE8D4C76356A80C4CE07D47AADB9D476469A * L_36 = __this->get_U23hmb_12();
		NullCheck(L_36);
		U23Pmb_t1A17C0C4BD7F420DDE80838CBABDB550E64E116A * L_37;
		L_37 = U234mb_U233mb_m5B32D66CEB78C6179DB6575C605864B6608D0F7F(L_36, /*hidden argument*/NULL);
		__this->set_U23jmb_14(L_37);
		__this->set_U23amb_4(7);
	}

IL_01b5:
	{
		bool L_38;
		L_38 = U23mmb_U23kmb_mB8714F201C6C17E624D96EC835B53D2144978ABC(__this, /*hidden argument*/NULL);
		return L_38;
	}

IL_01bc:
	{
		return (bool)0;
	}

IL_01be:
	{
		return (bool)0;
	}
}
// System.Int32 #5lb.#4lb/#mmb::#lmb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U23mmb_U23lmb_mE729F2161943B38A8E7F657D4B8B3360582CE6B2 (U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_U23amb_4();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_002e;
		}
	}
	{
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_1 = __this->get_U23gmb_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = U23Jmb_U23Imb_m931D7682A95DA8B36840E44CDBC88657CF085C48(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = p1;
		int32_t L_7 = V_1;
		p1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		int32_t L_10 = p2;
		int32_t L_11 = V_1;
		p2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		int32_t L_12 = p2;
		if (L_12)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_002e:
	{
		bool L_14;
		L_14 = U23mmb_U23TF_mBE4006B4D8FB17C77FADDD347EDFB5774AFF3EE6(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0002;
		}
	}
	{
		U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * L_15 = __this->get_U23gmb_11();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = U23Jmb_U23Hmb_m6AF3D3E45AD27B4222D643094214C58CE2B86FA9_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_17 = __this->get_U23amb_4();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0002;
		}
	}

IL_004e:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void #5lb.#4lb/#mmb::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23mmb__cctor_mCFC720C129718AFB7BCA87E82ECF2E19744EDA51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23inb_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23lnb_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23pnb_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23qnb_11_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23inb_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->set_U236lb_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23pnb_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->set_U237lb_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23qnb_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->set_U238lb_2(L_7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U23rnb_t5324868C779BD8BC9B765147F85F552F698B86BB____U23lnb_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_StaticFields*)il2cpp_codegen_static_fields_for(U23mmb_t89596A535476E7AD4A9A08F231DF2045D896D374_il2cpp_TypeInfo_var))->set_U239lb_3(L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: #Blb.#Nlb/#Wlb
IL2CPP_EXTERN_C void U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshal_pinvoke(const U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA& unmarshaled, U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U23Rlb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '#Rlb' of type '#Wlb': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U23Rlb_1Exception, NULL);
}
IL2CPP_EXTERN_C void U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshal_pinvoke_back(const U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_pinvoke& marshaled, U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA& unmarshaled)
{
	Exception_t* ___U23Rlb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '#Rlb' of type '#Wlb': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U23Rlb_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: #Blb.#Nlb/#Wlb
IL2CPP_EXTERN_C void U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshal_pinvoke_cleanup(U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: #Blb.#Nlb/#Wlb
IL2CPP_EXTERN_C void U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshal_com(const U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA& unmarshaled, U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_com& marshaled)
{
	Exception_t* ___U23Rlb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '#Rlb' of type '#Wlb': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U23Rlb_1Exception, NULL);
}
IL2CPP_EXTERN_C void U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshal_com_back(const U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_com& marshaled, U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA& unmarshaled)
{
	Exception_t* ___U23Rlb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '#Rlb' of type '#Wlb': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U23Rlb_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: #Blb.#Nlb/#Wlb
IL2CPP_EXTERN_C void U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshal_com_cleanup(U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA_marshaled_com& marshaled)
{
}
// System.String #Blb.#Nlb/#Wlb::#Ulb(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U23Wlb_U23Ulb_m80F143033430A1C0423ADAAB80D97EABB56462D2 (U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA * __this, bool ___U23Vlb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098A172DEA459360162609211F3572251217DFE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8678B56566DBD8D10E4FC877FCA091CC61474683);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	StringBuilder_t * G_B5_0 = NULL;
	StringBuilder_t * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t * G_B6_1 = NULL;
	StringBuilder_t * G_B8_0 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	StringBuilder_t * G_B9_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		String_t* L_2 = __this->get_U23eI_0();
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_2, /*hidden argument*/NULL);
		bool L_4 = ___U23Vlb0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_5 = __this->get_U23Rlb_1();
		IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Version_op_Inequality_mCF079498CD00AA720348D8F7CABEBC8DDA798B0F(L_5, (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_10 = __this->get_U23Rlb_1();
		NullCheck(L_9);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_9, L_10, /*hidden argument*/NULL);
	}

IL_003d:
	{
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral098A172DEA459360162609211F3572251217DFE4, /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = __this->get_U23Slb_2();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		G_B4_0 = L_14;
		if (!L_16)
		{
			G_B5_0 = L_14;
			goto IL_005f;
		}
	}
	{
		String_t* L_17 = __this->get_U23Slb_2();
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_0064;
	}

IL_005f:
	{
		G_B6_0 = _stringLiteral8678B56566DBD8D10E4FC877FCA091CC61474683;
		G_B6_1 = G_B5_0;
	}

IL_0064:
	{
		NullCheck(G_B6_1);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		String_t* L_22 = __this->get_U23Tlb_3();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		G_B7_0 = L_21;
		if (!L_23)
		{
			G_B8_0 = L_21;
			goto IL_008c;
		}
	}
	{
		String_t* L_24 = __this->get_U23Tlb_3();
		G_B9_0 = L_24;
		G_B9_1 = G_B7_0;
		goto IL_0091;
	}

IL_008c:
	{
		G_B9_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B9_1 = G_B8_0;
	}

IL_0091:
	{
		NullCheck(G_B9_1);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		return L_27;
	}
}
IL2CPP_EXTERN_C  String_t* U23Wlb_U23Ulb_m80F143033430A1C0423ADAAB80D97EABB56462D2_AdjustorThunk (RuntimeObject * __this, bool ___U23Vlb0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA * _thisAdjusted = reinterpret_cast<U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = U23Wlb_U23Ulb_m80F143033430A1C0423ADAAB80D97EABB56462D2(_thisAdjusted, ___U23Vlb0, method);
	return _returnValue;
}
// System.Void #Blb.#Nlb/#Wlb::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U23Wlb__ctor_m135F6B78DD9073734977C54CA9FF3273691010A2 (U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA * __this, String_t* ___U23Xlb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347AE41DEB51E5C24D439F61C0DEC02AEB379143);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49B76FD6DA365DA9C951B077663FBD3B44445367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8678B56566DBD8D10E4FC877FCA091CC61474683);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA4470BB3CEB453F394923B61657ED246080D5B2);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		__this->set_U23Rlb_1((Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U23Slb_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U23Tlb_3(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U23eI_0(L_2);
		String_t* L_3 = ___U23Xlb0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		V_1 = 0;
		goto IL_00e9;
	}

IL_0041:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		String_t* L_12 = V_2;
		NullCheck(L_12);
		bool L_13;
		L_13 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_12, _stringLiteral347AE41DEB51E5C24D439F61C0DEC02AEB379143, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_14, 8, /*hidden argument*/NULL);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_16 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U23Rlb_1(L_16);
		goto IL_00e5;
	}

IL_006b:
	{
		String_t* L_17 = V_2;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_17, _stringLiteral49B76FD6DA365DA9C951B077663FBD3B44445367, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_19, 8, /*hidden argument*/NULL);
		__this->set_U23Slb_2(L_20);
		String_t* L_21 = __this->get_U23Slb_2();
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral8678B56566DBD8D10E4FC877FCA091CC61474683, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U23Slb_2(L_23);
		goto IL_00e5;
	}

IL_00a4:
	{
		String_t* L_24 = V_2;
		NullCheck(L_24);
		bool L_25;
		L_25 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_24, _stringLiteralCA4470BB3CEB453F394923B61657ED246080D5B2, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00de;
		}
	}
	{
		String_t* L_26 = V_2;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_26, ((int32_t)15), /*hidden argument*/NULL);
		__this->set_U23Tlb_3(L_27);
		String_t* L_28 = __this->get_U23Tlb_3();
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_U23Tlb_3(L_30);
		goto IL_00e5;
	}

IL_00de:
	{
		String_t* L_31 = V_2;
		__this->set_U23eI_0(L_31);
	}

IL_00e5:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00e9:
	{
		int32_t L_33 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U23Wlb__ctor_m135F6B78DD9073734977C54CA9FF3273691010A2_AdjustorThunk (RuntimeObject * __this, String_t* ___U23Xlb0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA * _thisAdjusted = reinterpret_cast<U23Wlb_tB661644F66E8DEF4B629CD412FA48928540F3BEA *>(__this + _offset);
	U23Wlb__ctor_m135F6B78DD9073734977C54CA9FF3273691010A2(_thisAdjusted, ___U23Xlb0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BackEnd.SendQueue/ExceptionEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionEvent__ctor_m5AC2410ACE48B736C62811A89622D75F0EB89515 (ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void BackEnd.SendQueue/ExceptionEvent::Invoke(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionEvent_Invoke_m3766B0D020EEF8F6198C1CF3B90AC5B4C2C24275 (ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___e0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___e0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___e0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___e0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___e0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___e0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___e0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Exception_t * >::Invoke(targetMethod, targetThis, ___e0);
					else
						GenericVirtActionInvoker1< Exception_t * >::Invoke(targetMethod, targetThis, ___e0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Exception_t * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___e0);
					else
						VirtActionInvoker1< Exception_t * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___e0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Exception_t *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___e0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Exception_t *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___e0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult BackEnd.SendQueue/ExceptionEvent::BeginInvoke(System.Exception,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionEvent_BeginInvoke_m840739E8CEF094CE785E0F93F3D32CA59267F19B (ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * __this, Exception_t * ___e0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___e0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void BackEnd.SendQueue/ExceptionEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionEvent_EndInvoke_m163B7169910F7628B65201DC1DFF04D0B60E7AF5 (ExceptionEvent_t1A1A6CCF97D3056C4DE7B022CB98F9B18E978E57 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResolveEventArgs_get_Name_mC105BF1144527EE2FBA2CE14883C02167E7C7768_inline (ResolveEventArgs_tAB226AF199EA6A6E70F4482348AC5AAB2DEFBB3D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Name_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U23Amb_U23umb_m31DB15CB70BD20AAFD754A4E22097E768F54160F_inline (U23Amb_t82E723FE7F7C9AC29F91A0DC60D42C1EDEEB7CDA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23rmb_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U23Jmb_U23Hmb_m6AF3D3E45AD27B4222D643094214C58CE2B86FA9_inline (U23Jmb_t45B981114B168D6AD70577225CE426B9C9B0D67D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U23Cmb_2();
		return L_0;
	}
}
