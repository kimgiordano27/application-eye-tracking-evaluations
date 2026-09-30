/*
FUNCTION_NAME: Unity.Collections.NativeArray<ConnectionPayload>$$.ctor
ENTRY_POINT: 04b6c4d4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Collections_NativeArray<ConnectionPayload>___ctor
               (long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 < 0) {
    FUN_0626411c(0);
  }
  if (param_3 < 0) {
    FUN_06263d60(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_062638b4(0x17,0);
  }
  in_stack_00000030 = param_4[2];
  in_stack_00000028 = param_4[1];
  in_stack_00000020 = *param_4;
                    /* try { // try from 04b6c538 to 04c6c57b has its CatchHandler @ 04b6c538
                       catch() { ... } // from try @ 04b6c538 with catch @ 04b6c538
                       catch() { ... } // from try @ 04b6c62c with catch @ 04b6c538
                       catch() { ... } // from try @ 04b6c65c with catch @ 04b6c538
                       catch() { ... } // from try @ 04b6c6d0 with catch @ 04b6c538 */
  System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceQueryResult>
            (*(undefined8 *)(param_1 + 0x10),param_2,param_3,&stack0x00000020);
  return;
}


