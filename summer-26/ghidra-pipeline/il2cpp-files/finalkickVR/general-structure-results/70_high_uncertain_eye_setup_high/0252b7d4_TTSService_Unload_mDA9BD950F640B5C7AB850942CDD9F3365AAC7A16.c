/*
FUNCTION_NAME: TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16
ENTRY_POINT: 0252b7d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16
               (Il2CppObject *param_1,TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827 *param_2
               )

{
  long lVar1;
  Il2CppObject *pIVar2;
  String_t *pSVar3;
  
  if ((TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
    TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16::s_Il2CppMethodInitialized = 1;
  }
  lVar1 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
  if (lVar1 == 0) {
    VirtualActionInvoker1<TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*>::Invoke
              (0x18,param_1,param_2);
  }
  else {
    pIVar2 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
    NullCheck(param_2);
    pSVar3 = *(String_t **)(param_2 + 0x18);
    NullCheck(pIVar2);
    InterfaceActionInvoker1<String_t*>::Invoke
              (7,*(Il2CppClass **)Method_System_Array_Resize<OVRPlugin_Quatf>__,pIVar2,pSVar3);
  }
  return;
}


