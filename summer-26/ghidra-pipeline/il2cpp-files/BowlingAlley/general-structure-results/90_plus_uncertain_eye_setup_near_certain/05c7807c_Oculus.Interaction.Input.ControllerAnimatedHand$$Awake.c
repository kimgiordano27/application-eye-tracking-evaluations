/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$Awake
ENTRY_POINT: 05c7807c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__Awake
               (undefined1 param_1 [16],undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(long *)(unaff_x20 + 0x20) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x18) = param_1._0_8_;
  FUN_0451f704(param_2,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x20),
               *unaff_x24);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_044487b0(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x30),4,0,*unaff_x22);
  *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000020;
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
            (unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),
             *unaff_x21);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_044bdf14(&stack0x00000010,*(undefined4 *)(unaff_x19 + 0x40),4,0,*unaff_x25);
  *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000010;
  FUN_044be398(unaff_x20 + 0x38,*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x40),
               *unaff_x23);
  FUN_044487b0();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
            (unaff_x20 + 0x48,*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x50),
             *unaff_x21);
  return;
}


