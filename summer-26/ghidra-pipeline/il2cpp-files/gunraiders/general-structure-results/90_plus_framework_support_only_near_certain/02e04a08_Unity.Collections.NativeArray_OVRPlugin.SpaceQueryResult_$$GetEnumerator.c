/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 02e04a08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  FUN_032f24d8(param_1,param_2,0);
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_032f2014(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_022d2100(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


