/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.ASPermissionFlowTelemetry$$MergeFrom
ENTRY_POINT: 04fbb8c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Niantic_Platform_Analytics_Telemetry_ASPermissionFlowTelemetry__MergeFrom
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_065fe000;
  if ((DAT_06a6fc79 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065fe000);
    DAT_06a6fc79 = 1;
  }
  in_stack_00000008 = 0;
  Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
            (&stack0x00000008,param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x44) = in_stack_00000008;
  return;
}


