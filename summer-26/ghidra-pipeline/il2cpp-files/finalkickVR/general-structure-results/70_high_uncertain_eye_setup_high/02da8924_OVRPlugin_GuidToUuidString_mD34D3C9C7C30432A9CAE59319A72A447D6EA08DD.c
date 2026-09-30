/*
FUNCTION_NAME: OVRPlugin_GuidToUuidString_mD34D3C9C7C30432A9CAE59319A72A447D6EA08DD
ENTRY_POINT: 02da8924
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
OVRPlugin_GuidToUuidString_mD34D3C9C7C30432A9CAE59319A72A447D6EA08DD
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  Il2CppObject *pIVar5;
  int local_3c;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_ContainsKey__;
  local_20 = param_1;
  local_18 = param_2;
  if ((OVRPlugin_GuidToUuidString_mD34D3C9C7C30432A9CAE59319A72A447D6EA08DD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__);
    OVRPlugin_GuidToUuidString_mD34D3C9C7C30432A9CAE59319A72A447D6EA08DD::s_Il2CppMethodInitialized
         = 1;
  }
  uVar3 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9(&local_20);
  pvVar4 = (void *)BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(uVar3,0);
  NullCheck(pvVar4);
  pvVar4 = (void *)String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166
                             (pvVar4,*(undefined8 *)puVar1,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__
                              ,0);
  NullCheck(pvVar4);
  pvVar4 = (void *)String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(pvVar4,0);
  pIVar5 = (Il2CppObject *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__
                     );
  StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(pIVar5,0x24,0);
  for (local_3c = 0; local_3c < 0x20; local_3c = il2cpp_codegen_add<int,int>(local_3c,1)) {
    NullCheck(pvVar4);
    uVar2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(pvVar4,local_3c);
    NullCheck(pIVar5);
    StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(pIVar5,uVar2,0);
    if ((((local_3c == 7) || (local_3c == 0xb)) || (local_3c == 0xf)) || (local_3c == 0x13)) {
      NullCheck(pIVar5);
      StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(pIVar5,*(undefined8 *)puVar1,0)
      ;
    }
  }
  NullCheck(pIVar5);
  uVar3 = VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar5);
  return uVar3;
}


