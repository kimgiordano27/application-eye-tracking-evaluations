/*
FUNCTION_NAME: TTSService_GetAllRuntimeCachedClips_mBC018CF0D41BC06099306FFDEFF052CFEC869C20
ENTRY_POINT: 0252d0e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
TTSService_GetAllRuntimeCachedClips_mBC018CF0D41BC06099306FFDEFF052CFEC869C20(Il2CppObject *param_1)

{
  Il2CppObject *pIVar1;
  undefined8 local_18;
  
  if ((TTSService_GetAllRuntimeCachedClips_mBC018CF0D41BC06099306FFDEFF052CFEC869C20::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
    TTSService_GetAllRuntimeCachedClips_mBC018CF0D41BC06099306FFDEFF052CFEC869C20::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar1 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
  if (pIVar1 == (Il2CppObject *)0x0) {
    local_18 = 0;
  }
  else {
    NullCheck(pIVar1);
    local_18 = InterfaceFuncInvoker0<TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*>::
               Invoke(4,*(Il2CppClass **)Method_System_Array_Resize<OVRPlugin_Quatf>__,pIVar1);
  }
  return local_18;
}


