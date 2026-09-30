/*
FUNCTION_NAME: Oculus.Interaction.Input.DominantHandRef$$GetPointerPose
ENTRY_POINT: 01934b00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure
*/


float Oculus_Interaction_Input_DominantHandRef__GetPointerPose(void)

{
  bool in_NG;
  int in_w8;
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s10;
  
  if (in_NG) {
    if (in_w8 == 0) {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      *(undefined1 *)(unaff_x19 + 0x18c) = 1;
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar1 = 0.0;
  }
  else {
    if (in_w8 == 0) {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      *(undefined1 *)(unaff_x19 + 0x18c) = 1;
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar1 = -(unaff_s8 * (1.0 / SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + 0.0)));
  }
  return fVar1;
}


