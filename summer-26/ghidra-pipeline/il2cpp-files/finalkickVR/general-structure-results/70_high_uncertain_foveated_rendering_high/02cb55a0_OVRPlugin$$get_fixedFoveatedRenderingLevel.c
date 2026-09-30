/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 02cb55a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(uint param_1,undefined8 param_2)

{
  long lVar1;
  uint uStack000000000000000c;
  int iStack000000000000003c;
  undefined8 uStack0000000000000040;
  uint uStack000000000000004c;
  
  uStack0000000000000040 = param_2;
  uStack000000000000004c = param_1;
  if ((Callback_RunLimitedCallbacks_m0273B0172B83DC54AF8BE490E5FBB9ECFEBADC32::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    Callback_RunLimitedCallbacks_m0273B0172B83DC54AF8BE490E5FBB9ECFEBADC32::
    s_Il2CppMethodInitialized = 1;
  }
  iStack000000000000003c = 0;
  while( true ) {
    uStack000000000000000c = uStack000000000000004c;
    if (((long)(ulong)uStack000000000000004c <= (long)iStack000000000000003c) ||
       (lVar1 = Message_PopMessage_mB911CCF49C8087FE53C54707CF44C6EC2BEE3C24
                          ((long)iStack000000000000003c - (ulong)uStack000000000000004c,0),
       lVar1 == 0)) break;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    Callback_HandleMessage_m7D9FEE932E3BDBEBE74EBC89165A8E807870104A(lVar1,0);
    iStack000000000000003c = il2cpp_codegen_add<int,int>(iStack000000000000003c,1);
  }
  return;
}


