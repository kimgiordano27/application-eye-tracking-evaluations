/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 04699de8
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,ulong param_5
               )

{
  int iVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02feb2c4(param_1);
  }
  FUN_04699f90(param_3,param_4,param_2,**(undefined8 **)(param_1 + 0xc0));
  if ((param_5 & 1) == 0) {
    return;
  }
  uVar2 = *param_2;
  iVar1 = *(int *)(param_2 + 1);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_068b58dc(uVar2,(long)iVar1 * 0xc,0);
  return;
}


