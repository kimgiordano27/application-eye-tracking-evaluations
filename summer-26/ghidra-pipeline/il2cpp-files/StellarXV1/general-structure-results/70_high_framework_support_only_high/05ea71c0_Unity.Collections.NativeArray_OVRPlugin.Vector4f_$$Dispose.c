/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 05ea71c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar3 = *(uint *)(unaff_x21 + 0x10);
  uVar4 = *(ushort *)(lVar5 + 0x135);
  if ((uVar4 & 1) == 0) {
    FUN_040b1acc(lVar5);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *(ushort *)(lVar5 + 0x135);
  }
  uVar1 = *(uint *)(unaff_x20 + 8);
  uVar2 = *(uint *)(unaff_x20 + 0xc);
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb0);
  if ((uVar3 < uVar1) || (uVar3 - uVar1 < uVar2)) {
    FUN_0769a508(0);
  }
  if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  auVar6._8_4_ = uVar2;
  auVar6._0_8_ = param_1 + (long)(int)uVar1 * 2;
  auVar6._12_4_ = 0;
  return auVar6;
}


