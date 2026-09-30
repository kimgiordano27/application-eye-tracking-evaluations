/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnlySpan
ENTRY_POINT: 05ea7ec8
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


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnlySpan
          (undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar1 = uVar2 & 0x7fffffff;
  if (uVar1 < param_2 || uVar1 - param_2 < param_3) {
    FUN_0769a508(0);
  }
  uVar5 = *param_1;
  iVar3 = *(int *)(param_1 + 1);
  local_40 = 0;
  local_38 = 0;
  uStack_34 = 0;
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  local_40 = uVar5;
  thunk_FUN_040ec700(&local_40,uVar5);
  auVar4._8_4_ = iVar3 + param_2;
  auVar4._0_8_ = local_40;
  auVar4._12_4_ = uVar2 & 0x80000000 | param_3;
  return auVar4;
}


