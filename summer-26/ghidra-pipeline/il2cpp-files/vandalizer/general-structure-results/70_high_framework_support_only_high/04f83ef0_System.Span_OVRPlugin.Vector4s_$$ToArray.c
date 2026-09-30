/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 04f83ef0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Span<OVRPlugin_Vector4s>__ToArray(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong unaff_x19;
  long unaff_x20;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = unaff_x19 >> 0x20;
  if ((param_1 & 1) == 0) {
    FUN_0322bef4();
  }
  uVar2 = (uint)unaff_x19;
  uVar3 = (uint)(unaff_x19 >> 0x20);
  if (unaff_x20 == 0) {
    if (uVar3 != 0 || uVar2 != 0) {
      FUN_05e21fe0(0);
    }
    uVar4 = 0;
    lVar1 = 0;
  }
  else {
    if ((*(uint *)(unaff_x20 + 0x18) < uVar2) || (*(uint *)(unaff_x20 + 0x18) - uVar2 < uVar3)) {
      FUN_05e21fe0(0);
    }
    lVar1 = unaff_x20 + (long)(int)uVar2 * 0x24 + 0x20;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}


