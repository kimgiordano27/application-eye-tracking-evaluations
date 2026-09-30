/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 05ea6380
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__ToArray(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  uint unaff_w23;
  undefined1 auVar5 [16];
  
  uVar3 = *(ushort *)(param_1 + 0x135);
  if ((uVar3 & 1) == 0) {
    FUN_040b1acc(param_1);
    param_1 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(param_1 + 0x135);
  }
  uVar1 = *(uint *)(unaff_x20 + 8);
  uVar2 = *(uint *)(unaff_x20 + 0xc);
  if ((uVar3 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0xb0);
  if ((unaff_w23 < uVar1) || (unaff_w23 - uVar1 < uVar2)) {
    FUN_0769a508(0);
  }
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  auVar5._8_4_ = uVar2;
  auVar5._0_8_ = param_2 + (int)uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}


