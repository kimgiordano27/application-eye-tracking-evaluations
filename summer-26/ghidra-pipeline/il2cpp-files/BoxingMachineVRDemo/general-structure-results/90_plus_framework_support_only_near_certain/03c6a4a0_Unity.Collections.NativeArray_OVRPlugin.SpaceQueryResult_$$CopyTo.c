/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 03c6a4a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo(long param_1,int param_2)

{
  int iVar1;
  int unaff_w19;
  
  if (param_2 < 0) {
    FUN_05027ebc(0);
  }
  if (unaff_w19 < 0) {
    FUN_05027b00(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w19) {
    FUN_05027654(0x17,0);
  }
  if (0 < unaff_w19) {
    iVar1 = *(int *)(param_1 + 0x18) - unaff_w19;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 - param_2 != 0 && param_2 <= iVar1) {
      FUN_05029918(*(undefined8 *)(param_1 + 0x10),unaff_w19 + param_2,
                   *(undefined8 *)(param_1 + 0x10),param_2,iVar1 - param_2,0);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    FUN_05029664(*(undefined8 *)(param_1 + 0x10),iVar1,unaff_w19,0);
    return;
  }
  return;
}


