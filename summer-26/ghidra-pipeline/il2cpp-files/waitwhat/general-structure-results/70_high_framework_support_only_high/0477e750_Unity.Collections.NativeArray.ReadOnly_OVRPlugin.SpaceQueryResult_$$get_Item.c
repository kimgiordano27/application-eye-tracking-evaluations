/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 0477e750
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Item
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_05971910(param_1,0);
  lVar2 = *(long *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  uVar1 = FUN_03188b1c(lVar2,param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}


