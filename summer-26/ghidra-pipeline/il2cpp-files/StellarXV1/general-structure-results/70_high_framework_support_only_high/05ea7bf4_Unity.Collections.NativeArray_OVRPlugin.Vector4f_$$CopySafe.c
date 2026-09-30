/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 05ea7bf4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(long param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  uint uVar4;
  long unaff_x21;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
  }
  uVar3 = (uint)unaff_x19;
  uVar4 = (uint)((ulong)unaff_x19 >> 0x20);
  if (unaff_x20 == 0) {
    if (uVar4 != 0 || uVar3 != 0) {
      FUN_0769a508(0);
    }
    unaff_x19 = 0;
    unaff_x20 = 0;
  }
  else {
    if ((*(uint *)(unaff_x20 + 0x18) < uVar3) || (*(uint *)(unaff_x20 + 0x18) - uVar3 < uVar4)) {
      FUN_0769a508(0);
    }
    thunk_FUN_040ec700();
  }
  auVar5._8_8_ = unaff_x19;
  auVar5._0_8_ = unaff_x20;
  return auVar5;
}


