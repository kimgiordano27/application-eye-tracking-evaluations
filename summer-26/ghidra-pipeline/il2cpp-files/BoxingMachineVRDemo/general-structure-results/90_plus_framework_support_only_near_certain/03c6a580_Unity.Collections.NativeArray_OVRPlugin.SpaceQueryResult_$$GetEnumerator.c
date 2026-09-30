/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 03c6a580
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (long param_1,int param_2)

{
  int unaff_w20;
  long unaff_x22;
  
  if (param_2 < 0) {
    FUN_05027ebc(0);
  }
  if (unaff_w20 < 0) {
    FUN_05027b00(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w20) {
    FUN_05027654(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_03295090(*(undefined8 *)(param_1 + 0x10),param_2,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


