/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 064a63b8
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


undefined1  [16]
System_Span<OVRPlugin_Vector2f>__ToArray(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0xa8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
    uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
    uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
    uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
  }
  uVar5 = param_3 >> 0x20;
  if ((uVar2 & 1) == 0) {
    FUN_040b1acc();
  }
  uVar3 = (uint)param_3;
  uVar4 = (uint)(param_3 >> 0x20);
  if (param_2 == 0) {
    if (uVar4 != 0 || uVar3 != 0) {
      FUN_0769a508(0);
    }
    uVar5 = 0;
    lVar1 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 0x18) < uVar3) || (*(uint *)(param_2 + 0x18) - uVar3 < uVar4)) {
      FUN_0769a508(0);
    }
    lVar1 = param_2 + (long)(int)uVar3 * 0xc + 0x20;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar1;
  return auVar6;
}


