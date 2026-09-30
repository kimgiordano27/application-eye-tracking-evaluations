/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$.ctor
ENTRY_POINT: 042a44c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>___ctor(void)

{
  uint in_w8;
  uint unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  long lVar1;
  long unaff_x22;
  undefined1 auVar2 [16];
  
  if (in_w8 < unaff_w19) {
    FUN_050f577c(0);
  }
  lVar1 = *unaff_x21;
  if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  auVar2._8_4_ = unaff_w19;
  auVar2._0_8_ = lVar1 + (long)unaff_w20 * 0x40;
  auVar2._12_4_ = 0;
  return auVar2;
}


