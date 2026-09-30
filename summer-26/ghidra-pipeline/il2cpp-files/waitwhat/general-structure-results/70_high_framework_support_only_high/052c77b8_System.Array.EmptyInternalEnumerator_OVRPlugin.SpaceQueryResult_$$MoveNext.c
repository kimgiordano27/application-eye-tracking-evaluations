/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 052c77b8
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


uint System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long unaff_x23;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  uVar1 = FUN_052c76f8(param_2,param_3,param_4,param_5,
                       *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  return (uVar1 ^ 0xffffffff) & 1;
}


