/*
FUNCTION_NAME: EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke
ENTRY_POINT: 017f9fdc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 218
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke
               (ulong *param_1,long *param_2)

{
  EyeGazeState_t153E4D1AFFFEB96639D94D67C265E63D84DE9976 *pEVar1;
  undefined1 auStack_50 [36];
  int local_2c;
  ulong local_28;
  long *local_20;
  ulong *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (*param_1 == 0) {
    *param_2 = 0;
  }
  else {
    local_28 = *(ulong *)(*param_1 + 0x18);
    pEVar1 = il2cpp_codegen_marshal_allocate_array<EyeGazeState_t153E4D1AFFFEB96639D94D67C265E63D84DE9976>
                       (local_28);
    *local_20 = (long)pEVar1;
    for (local_2c = 0; local_2c < (int)local_28; local_2c = local_2c + 1) {
      EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::GetAtUnchecked(*local_18);
      memcpy((void *)(*local_20 + (long)local_2c * 0x24),auStack_50,0x24);
    }
  }
  local_20[1] = local_18[1];
  return;
}


