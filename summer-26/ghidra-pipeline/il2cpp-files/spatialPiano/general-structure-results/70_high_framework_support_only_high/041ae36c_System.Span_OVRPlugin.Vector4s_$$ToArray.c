/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 041ae36c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Span<OVRPlugin_Vector4s>__ToArray(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined1 auVar3 [16];
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  if (unaff_x19 == 0) {
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
    lVar1 = unaff_x19 + 0x20;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


