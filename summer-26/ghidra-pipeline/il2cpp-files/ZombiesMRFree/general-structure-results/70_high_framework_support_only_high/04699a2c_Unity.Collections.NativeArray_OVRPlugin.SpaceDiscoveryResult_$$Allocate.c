/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 04699a2c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02feb2c4(param_1);
  }
  FUN_04699c20(param_2,param_3,param_4,param_5,unaff_w20,unaff_w19,
               *(undefined8 *)(*(long *)(param_1 + 0xc0) + 200));
  return;
}


