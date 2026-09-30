/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 01a1811c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 145
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetCurrentTrackingTransformPose(void)

{
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar2;
  float unaff_s12;
  float unaff_s13;
  
  *(undefined1 *)(unaff_x19 + 0x18c) = 1;
  fVar2 = unaff_s11 - unaff_s8;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar1 = SQRT((unaff_s12 - unaff_s10) * (unaff_s12 - unaff_s10) +
               fVar2 * fVar2 + (unaff_s13 - unaff_s9) * (unaff_s13 - unaff_s9));
  if (fVar1 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    fVar2 = **(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
  }
  else {
    fVar2 = fVar2 / fVar1;
  }
  return fVar2;
}


