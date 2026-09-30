/*
FUNCTION_NAME: Unity.Collections.NativeArray<ConnectionPayload>$$.ctor
ENTRY_POINT: 04b6c55c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Collections_NativeArray<ConnectionPayload>___ctor(void)

{
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_0626411c(0);
  if (unaff_w20 < 0) {
    FUN_06263d60(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_062638b4(0x17,0);
  }
  in_stack_00000030 = unaff_x23[2];
  in_stack_00000028 = unaff_x23[1];
  in_stack_00000020 = *unaff_x23;
  System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceQueryResult>
            (*(undefined8 *)(unaff_x24 + 0x10),unaff_w21,unaff_w20,&stack0x00000020);
  return;
}


