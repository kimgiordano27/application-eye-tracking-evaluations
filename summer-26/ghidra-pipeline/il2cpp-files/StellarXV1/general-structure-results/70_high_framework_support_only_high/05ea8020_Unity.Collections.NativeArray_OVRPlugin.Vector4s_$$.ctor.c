/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05ea8020
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  undefined1 auVar4 [16];
  
  FUN_040b1acc(param_1);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(uint *)(unaff_x20 + 8);
  uVar2 = *(uint *)(unaff_x20 + 0xc);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
  if ((unaff_w23 < uVar1) || (unaff_w23 - uVar1 < uVar2)) {
    FUN_0769a508(0);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  auVar4._8_4_ = uVar2;
  auVar4._0_8_ = unaff_x21 + (long)(int)uVar1 * 8;
  auVar4._12_4_ = 0;
  return auVar4;
}


