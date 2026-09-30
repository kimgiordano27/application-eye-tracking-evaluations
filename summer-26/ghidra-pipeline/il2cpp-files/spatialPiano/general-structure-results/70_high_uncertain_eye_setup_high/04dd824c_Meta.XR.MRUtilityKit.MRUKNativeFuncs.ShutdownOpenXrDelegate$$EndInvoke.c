/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ShutdownOpenXrDelegate$$EndInvoke
ENTRY_POINT: 04dd824c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_ShutdownOpenXrDelegate__EndInvoke(long param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar1 = FUN_04dd57c0();
  FUN_0609bf0c(unaff_x20 + 2,unaff_x19 + 2,(long)iVar1,0);
  return 0;
}


