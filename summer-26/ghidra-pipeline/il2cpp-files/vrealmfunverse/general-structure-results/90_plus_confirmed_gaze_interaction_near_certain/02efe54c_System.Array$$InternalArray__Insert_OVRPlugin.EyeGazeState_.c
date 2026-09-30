/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02efe54c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 229
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_0353a87c(&stack0x00000010);
    uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  }
  return uVar1;
}


