/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$Start
ENTRY_POINT: 05c780e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__Start
               (undefined1 param_1 [16],undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  
  *(long *)(unaff_x20 + 0x40) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x38) = param_1._0_8_;
  FUN_044be398(param_2,*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x40),
               *unaff_x23);
  FUN_044487b0();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
            (unaff_x20 + 0x48,*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x50),
             *unaff_x21);
  return;
}


