/*
FUNCTION_NAME: Oculus.Interaction.Input.ControllerAnimatedHand$$get_DeltaTimeProvider
ENTRY_POINT: 05c78064
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_ControllerAnimatedHand__get_DeltaTimeProvider
               (undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  FUN_0451f220(param_1,param_2,4,0);
  *(undefined8 *)(unaff_x20 + 0x20) = uStack0000000000000038;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack0000000000000030;
  FUN_0451f704(unaff_x20 + 0x18,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x20),
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


