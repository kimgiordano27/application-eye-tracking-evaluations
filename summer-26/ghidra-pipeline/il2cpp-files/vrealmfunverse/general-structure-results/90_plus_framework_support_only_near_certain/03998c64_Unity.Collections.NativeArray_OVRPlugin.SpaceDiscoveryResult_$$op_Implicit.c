/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 03998c64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (undefined8 param_1,long param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  FUN_047739c4(&local_30,param_1,
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x138));
  uStack_48 = uStack_28;
  local_50 = local_30;
  uStack_38 = uStack_18;
  uStack_40 = uStack_20;
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x130),&local_50);
  return;
}


