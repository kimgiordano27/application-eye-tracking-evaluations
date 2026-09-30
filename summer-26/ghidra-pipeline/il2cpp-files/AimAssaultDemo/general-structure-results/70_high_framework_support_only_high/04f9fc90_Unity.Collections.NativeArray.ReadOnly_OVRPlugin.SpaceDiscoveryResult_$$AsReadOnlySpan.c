/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 04f9fc90
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_3 + 0x20);
  uVar4 = *param_2;
  uVar2 = *(ushort *)(lVar3 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_03775678(lVar3);
    lVar3 = *(long *)(param_3 + 0x20);
    uVar2 = *(ushort *)(lVar3 + 0x135);
  }
  uVar1 = *(undefined4 *)(param_2 + 1);
  if ((uVar2 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  FUN_04f9fc2c(param_1,uVar4,uVar1);
  return;
}


