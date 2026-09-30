/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Equality
ENTRY_POINT: 03cb4c40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Equality(undefined1 param_1 [16])

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1._8_8_;
  uVar1 = param_1._0_8_;
  unaff_x19[8] = 0;
  unaff_x19[1] = uVar2;
  *unaff_x19 = uVar1;
  unaff_x19[3] = uVar2;
  unaff_x19[2] = uVar1;
  unaff_x19[5] = uVar2;
  unaff_x19[4] = uVar1;
  unaff_x19[7] = uVar2;
  unaff_x19[6] = uVar1;
  return;
}


