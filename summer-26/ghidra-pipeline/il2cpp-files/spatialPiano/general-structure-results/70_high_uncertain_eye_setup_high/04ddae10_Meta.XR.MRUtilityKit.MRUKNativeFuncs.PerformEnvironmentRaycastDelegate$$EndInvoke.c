/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.PerformEnvironmentRaycastDelegate$$EndInvoke
ENTRY_POINT: 04ddae10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_PerformEnvironmentRaycastDelegate__EndInvoke(long param_1)

{
  long lVar1;
  undefined2 *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  uint uStack000000000000000c;
  
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = (uint)*unaff_x21;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x148) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  FUN_050d2bd4(&stack0x0000000c,*unaff_x19,0);
  return;
}


