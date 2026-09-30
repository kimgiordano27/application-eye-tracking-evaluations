/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 058a6d24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (long param_1,uint param_2)

{
  undefined8 in_x9;
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined8 *)(param_1 + 0x2c);
  unaff_x19[2] = in_x9;
  unaff_x19[1] = uVar2;
  *unaff_x19 = uVar1;
  return ~param_2 >> 0x1f;
}


